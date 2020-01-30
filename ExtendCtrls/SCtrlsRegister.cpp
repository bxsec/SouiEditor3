#include "stdafx.h"
#include "SCtrlsRegister.h"
//��չ�ؼ�
#include "stabctrl2.h"
#include "SButtonEx.h"
#include "simagemaskwnd.h"
#include "SFreeMoveWindow.h"
#include "SVscrollbar.h"
#include "SSkinNewScrollBar.h"
#include "gif/SSkinGif.h"
#include "gif/SSkinAPNG.h"
#include "gif/SGifPlayer.h"
#include "SScrollText.h"
#include "ExtendSkins.h"
#include "ExtendCtrls.h"
#include "SRatingBar.h"
#include "SListCtrlEx.h"
#include "SIPAddressCtrl.h"
#include "STurn3DView.h"
#include "SRadioBox2.h"
#include "SMcListViewEx/SHeaderCtrlEx.h"
#include <SGroupList.h>
#include <SChromeTabCtrl.h>
#include <SScrollText.h>

namespace SOUI{


void SCtrlsRegister::RegisterCtrls(SApplication *theApp)
{
	theApp->RegisterWindowClass<STabPage2>();//ע��STabPage2
	theApp->RegisterWindowClass<STabCtrl2>();//ע��STabCtrl2
	theApp->RegisterWindowClass<SHeaderCtrlEx>();//ע��STabCtrl2
	theApp->RegisterWindowClass<SChromeTabCtrl>();//ע��ChromeTabCtrl
	theApp->RegisterWindowClass<SImageMaskWnd>();//ע��SImageMaskWnd
	theApp->RegisterWindowClass<SButtonEx>();
	theApp->RegisterWindowClass<SWindowEx>();
	theApp->RegisterWindowClass<SGifPlayer>();//ע��gif
	theApp->RegisterWindowClass<SRatingBar>();
	theApp->RegisterWindowClass<SIPAddressCtrl>();
	theApp->RegisterWindowClass<STurn3dView>();
	theApp->RegisterWindowClass<SRadioBox2>();
	theApp->RegisterWindowClass<SGroupList>();
	theApp->RegisterWindowClass<SScrollText>();


	//extened skins
	theApp->RegisterSkinClass<SColorMask>();
	theApp->RegisterSkinClass<SSkinVScrollbar>();
	theApp->RegisterSkinClass<SSkinNewScrollbar>();
	theApp->RegisterSkinClass<SSkinGif>();
	theApp->RegisterSkinClass<SSkinAPNG>();
}


}