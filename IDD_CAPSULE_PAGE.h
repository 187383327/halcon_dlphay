#pragma once


// IDD_CAPSULE_PAGE �Ի���

class IDD_CAPSULE_PAGE : public CPropertyPage
{
	DECLARE_DYNAMIC(IDD_CAPSULE_PAGE)

public:
	IDD_CAPSULE_PAGE();
	virtual ~IDD_CAPSULE_PAGE();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CAPSULE_PAGR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
