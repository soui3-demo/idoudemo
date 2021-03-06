// MainDlg.cpp : implementation of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MainDlg.h"	
#include "CDataCenter.h"
#include "CBaseInfoDlg.h"
#include <helper\SMenuEx.h>

#define ID_TIEMER_DEV 9

CMainDlg::CMainDlg() : SHostWnd(_T("LAYOUT:XML_MAINWND"))
{
	m_bLayoutInited = FALSE;
	SNotifyCenter::getSingletonPtr()->addEvent(EVENTID(EventDevices));
}

CMainDlg::~CMainDlg()
{
}

int CMainDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	SetMsgHandled(FALSE);
	return 0;
}

void LoadSkinFormXml(SDemoSkin* skin, SkinType* skinType, SkinLoadInf* skininf)
{
	SStringT strSkinConfigPath = SApplication::getSingleton().GetAppDir() + _T("\\themes\\skin_config.xml");

	pugi::xml_document docLoad;
	pugi::xml_parse_result result = docLoad.load_file(strSkinConfigPath);
	if (result)
	{
		pugi::xml_node skinInf = docLoad.child(L"DEMO_SKIN_CONFIG").child(L"skinInf");
		*skinType = (SkinType)skinInf.attribute(L"type").as_int();
		switch (*skinType)
		{
			//纯色只有SkinSaveInf的color有效
		case color:
			skininf->color = skinInf.attribute(L"color").as_int();
			break;
			//此处为系统皮肤，只需要给文件路径和margin
		case sys:
			skininf->filepath = skinInf.attribute(L"skin_path").as_string();
			int v1 = 0, v2 = 0, v3 = 0, v4 = 0;
			swscanf(skinInf.attribute(L"skin_margin").as_string(), L"%d,%d,%d,%d", &v1, &v2, &v3, &v4);
			skininf->margin.left = v1;
			skininf->margin.top = v2;
			skininf->margin.right = v3;
			skininf->margin.bottom = v4;
			break;
		}
	}
}

bool CMainDlg::LoadSkin()
{
	SDemoSkin* skin = (SDemoSkin*)GETSKIN(L"skin_bk", GetScale());
	if (skin)
	{
		SkinLoadInf loadInf;
		SkinType type;
		LoadSkinFormXml(skin, &type, &loadInf);

		if (type == SkinType::color)
		{
			SStringW bkColor;
			bkColor.Format(L"#%02x%02x%02x%02x",
				GetRValue(loadInf.color),
				GetGValue(loadInf.color),
				GetBValue(loadInf.color),
				GetAValue(loadInf.color));
			FindChildByID(R.id.Txt_Tip)->SetAttribute(L"colorText", bkColor);
		}

		skin->SetHander(this);
		return skin->LoadSkin(type, loadInf);
	}
	return false;
}

void CMainDlg::ShowToolTip(LPCTSTR tipMsg)
{
	SShellNotifyIcon* notify = FindChildByID2<SShellNotifyIcon>(110);
	notify->ShowNotify(L"idou", tipMsg);
}

void CMainDlg::OnSkin()
{
	SWindow* pWnd = FindChildByID(R.id.btn_skin);
	if (pWnd)
	{
		CRect rcWnd = pWnd->GetWindowRect();
		ClientToScreen(&rcWnd);
		SMenuEx menu;
		menu.LoadMenu(_T("SMENU:menu_skin"));		
		menu.TrackPopupMenu(0, rcWnd.left - 163, rcWnd.bottom + 2, m_hWnd);
	}
}

void CMainDlg::OnSetSkin(int id)
{
	LPCTSTR skinColor[] = { _T("#236ee7"), _T("#c0c0c0"),_T("#e79481") ,
		_T("#e1839f"), _T("#e97474"), _T("#8eae48"),
		_T("#7f74d1"), _T("#d59d66"), _T("#9f887a") };
	COLORREF color;
	if (SColorParser::ParseValue(skinColor[id - 600], color))
	{
		SDemoSkin* skin = (SDemoSkin*)GETSKIN(L"skin_bk", GetScale());
		if (skin)
		{
			skin->SetColor(color);
			FindChildByID(R.id.Txt_Tip)->SetAttribute(L"colorText", skinColor[id - 600]);
			SWindow::Invalidate();
		}
	}
}

BOOL CMainDlg::OnInitDialog(HWND hWnd, LPARAM lParam)
{
	ModifyStyle(WS_BORDER, 0);
	m_bLayoutInited = TRUE;
	//SShellNotifyIcon *notify = FindChildByID2<SShellNotifyIcon>(110);
	//notify->ShowNotify(L"Hello SOUI",L"这可能是一个提示");

	m_mainTabBinder.BindHost(FindChildByID2<STabCtrl>(R.id.tab_main));
	m_mainTabBinder.Bind(FindChildByID(R.id.btn_mydevice), 0);
	m_mainTabBinder.Bind(FindChildByID(R.id.btn_appcenter), 1);

	STreeView* pTreeView = FindChildByID2<STreeView>(R.id.tv_ios);
	if (pTreeView)
	{
		m_pTreeViewAdapter.Attach(new CiOSDeviceTreeViewAdapter());
		pTreeView->SetAdapter(m_pTreeViewAdapter);
	}
	SetTimer(ID_TIEMER_DEV, 2000);
	LoadSkin();
	return 0;
}
bool CMainDlg::SaveSkin(SkinType skinType, SkinSaveInf & skinSaveInf)
{
	pugi::xml_document docSave;
	pugi::xml_node rootNode = docSave.append_child(L"DEMO_SKIN_CONFIG");
	pugi::xml_node childSkinType = rootNode.append_child(L"skinInf");
	childSkinType.append_attribute(L"type") = skinType;
	SStringT strSkinConfigPath = SApplication::getSingleton().GetAppDir() + _T("\\themes\\skin_config.xml");
	switch (skinType)
	{
	case color://纯色只有SkinSaveInf的color有效
		childSkinType.append_attribute(L"color") = (int)skinSaveInf.color;
		break;
	case sys://此处为系统皮肤，只需要给文件路径和margin
	{
		childSkinType.append_attribute(L"skin_path") = skinSaveInf.filepath;
		SStringW margin;
		margin.Format(L"%d,%d,%d,%d", skinSaveInf.margin.left, skinSaveInf.margin.top, skinSaveInf.margin.right, skinSaveInf.margin.bottom);
		childSkinType.append_attribute(L"skin_margin") = margin;
	}
	break;
	case builtin:
	default:
		break;
	}
	return docSave.save_file(strSkinConfigPath);
}
//TODO:消息映射
void CMainDlg::OnClose()
{
	SNativeWnd::DestroyWindow();
	SDemoSkin* skin = (SDemoSkin*)GETSKIN(L"skin_bk", GetScale());
	if (skin)
	{
		skin->SaveSkin();
	}
}

void CMainDlg::OnMaximize()
{
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE);
}
void CMainDlg::OnRestore()
{
	SendMessage(WM_SYSCOMMAND, SC_RESTORE);
}
void CMainDlg::OnMinimize()
{
	//SendMessage(WM_SYSCOMMAND, SC_MINIMIZE);
	ShowWindow(SW_HIDE);
}

void CMainDlg::OnSize(UINT nType, CSize size)
{
	SetMsgHandled(FALSE);
	if (!m_bLayoutInited) return;

	SWindow* pBtnMax = FindChildByName(L"btn_max");
	SWindow* pBtnRestore = FindChildByName(L"btn_restore");
	if (!pBtnMax || !pBtnRestore) return;

	if (nType == SIZE_MAXIMIZED)
	{
		pBtnRestore->SetVisible(TRUE);
		pBtnMax->SetVisible(FALSE);
	}
	else if (nType == SIZE_RESTORED)
	{
		pBtnRestore->SetVisible(FALSE);
		pBtnMax->SetVisible(TRUE);
	}
}


//演示如何响应菜单事件
void CMainDlg::OnCommand(UINT uNotifyCode, int nID, HWND wndCtl)
{
	if (uNotifyCode == 0)
	{
		switch (nID)
		{
		case 6:
			PostMessage(WM_CLOSE);
			break;
		default:
			break;
		}
	}
}

void CMainDlg::OnTVSelChanged(EventArgs* pEArg)
{
	EventTVSelChanged *pE2=sobj_cast<EventTVSelChanged>(pEArg);
	SASSERT(pE2); 
	
	const CiOSDeviceTreeViewAdapter::ItemInfo& data = m_pTreeViewAdapter->GetData(pE2->hNewSel);

	ChildMenuItemClick(data.data.guid.c_str(),data.data.nCmd);
	m_pTreeViewAdapter->notifyBranchInvalidated(pE2->hNewSel);
}

void CMainDlg::ChildMenuItemClick(LPCSTR udid, int nGID)
{
	STabCtrlTemplate* pTab = FindChildByID2<STabCtrlTemplate>(R.id.nav_dev_cmd);
	SASSERT(pTab);
	if (pTab)
	{
		SStringT strTitle = S_CA2W(udid, CP_UTF8);
		pTab->SetCurSel(strTitle);
		SWindow *pcmdwnd= pTab->GetPage(strTitle);
		SASSERT(pcmdwnd);
		if (pcmdwnd)
		{
			STabCtrl *pTabCmd= pcmdwnd->FindChildByID2<STabCtrl>(R.id.tab_dev_cmd);
			SASSERT(pTabCmd);
			pTabCmd->SetCurSel(nGID-1);
		}
	}
}

void CMainDlg::idevice_event_cb_t(IDEVICE_DEVICE_CMD event,LPCSTR udid)
{
	EventDevices* pEvt = new EventDevices(this);
	pEvt->event = event;
	pEvt->udid = udid;
	SNotifyCenter::getSingletonPtr()->FireEventAsync(pEvt);
	pEvt->Release();
}

void CMainDlg::OnReboot(EventArgs* pEArg)
{
	SWindow* pWnd = sobj_cast<SWindow>(pEArg->sender);
	if (pWnd)
	{
		CDataCenter::getSingleton().Reboot((SWindow*)pWnd->GetUserData());
	}
}

void CMainDlg::OnSleep(EventArgs* pEArg)
{
	SWindow* pWnd = sobj_cast<SWindow>(pEArg->sender);
	if (pWnd)
	{
		CDataCenter::getSingleton().Sleep((SWindow*)pWnd->GetUserData());
	}
}

void CMainDlg::OnShutdown(EventArgs* pEArg)
{
	SWindow* pWnd = sobj_cast<SWindow>(pEArg->sender);
	if (pWnd)
	{
		CDataCenter::getSingleton().ShutDown((SWindow*)pWnd->GetUserData());
	}
}

template<class T>
void CMainDlg::ShowInfoDlg(const std::string&udid)
{
	T battryInfo(udid);
	m_pHostDlg = &battryInfo;
	m_pHostDlg->DoModal(m_hWnd);
	m_pHostDlg = NULL;
}

void CMainDlg::OnBatteryInfo(EventArgs* pEArg)
{
	SWindow* pWnd = sobj_cast<SWindow>(pEArg->sender);
	if (pWnd)
	{	
		std::string udid = CDataCenter::getSingleton().GetUDIDByWindow((SWindow*)pWnd->GetUserData());
		if (!udid.empty())
		{
			ShowInfoDlg<CBattryInfoDlg>(udid);
		}
	}
}

void CMainDlg::OnDevInfo(EventArgs* pEArg)
{
	SWindow* pWnd = sobj_cast<SWindow>(pEArg->sender);
	if (pWnd)
	{
		std::string udid = CDataCenter::getSingleton().GetUDIDByWindow((SWindow*)pWnd->GetUserData());
		if (!udid.empty())
		{
			ShowInfoDlg<CDevInfoDlg>(udid);
		}
	}
}

void CMainDlg::OnTimer(UINT_PTR nIDEvent)
{
	if (nIDEvent == ID_TIEMER_DEV)
	{
		KillTimer(ID_TIEMER_DEV);
		idevice_event_cb_t(IDEVICE_DEVICE_ADD,"123");
		idevice_event_cb_t(IDEVICE_DEVICE_ADD, "321");
	}
	else
		SetMsgHandled(FALSE);
}

void CMainDlg::OnDevicesEvent(EventArgs* e)
{
	EventDevices* e2 = sobj_cast<EventDevices>(e);

	//conn_type没什么用始终为1，
	//event 
	//IDEVICE_DEVICE_ADD = 1,添加
	//IDEVICE_DEVICE_REMOVE,拔出
	//IDEVICE_DEVICE_PAIRED 配对，一个新设备，会先收到添加，如果在手机点击信任电脑会收到配对
	switch (e2->event)
	{
	case IDEVICE_DEVICE_ADD:
	{
			if (CDataCenter::getSingleton().AddDevGUID(e2->udid.c_str(), m_pTreeViewAdapter))
			{
				if (m_pTreeViewAdapter->GetItemCount() > 0)
				{
					FindChildByID2<STabCtrl>(R.id.tab_dev_info)->SetCurSel(0);
				}
				STabCtrlTemplate* pTab = FindChildByID2<STabCtrlTemplate>(R.id.nav_dev_cmd);
				SASSERT(pTab);
				int idx = pTab->InsertItem();
				pTab->SetItemTitle(idx, S_CA2W(e2->udid.c_str()));
				CDataCenter::getSingleton().BindInfoWindow(e2->udid.c_str(), pTab->GetPage(idx));
				CDataCenter::getSingleton().UpdataBaseInfo(e2->udid.c_str());
				if (m_pTreeViewAdapter->GetItemCount() == 1)
				{
					STreeView* pTreeView = FindChildByID2<STreeView>(R.id.tv_ios);
					if (pTreeView)
					{
						pTreeView->SetSel(m_pTreeViewAdapter->GetFirstTreeItem(), TRUE);
					}
				}
			};
	}break;
	case IDEVICE_DEVICE_REMOVE: {

			if (m_pHostDlg && m_pHostDlg->IsEm(e2->udid.c_str()))
			{
				m_pHostDlg->EndDialog(IDCANCEL);
				m_pHostDlg = NULL;
			}
		if (CDataCenter::getSingleton().RemoveDevGUID(e2->udid.c_str(), m_pTreeViewAdapter))
		{
			if (m_pTreeViewAdapter->GetItemCount() == 0)
			{
				FindChildByID2<STabCtrl>(R.id.tab_dev_info)->SetCurSel(1);
			}
			STabCtrlTemplate* pTab = FindChildByID2<STabCtrlTemplate>(R.id.nav_dev_cmd);
			SASSERT(pTab);
			pTab->RemoveItem(pTab->GetPageIndex(S_CA2T(e2->udid.c_str()), TRUE), 0);
		};

	}break;
	case IDEVICE_DEVICE_PAIRED: {
		CDataCenter::getSingleton().PairDev(e2->udid.c_str(), m_pTreeViewAdapter);
	}break;
	}
}
