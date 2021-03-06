//stamp:22de7edc061bc4ca
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				XML_page = _T("LAYOUT:XML_page");
				XML_MyDevice = _T("LAYOUT:XML_MyDevice");
				XML_MyDevice_Info = _T("LAYOUT:XML_MyDevice_Info");
				XML_dlg_battry = _T("LAYOUT:XML_dlg_battry");
				XML_dlg_all = _T("LAYOUT:XML_dlg_all");
				XML_App_Info = _T("LAYOUT:XML_App_Info");
				XML_dlg_itunesrepair = _T("LAYOUT:XML_dlg_itunesrepair");
				XML_FileMgr = _T("LAYOUT:XML_FileMgr");
				XML_dlg_loading = _T("LAYOUT:XML_dlg_loading");
				XML_dlg_about = _T("LAYOUT:XML_dlg_about");
				XML_Backup_Restore = _T("LAYOUT:XML_Backup_Restore");
				XML_Contacts = _T("LAYOUT:XML_Contacts");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * XML_page;
			const TCHAR * XML_MyDevice;
			const TCHAR * XML_MyDevice_Info;
			const TCHAR * XML_dlg_battry;
			const TCHAR * XML_dlg_all;
			const TCHAR * XML_App_Info;
			const TCHAR * XML_dlg_itunesrepair;
			const TCHAR * XML_FileMgr;
			const TCHAR * XML_dlg_loading;
			const TCHAR * XML_dlg_about;
			const TCHAR * XML_Backup_Restore;
			const TCHAR * XML_Contacts;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
				template_cpp = _T("values:template");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
			const TCHAR * template_cpp;
		}values;
		class _IMG{
			public:
			_IMG(){
				traymenu_icons = _T("IMG:traymenu_icons");
				png_tab_main = _T("IMG:png_tab_main");
				png_page_icons = _T("IMG:png_page_icons");
				png_logo = _T("IMG:png_logo");
				png_mydevice = _T("IMG:png_mydevice");
				png_bell = _T("IMG:png_bell");
				png_skinbtn = _T("IMG:png_skinbtn");
				png_connect_dev = _T("IMG:png_connect_dev");
				png_pro_pc_apps = _T("IMG:png_pro_pc_apps");
				png_menu_bk = _T("IMG:png_menu_bk");
				png_icon_list = _T("IMG:png_icon_list");
				png_iphonescreen = _T("IMG:png_iphonescreen");
				png_ipadscreen = _T("IMG:png_ipadscreen");
				png_battery = _T("IMG:png_battery");
				png_batterybk = _T("IMG:png_batterybk");
				png_BatteryCurrentCapacity = _T("IMG:png_BatteryCurrentCapacity");
				png_check = _T("IMG:png_check");
				png_close = _T("IMG:png_close");
				png_max = _T("IMG:png_max");
				png_menu = _T("IMG:png_menu");
				png_min = _T("IMG:png_min");
				png_restore = _T("IMG:png_restore");
				png_loading = _T("IMG:png_loading");
				png_btn_edit = _T("IMG:png_btn_edit");
				png_skin_apps = _T("IMG:png_skin_apps");
				png_shadow = _T("IMG:png_shadow");
				png_shadow2 = _T("IMG:png_shadow2");
				png_repair = _T("IMG:png_repair");
				png_cmdicons = _T("IMG:png_cmdicons");
				png_devbackup = _T("IMG:png_devbackup");
				png_def_avatar = _T("IMG:png_def_avatar");
			}
			const TCHAR * traymenu_icons;
			const TCHAR * png_tab_main;
			const TCHAR * png_page_icons;
			const TCHAR * png_logo;
			const TCHAR * png_mydevice;
			const TCHAR * png_bell;
			const TCHAR * png_skinbtn;
			const TCHAR * png_connect_dev;
			const TCHAR * png_pro_pc_apps;
			const TCHAR * png_menu_bk;
			const TCHAR * png_icon_list;
			const TCHAR * png_iphonescreen;
			const TCHAR * png_ipadscreen;
			const TCHAR * png_battery;
			const TCHAR * png_batterybk;
			const TCHAR * png_BatteryCurrentCapacity;
			const TCHAR * png_check;
			const TCHAR * png_close;
			const TCHAR * png_max;
			const TCHAR * png_menu;
			const TCHAR * png_min;
			const TCHAR * png_restore;
			const TCHAR * png_loading;
			const TCHAR * png_btn_edit;
			const TCHAR * png_skin_apps;
			const TCHAR * png_shadow;
			const TCHAR * png_shadow2;
			const TCHAR * png_repair;
			const TCHAR * png_cmdicons;
			const TCHAR * png_devbackup;
			const TCHAR * png_def_avatar;
		}IMG;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
		class _SMENU{
			public:
			_SMENU(){
				menu_skin = _T("SMENU:menu_skin");
				menu_tray = _T("SMENU:menu_tray");
				menu_main = _T("SMENU:menu_main");
			}
			const TCHAR * menu_skin;
			const TCHAR * menu_tray;
			const TCHAR * menu_main;
		}SMENU;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"BaseInfoWnd",65564},
		{L"Name",65549},
		{L"Txt_Tip",65555},
		{L"_name_start",65535},
		{L"app_check_all",65624},
		{L"apps_ctrl_wnd",65623},
		{L"apps_header",65629},
		{L"batterybk",65569},
		{L"batterycap",65608},
		{L"bkwnd",65551},
		{L"btn_",65591},
		{L"btn_CheckiTunes",65546},
		{L"btn_WARRANTYEXPIRATIONDATE",65583},
		{L"btn_appUninstall",65641},
		{L"btn_appcenter",65538},
		{L"btn_batteryInfo",65589},
		{L"btn_check",65643},
		{L"btn_close",65544},
		{L"btn_etdevname",65560},
		{L"btn_goback",65649},
		{L"btn_goforward",65650},
		{L"btn_installapp",65625},
		{L"btn_max",65542},
		{L"btn_menu",65540},
		{L"btn_min",65541},
		{L"btn_mydevice",65537},
		{L"btn_openitunesurl",65645},
		{L"btn_reboot",65561},
		{L"btn_refershapp",65627},
		{L"btn_repair",65646},
		{L"btn_restore",65543},
		{L"btn_showDevInfo",65592},
		{L"btn_shutdown",65562},
		{L"btn_skin",65539},
		{L"btn_sleep",65563},
		{L"btn_uninstallapp",65626},
		{L"cachesize",65638},
		{L"check",65631},
		{L"contactInfo",65667},
		{L"disk_app",65596},
		{L"disk_av",65598},
		{L"disk_free",65601},
		{L"disk_free1",65604},
		{L"disk_free2",65607},
		{L"disk_other",65600},
		{L"disk_photo",65597},
		{L"disk_sys",65595},
		{L"disk_u",65599},
		{L"disk_udisk",65606},
		{L"et_devname",65559},
		{L"et_path",65651},
		{L"face",65552},
		{L"img_appIcon",65632},
		{L"img_avatar",65664},
		{L"img_batterycurrentcap",65609},
		{L"img_batteryemtycap",65610},
		{L"img_fileIcon",65654},
		{L"img_loading",65550},
		{L"img_srceenshot",65557},
		{L"img_srceenshotbk",65556},
		{L"lable_ActivationState",65573},
		{L"lable_ActuallyCapacity",65611},
		{L"lable_AppleIDLock",65580},
		{L"lable_BatteryBootVoltage",65615},
		{L"lable_BatteryCurrentCapacity",65570},
		{L"lable_BatteryDate",65618},
		{L"lable_BatteryIsCapacity",65568},
		{L"lable_BatteryOrigin",65617},
		{L"lable_BatterySerialNumber",65613},
		{L"lable_BatteryTemperature",65616},
		{L"lable_BatteryVoltage",65614},
		{L"lable_BluetoothAddress",65620},
		{L"lable_CPU",65585},
		{L"lable_CycleCount",65587},
		{L"lable_CycleLife",65588},
		{L"lable_DesignCapacity",65612},
		{L"lable_DevColor",65567},
		{L"lable_DevName",65619},
		{L"lable_DiskSize",65566},
		{L"lable_DiskType",65586},
		{L"lable_ECID",65578},
		{L"lable_FirmwareVersion",65571},
		{L"lable_HardwareModel",65579},
		{L"lable_IMEI",65576},
		{L"lable_IsJailreak",65572},
		{L"lable_LOC",65584},
		{L"lable_ModelNumber",65575},
		{L"lable_ProductDate",65582},
		{L"lable_ProductName",65565},
		{L"lable_ProductType",65574},
		{L"lable_SerialNumber",65577},
		{L"lable_UDID",65590},
		{L"lable_WiFiAddress",65621},
		{L"lable_amds_ver",65644},
		{L"lable_appCacheSize",65639},
		{L"lable_appName",65633},
		{L"lable_appSize",65637},
		{L"lable_appVer",65635},
		{L"lable_datadisk",65605},
		{L"lable_error_msg",65647},
		{L"lable_fudisk",65594},
		{L"lable_iCloud",65581},
		{L"lable_name",65665},
		{L"lable_path",65655},
		{L"lable_phonenumber",65666},
		{L"lable_size",65657},
		{L"lable_sysdisk",65603},
		{L"lable_time",65661},
		{L"lable_type",65659},
		{L"lb_phonenumbers",65668},
		{L"lv_appsList",65628},
		{L"lv_backupList",65662},
		{L"lv_contactsList",65663},
		{L"lv_filesList",65653},
		{L"name",65630},
		{L"nav_dev_cmd",65553},
		{L"opt",65640},
		{L"root",65536},
		{L"size",65656},
		{L"staticsize",65636},
		{L"tab_apps",65622},
		{L"tab_dev_cmd",65554},
		{L"tab_dev_info",65547},
		{L"tab_main",65545},
		{L"tab_repair",65642},
		{L"time",65660},
		{L"tv_files_mgr",65652},
		{L"tv_ios",65548},
		{L"txt_devname",65558},
		{L"type",65658},
		{L"ver",65634},
		{L"wnd_file_uri",65648},
		{L"wnd_ipaddsk",65593},
		{L"wnd_iphonedsk",65602}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			BaseInfoWnd = namedXmlID[0].strName;
			Name = namedXmlID[1].strName;
			Txt_Tip = namedXmlID[2].strName;
			_name_start = namedXmlID[3].strName;
			app_check_all = namedXmlID[4].strName;
			apps_ctrl_wnd = namedXmlID[5].strName;
			apps_header = namedXmlID[6].strName;
			batterybk = namedXmlID[7].strName;
			batterycap = namedXmlID[8].strName;
			bkwnd = namedXmlID[9].strName;
			btn_ = namedXmlID[10].strName;
			btn_CheckiTunes = namedXmlID[11].strName;
			btn_WARRANTYEXPIRATIONDATE = namedXmlID[12].strName;
			btn_appUninstall = namedXmlID[13].strName;
			btn_appcenter = namedXmlID[14].strName;
			btn_batteryInfo = namedXmlID[15].strName;
			btn_check = namedXmlID[16].strName;
			btn_close = namedXmlID[17].strName;
			btn_etdevname = namedXmlID[18].strName;
			btn_goback = namedXmlID[19].strName;
			btn_goforward = namedXmlID[20].strName;
			btn_installapp = namedXmlID[21].strName;
			btn_max = namedXmlID[22].strName;
			btn_menu = namedXmlID[23].strName;
			btn_min = namedXmlID[24].strName;
			btn_mydevice = namedXmlID[25].strName;
			btn_openitunesurl = namedXmlID[26].strName;
			btn_reboot = namedXmlID[27].strName;
			btn_refershapp = namedXmlID[28].strName;
			btn_repair = namedXmlID[29].strName;
			btn_restore = namedXmlID[30].strName;
			btn_showDevInfo = namedXmlID[31].strName;
			btn_shutdown = namedXmlID[32].strName;
			btn_skin = namedXmlID[33].strName;
			btn_sleep = namedXmlID[34].strName;
			btn_uninstallapp = namedXmlID[35].strName;
			cachesize = namedXmlID[36].strName;
			check = namedXmlID[37].strName;
			contactInfo = namedXmlID[38].strName;
			disk_app = namedXmlID[39].strName;
			disk_av = namedXmlID[40].strName;
			disk_free = namedXmlID[41].strName;
			disk_free1 = namedXmlID[42].strName;
			disk_free2 = namedXmlID[43].strName;
			disk_other = namedXmlID[44].strName;
			disk_photo = namedXmlID[45].strName;
			disk_sys = namedXmlID[46].strName;
			disk_u = namedXmlID[47].strName;
			disk_udisk = namedXmlID[48].strName;
			et_devname = namedXmlID[49].strName;
			et_path = namedXmlID[50].strName;
			face = namedXmlID[51].strName;
			img_appIcon = namedXmlID[52].strName;
			img_avatar = namedXmlID[53].strName;
			img_batterycurrentcap = namedXmlID[54].strName;
			img_batteryemtycap = namedXmlID[55].strName;
			img_fileIcon = namedXmlID[56].strName;
			img_loading = namedXmlID[57].strName;
			img_srceenshot = namedXmlID[58].strName;
			img_srceenshotbk = namedXmlID[59].strName;
			lable_ActivationState = namedXmlID[60].strName;
			lable_ActuallyCapacity = namedXmlID[61].strName;
			lable_AppleIDLock = namedXmlID[62].strName;
			lable_BatteryBootVoltage = namedXmlID[63].strName;
			lable_BatteryCurrentCapacity = namedXmlID[64].strName;
			lable_BatteryDate = namedXmlID[65].strName;
			lable_BatteryIsCapacity = namedXmlID[66].strName;
			lable_BatteryOrigin = namedXmlID[67].strName;
			lable_BatterySerialNumber = namedXmlID[68].strName;
			lable_BatteryTemperature = namedXmlID[69].strName;
			lable_BatteryVoltage = namedXmlID[70].strName;
			lable_BluetoothAddress = namedXmlID[71].strName;
			lable_CPU = namedXmlID[72].strName;
			lable_CycleCount = namedXmlID[73].strName;
			lable_CycleLife = namedXmlID[74].strName;
			lable_DesignCapacity = namedXmlID[75].strName;
			lable_DevColor = namedXmlID[76].strName;
			lable_DevName = namedXmlID[77].strName;
			lable_DiskSize = namedXmlID[78].strName;
			lable_DiskType = namedXmlID[79].strName;
			lable_ECID = namedXmlID[80].strName;
			lable_FirmwareVersion = namedXmlID[81].strName;
			lable_HardwareModel = namedXmlID[82].strName;
			lable_IMEI = namedXmlID[83].strName;
			lable_IsJailreak = namedXmlID[84].strName;
			lable_LOC = namedXmlID[85].strName;
			lable_ModelNumber = namedXmlID[86].strName;
			lable_ProductDate = namedXmlID[87].strName;
			lable_ProductName = namedXmlID[88].strName;
			lable_ProductType = namedXmlID[89].strName;
			lable_SerialNumber = namedXmlID[90].strName;
			lable_UDID = namedXmlID[91].strName;
			lable_WiFiAddress = namedXmlID[92].strName;
			lable_amds_ver = namedXmlID[93].strName;
			lable_appCacheSize = namedXmlID[94].strName;
			lable_appName = namedXmlID[95].strName;
			lable_appSize = namedXmlID[96].strName;
			lable_appVer = namedXmlID[97].strName;
			lable_datadisk = namedXmlID[98].strName;
			lable_error_msg = namedXmlID[99].strName;
			lable_fudisk = namedXmlID[100].strName;
			lable_iCloud = namedXmlID[101].strName;
			lable_name = namedXmlID[102].strName;
			lable_path = namedXmlID[103].strName;
			lable_phonenumber = namedXmlID[104].strName;
			lable_size = namedXmlID[105].strName;
			lable_sysdisk = namedXmlID[106].strName;
			lable_time = namedXmlID[107].strName;
			lable_type = namedXmlID[108].strName;
			lb_phonenumbers = namedXmlID[109].strName;
			lv_appsList = namedXmlID[110].strName;
			lv_backupList = namedXmlID[111].strName;
			lv_contactsList = namedXmlID[112].strName;
			lv_filesList = namedXmlID[113].strName;
			name = namedXmlID[114].strName;
			nav_dev_cmd = namedXmlID[115].strName;
			opt = namedXmlID[116].strName;
			root = namedXmlID[117].strName;
			size = namedXmlID[118].strName;
			staticsize = namedXmlID[119].strName;
			tab_apps = namedXmlID[120].strName;
			tab_dev_cmd = namedXmlID[121].strName;
			tab_dev_info = namedXmlID[122].strName;
			tab_main = namedXmlID[123].strName;
			tab_repair = namedXmlID[124].strName;
			time = namedXmlID[125].strName;
			tv_files_mgr = namedXmlID[126].strName;
			tv_ios = namedXmlID[127].strName;
			txt_devname = namedXmlID[128].strName;
			type = namedXmlID[129].strName;
			ver = namedXmlID[130].strName;
			wnd_file_uri = namedXmlID[131].strName;
			wnd_ipaddsk = namedXmlID[132].strName;
			wnd_iphonedsk = namedXmlID[133].strName;
		}
		 const wchar_t * BaseInfoWnd;
		 const wchar_t * Name;
		 const wchar_t * Txt_Tip;
		 const wchar_t * _name_start;
		 const wchar_t * app_check_all;
		 const wchar_t * apps_ctrl_wnd;
		 const wchar_t * apps_header;
		 const wchar_t * batterybk;
		 const wchar_t * batterycap;
		 const wchar_t * bkwnd;
		 const wchar_t * btn_;
		 const wchar_t * btn_CheckiTunes;
		 const wchar_t * btn_WARRANTYEXPIRATIONDATE;
		 const wchar_t * btn_appUninstall;
		 const wchar_t * btn_appcenter;
		 const wchar_t * btn_batteryInfo;
		 const wchar_t * btn_check;
		 const wchar_t * btn_close;
		 const wchar_t * btn_etdevname;
		 const wchar_t * btn_goback;
		 const wchar_t * btn_goforward;
		 const wchar_t * btn_installapp;
		 const wchar_t * btn_max;
		 const wchar_t * btn_menu;
		 const wchar_t * btn_min;
		 const wchar_t * btn_mydevice;
		 const wchar_t * btn_openitunesurl;
		 const wchar_t * btn_reboot;
		 const wchar_t * btn_refershapp;
		 const wchar_t * btn_repair;
		 const wchar_t * btn_restore;
		 const wchar_t * btn_showDevInfo;
		 const wchar_t * btn_shutdown;
		 const wchar_t * btn_skin;
		 const wchar_t * btn_sleep;
		 const wchar_t * btn_uninstallapp;
		 const wchar_t * cachesize;
		 const wchar_t * check;
		 const wchar_t * contactInfo;
		 const wchar_t * disk_app;
		 const wchar_t * disk_av;
		 const wchar_t * disk_free;
		 const wchar_t * disk_free1;
		 const wchar_t * disk_free2;
		 const wchar_t * disk_other;
		 const wchar_t * disk_photo;
		 const wchar_t * disk_sys;
		 const wchar_t * disk_u;
		 const wchar_t * disk_udisk;
		 const wchar_t * et_devname;
		 const wchar_t * et_path;
		 const wchar_t * face;
		 const wchar_t * img_appIcon;
		 const wchar_t * img_avatar;
		 const wchar_t * img_batterycurrentcap;
		 const wchar_t * img_batteryemtycap;
		 const wchar_t * img_fileIcon;
		 const wchar_t * img_loading;
		 const wchar_t * img_srceenshot;
		 const wchar_t * img_srceenshotbk;
		 const wchar_t * lable_ActivationState;
		 const wchar_t * lable_ActuallyCapacity;
		 const wchar_t * lable_AppleIDLock;
		 const wchar_t * lable_BatteryBootVoltage;
		 const wchar_t * lable_BatteryCurrentCapacity;
		 const wchar_t * lable_BatteryDate;
		 const wchar_t * lable_BatteryIsCapacity;
		 const wchar_t * lable_BatteryOrigin;
		 const wchar_t * lable_BatterySerialNumber;
		 const wchar_t * lable_BatteryTemperature;
		 const wchar_t * lable_BatteryVoltage;
		 const wchar_t * lable_BluetoothAddress;
		 const wchar_t * lable_CPU;
		 const wchar_t * lable_CycleCount;
		 const wchar_t * lable_CycleLife;
		 const wchar_t * lable_DesignCapacity;
		 const wchar_t * lable_DevColor;
		 const wchar_t * lable_DevName;
		 const wchar_t * lable_DiskSize;
		 const wchar_t * lable_DiskType;
		 const wchar_t * lable_ECID;
		 const wchar_t * lable_FirmwareVersion;
		 const wchar_t * lable_HardwareModel;
		 const wchar_t * lable_IMEI;
		 const wchar_t * lable_IsJailreak;
		 const wchar_t * lable_LOC;
		 const wchar_t * lable_ModelNumber;
		 const wchar_t * lable_ProductDate;
		 const wchar_t * lable_ProductName;
		 const wchar_t * lable_ProductType;
		 const wchar_t * lable_SerialNumber;
		 const wchar_t * lable_UDID;
		 const wchar_t * lable_WiFiAddress;
		 const wchar_t * lable_amds_ver;
		 const wchar_t * lable_appCacheSize;
		 const wchar_t * lable_appName;
		 const wchar_t * lable_appSize;
		 const wchar_t * lable_appVer;
		 const wchar_t * lable_datadisk;
		 const wchar_t * lable_error_msg;
		 const wchar_t * lable_fudisk;
		 const wchar_t * lable_iCloud;
		 const wchar_t * lable_name;
		 const wchar_t * lable_path;
		 const wchar_t * lable_phonenumber;
		 const wchar_t * lable_size;
		 const wchar_t * lable_sysdisk;
		 const wchar_t * lable_time;
		 const wchar_t * lable_type;
		 const wchar_t * lb_phonenumbers;
		 const wchar_t * lv_appsList;
		 const wchar_t * lv_backupList;
		 const wchar_t * lv_contactsList;
		 const wchar_t * lv_filesList;
		 const wchar_t * name;
		 const wchar_t * nav_dev_cmd;
		 const wchar_t * opt;
		 const wchar_t * root;
		 const wchar_t * size;
		 const wchar_t * staticsize;
		 const wchar_t * tab_apps;
		 const wchar_t * tab_dev_cmd;
		 const wchar_t * tab_dev_info;
		 const wchar_t * tab_main;
		 const wchar_t * tab_repair;
		 const wchar_t * time;
		 const wchar_t * tv_files_mgr;
		 const wchar_t * tv_ios;
		 const wchar_t * txt_devname;
		 const wchar_t * type;
		 const wchar_t * ver;
		 const wchar_t * wnd_file_uri;
		 const wchar_t * wnd_ipaddsk;
		 const wchar_t * wnd_iphonedsk;
		}name;

		class _id{
		public:
		const static int BaseInfoWnd	=	65564;
		const static int Name	=	65549;
		const static int Txt_Tip	=	65555;
		const static int _name_start	=	65535;
		const static int app_check_all	=	65624;
		const static int apps_ctrl_wnd	=	65623;
		const static int apps_header	=	65629;
		const static int batterybk	=	65569;
		const static int batterycap	=	65608;
		const static int bkwnd	=	65551;
		const static int btn_	=	65591;
		const static int btn_CheckiTunes	=	65546;
		const static int btn_WARRANTYEXPIRATIONDATE	=	65583;
		const static int btn_appUninstall	=	65641;
		const static int btn_appcenter	=	65538;
		const static int btn_batteryInfo	=	65589;
		const static int btn_check	=	65643;
		const static int btn_close	=	65544;
		const static int btn_etdevname	=	65560;
		const static int btn_goback	=	65649;
		const static int btn_goforward	=	65650;
		const static int btn_installapp	=	65625;
		const static int btn_max	=	65542;
		const static int btn_menu	=	65540;
		const static int btn_min	=	65541;
		const static int btn_mydevice	=	65537;
		const static int btn_openitunesurl	=	65645;
		const static int btn_reboot	=	65561;
		const static int btn_refershapp	=	65627;
		const static int btn_repair	=	65646;
		const static int btn_restore	=	65543;
		const static int btn_showDevInfo	=	65592;
		const static int btn_shutdown	=	65562;
		const static int btn_skin	=	65539;
		const static int btn_sleep	=	65563;
		const static int btn_uninstallapp	=	65626;
		const static int cachesize	=	65638;
		const static int check	=	65631;
		const static int contactInfo	=	65667;
		const static int disk_app	=	65596;
		const static int disk_av	=	65598;
		const static int disk_free	=	65601;
		const static int disk_free1	=	65604;
		const static int disk_free2	=	65607;
		const static int disk_other	=	65600;
		const static int disk_photo	=	65597;
		const static int disk_sys	=	65595;
		const static int disk_u	=	65599;
		const static int disk_udisk	=	65606;
		const static int et_devname	=	65559;
		const static int et_path	=	65651;
		const static int face	=	65552;
		const static int img_appIcon	=	65632;
		const static int img_avatar	=	65664;
		const static int img_batterycurrentcap	=	65609;
		const static int img_batteryemtycap	=	65610;
		const static int img_fileIcon	=	65654;
		const static int img_loading	=	65550;
		const static int img_srceenshot	=	65557;
		const static int img_srceenshotbk	=	65556;
		const static int lable_ActivationState	=	65573;
		const static int lable_ActuallyCapacity	=	65611;
		const static int lable_AppleIDLock	=	65580;
		const static int lable_BatteryBootVoltage	=	65615;
		const static int lable_BatteryCurrentCapacity	=	65570;
		const static int lable_BatteryDate	=	65618;
		const static int lable_BatteryIsCapacity	=	65568;
		const static int lable_BatteryOrigin	=	65617;
		const static int lable_BatterySerialNumber	=	65613;
		const static int lable_BatteryTemperature	=	65616;
		const static int lable_BatteryVoltage	=	65614;
		const static int lable_BluetoothAddress	=	65620;
		const static int lable_CPU	=	65585;
		const static int lable_CycleCount	=	65587;
		const static int lable_CycleLife	=	65588;
		const static int lable_DesignCapacity	=	65612;
		const static int lable_DevColor	=	65567;
		const static int lable_DevName	=	65619;
		const static int lable_DiskSize	=	65566;
		const static int lable_DiskType	=	65586;
		const static int lable_ECID	=	65578;
		const static int lable_FirmwareVersion	=	65571;
		const static int lable_HardwareModel	=	65579;
		const static int lable_IMEI	=	65576;
		const static int lable_IsJailreak	=	65572;
		const static int lable_LOC	=	65584;
		const static int lable_ModelNumber	=	65575;
		const static int lable_ProductDate	=	65582;
		const static int lable_ProductName	=	65565;
		const static int lable_ProductType	=	65574;
		const static int lable_SerialNumber	=	65577;
		const static int lable_UDID	=	65590;
		const static int lable_WiFiAddress	=	65621;
		const static int lable_amds_ver	=	65644;
		const static int lable_appCacheSize	=	65639;
		const static int lable_appName	=	65633;
		const static int lable_appSize	=	65637;
		const static int lable_appVer	=	65635;
		const static int lable_datadisk	=	65605;
		const static int lable_error_msg	=	65647;
		const static int lable_fudisk	=	65594;
		const static int lable_iCloud	=	65581;
		const static int lable_name	=	65665;
		const static int lable_path	=	65655;
		const static int lable_phonenumber	=	65666;
		const static int lable_size	=	65657;
		const static int lable_sysdisk	=	65603;
		const static int lable_time	=	65661;
		const static int lable_type	=	65659;
		const static int lb_phonenumbers	=	65668;
		const static int lv_appsList	=	65628;
		const static int lv_backupList	=	65662;
		const static int lv_contactsList	=	65663;
		const static int lv_filesList	=	65653;
		const static int name	=	65630;
		const static int nav_dev_cmd	=	65553;
		const static int opt	=	65640;
		const static int root	=	65536;
		const static int size	=	65656;
		const static int staticsize	=	65636;
		const static int tab_apps	=	65622;
		const static int tab_dev_cmd	=	65554;
		const static int tab_dev_info	=	65547;
		const static int tab_main	=	65545;
		const static int tab_repair	=	65642;
		const static int time	=	65660;
		const static int tv_files_mgr	=	65652;
		const static int tv_ios	=	65548;
		const static int txt_devname	=	65558;
		const static int type	=	65658;
		const static int ver	=	65634;
		const static int wnd_file_uri	=	65648;
		const static int wnd_ipaddsk	=	65593;
		const static int wnd_iphonedsk	=	65602;
		}id;

		class _string{
		public:
		const static int ActivationState	=	0;
		const static int ActuallyCapacity	=	1;
		const static int AppleIDLock	=	2;
		const static int BattaryInfo	=	3;
		const static int BatteryBootVoltage	=	4;
		const static int BatteryCurrentCapacity	=	5;
		const static int BatteryDate	=	6;
		const static int BatteryOrigin	=	7;
		const static int BatterySerialNumber	=	8;
		const static int BatteryTemperature	=	9;
		const static int BatteryVoltage	=	10;
		const static int BluetoothAddress	=	11;
		const static int CPU	=	12;
		const static int CycleCount	=	13;
		const static int CycleLife	=	14;
		const static int DesignCapacity	=	15;
		const static int DevInfo	=	16;
		const static int DevName	=	17;
		const static int DiskType	=	18;
		const static int ECID	=	19;
		const static int FirmwareVersion	=	20;
		const static int HardwareModel	=	21;
		const static int IMEI	=	22;
		const static int IsJailreak	=	23;
		const static int LOC	=	24;
		const static int ModelNumber	=	25;
		const static int ProductDate	=	26;
		const static int ProductType	=	27;
		const static int SerialNumber	=	28;
		const static int ShowDevCheck	=	29;
		const static int ShowDevInfo	=	30;
		const static int WARRANTYEXPIRATIONDATE	=	31;
		const static int WiFiAddress	=	32;
		const static int abouttitle	=	33;
		const static int app	=	34;
		const static int av	=	35;
		const static int cantread	=	36;
		const static int charging	=	37;
		const static int checkcoverage	=	38;
		const static int cmd1	=	39;
		const static int cmd2	=	40;
		const static int cmd3	=	41;
		const static int cmd4	=	42;
		const static int cmd5	=	43;
		const static int free	=	44;
		const static int iCloud	=	45;
		const static int loadding	=	46;
		const static int loadtitle	=	47;
		const static int nocharging	=	48;
		const static int noname	=	49;
		const static int other	=	50;
		const static int photo	=	51;
		const static int system	=	52;
		const static int title	=	53;
		const static int udisk	=	54;
		const static int ver	=	55;
		const static int waitpair	=	56;
		}string;

		class _color{
		public:
		const static int black	=	0;
		const static int blue	=	1;
		const static int disk_app	=	2;
		const static int disk_av	=	3;
		const static int disk_free	=	4;
		const static int disk_other	=	5;
		const static int disk_photo	=	6;
		const static int disk_sys	=	7;
		const static int disk_u	=	8;
		const static int gray	=	9;
		const static int gray2	=	10;
		const static int gray3	=	11;
		const static int gray4	=	12;
		const static int green	=	13;
		const static int infoborder	=	14;
		const static int infotabbknor	=	15;
		const static int infotabbkpush	=	16;
		const static int item_hov	=	17;
		const static int item_sel	=	18;
		const static int mainbk	=	19;
		const static int red	=	20;
		const static int white	=	21;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
