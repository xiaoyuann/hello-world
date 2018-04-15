
// MusicPlayerDlg.h: 头文件
//

#pragma once
#include "afxcmn.h"
#include "afxwin.h"
#include "NiceSlider.h"
// CMusicPlayerDlg 对话框
class CMusicPlayerDlg : public CDialogEx
{
// 构造
public:
	CMusicPlayerDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MUSICPLAYER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

//成员变量
protected:
	CMenu * pMainMenu;
	CNiceSliderCtrl playProgressBar;//播放进度条
	CNiceSliderCtrl volBar;//音量进度条
	CComboBox myPlayMode;//播放模式组合框
public:


//功能函数
public:
	bool InitMenu(void);//初始化菜单栏
	bool InitControls(void);//初始化控件
	bool InitComboxBoxPlayMode(void);//初始化播放模式组合框
	

	afx_msg void OnNMCustomdrawPlayprogress(NMHDR *pNMHDR, LRESULT *pResult);


	afx_msg void OnNMCustomdrawVolBar(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedBtnAhead();
	afx_msg void OnBnClickedBtnDelete();
};
