#pragma once


// IDD_MARK_PAGE �Ի���

class IDD_MARK_PAGE : public CPropertyPage
{
	DECLARE_DYNAMIC(IDD_MARK_PAGE)

public:
	IDD_MARK_PAGE();
	virtual ~IDD_MARK_PAGE();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MARK_PAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
