
// mfc_halcon_version_yds.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cmfc_halcon_version_ydsApp: 
// �йش����ʵ�֣������ mfc_halcon_version_yds.cpp
//

class Cmfc_halcon_version_ydsApp : public CWinApp
{
public:
	Cmfc_halcon_version_ydsApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cmfc_halcon_version_ydsApp theApp;