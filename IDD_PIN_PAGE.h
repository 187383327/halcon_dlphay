#pragma once


// IDD_PIN_PAGE �Ի���

class IDD_PIN_PAGE : public CPropertyPage
{
	DECLARE_DYNAMIC(IDD_PIN_PAGE)

public:
	IDD_PIN_PAGE();
	virtual ~IDD_PIN_PAGE();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PIN_PAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
