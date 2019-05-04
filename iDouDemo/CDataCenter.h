#pragma once
#include <set>
#include <string>
#include <map>
#include <string/tstring.h>

//#include "iOsDeviceLib/CiOSDevice.h"
class CiOSDeviceTreeViewAdapter;


struct GasGauge
{
	int CycleCount;
	int DesignCapacity;
	int FullChargeCapacity;
};

struct DiskInfo
{
	//com.apple.disk_usage
	uint64_t TotalDataAvailable;
	uint64_t TotalDataCapacity;
	uint64_t TotalDiskCapacity;
	uint64_t TotalSystemAvailable;
	uint64_t TotalSystemCapacity;
	uint64_t PhotoUsage;
	uint64_t AppUsage;
};

enum IDEVICE_DEVICE_CMD{
	IDEVICE_DEVICE_ADD = 1,
	IDEVICE_DEVICE_REMOVE,
	IDEVICE_DEVICE_PAIRED
};

enum DevType
{
	Type_iPhone = 0,
	Type_iPad = 1,
};

struct iOSDevInfo
{
	DevType	 m_type;
	SStringT m_strFirmwareVersion;//固件版本
	SStringT m_strActivationState;//激活状态
	SStringT m_strDevUDID;//UDID
	SStringT m_strDevName;//设备名
	SStringT m_strDevWiFiAddress;//wifi地址
	SStringT m_strDevBluetoothAddress;//蓝牙地址
	SStringT m_strDevSerialNumber;//序列号
	SStringT m_strDevModelNumber;//型号
	SStringT m_strDevHardwareModel;//硬件模型
	SStringT m_strDevIMEI;
	SStringT m_strDevCpuarc;
	SStringT m_strDevProductType;
	SStringT m_strDevProductName;
	SStringT m_strProductVersion;
	SStringT m_strBuildVersion;
	SStringT m_strICCD;
	SStringT m_strMLBSerialNumber;
	SStringT m_strUniqueChipID;
	SStringT m_strHardwarePlatform;
	SStringT m_strEthernetAddress;
	SStringT m_strDeviceColor;
	SStringT m_strDeviceEnclosureColor;
	SStringT m_strRegionInfo;
	SStringT m_strPhoneNum;


	GasGauge m_sGasGauge;
	DiskInfo m_diskInfo;

};

class CiOSDevice
{
public:
	CiOSDevice() {}
	~CiOSDevice() {}
	bool OpenDevice(LPCSTR udid)
	{
		return true;
	}
	void CloseDevice();
	bool IsOpen() {
		return true;
	}
	bool GetDevName(SStringT& outName)
	{
		outName = L"叶儿怪";
		return true;
	}
	bool GetWifiAddress(SStringT& outMac)
	{
		outMac = L"00:00:00:00";
		return true;
	}
	bool GetBluetoothAddress(SStringT& outMac)
	{
		outMac = L"00:00:00:00";
		return true;
	}
	bool SetDevName(LPCTSTR newName)
	{
		if (newName)
		{
			m_iosInfo.m_strDevName = newName;
			return true;
		}
		return false;
	}	
	//获取不耗时的信息
	bool GetDeviceBaseInfo()
	{
		m_iosInfo.m_diskInfo.TotalDiskCapacity = 3200000000000;
		m_iosInfo.m_diskInfo.TotalSystemCapacity = 430000000;
		m_iosInfo.m_diskInfo.AppUsage = 430000000;
		m_iosInfo.m_diskInfo.PhotoUsage = 430000000;
		m_iosInfo.m_diskInfo.TotalDataCapacity = 430000000;
		return true;
	}
	const iOSDevInfo& GetiOSBaseInfo()
	{
		return m_iosInfo;
	}
	//bool DoCmd(diagnostics_cmd_mode cmd);
	void GetGasGauge(GasGauge& outasGauge)
	{
		outasGauge = m_iosInfo.m_sGasGauge;
	}
protected:
	
private:
public:
	
private:
	iOSDevInfo m_iosInfo;
};

struct iOS {
	SWindow* InfoWnd;
	CiOSDevice iOSDevObject;
};

enum CMD {
	CMD_SHUTDOWN,
	CMD_RESTART,
	CMD_SLEEP
};


class CDataCenter:public SSingleton<CDataCenter>
{
protected:
	std::map<std::string, iOS> m_listDev;
public:
	CDataCenter();
	~CDataCenter();
	bool IsExistDev(LPCSTR guid);
	bool GetDevName(LPCSTR udid, SStringT& outName);
	bool AddDevGUID(LPCSTR guid, CiOSDeviceTreeViewAdapter *pAdapter);
	bool RemoveDevGUID(LPCSTR udid, CiOSDeviceTreeViewAdapter* pAdapter);
	const std::map<std::string, iOS>& GetDevGUIDList()const;
	bool PairDev(LPCSTR id, CiOSDeviceTreeViewAdapter* pAdapter);
	bool BindInfoWindow(LPCSTR udid, SWindow* pInfoWnd);
	bool UpdataBaseInfo(LPCSTR udid);
	void ShutDown(SWindow* pWnd);
	void Reboot(SWindow* pWnd);
	void Sleep(SWindow* pWnd);
	std::string GetUDIDByWindow(SWindow* pWnd);
	const CiOSDevice* GetDevByUDID(LPCSTR udid);
	bool GetGasGauge(LPCSTR udid, GasGauge& out);
private:
	void _docmd(SWindow* pWnd, CMD);
	bool _initdevbaseinfo(const iOSDevInfo&devInfo,SWindow* pInfoWnd);
};