﻿
// 1027_test1Dlg.h: 헤더 파일
//

#pragma once


// CMy1027test1Dlg 대화 상자
class CMy1027test1Dlg : public CDialogEx
{
// 생성입니다.
public:
	CMy1027test1Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY1027_TEST1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
//	int m_nYear;
//	CSpinButtonCtrl m_spinYear;
	CComboBox m_cbMonth;
	int m_nYear;
	CSpinButtonCtrl m_spinYear;
	afx_msg void OnSelchangeComboMonth();
	afx_msg void OnDeltaposSpinYear(NMHDR* pNMHDR, LRESULT* pResult);
	int m_nMonth;
};
