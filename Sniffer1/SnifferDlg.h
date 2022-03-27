// SnifferDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"
#include "MyPcap.h"
#include "FilterDlg.h"




static UINT CapThread(LPVOID lpParameter);
static UINT ReadDumpThread(LPVOID lpParameter);
static UINT LoadThread(LPVOID lpParameter);



static wchar_t FilePath[256];//��������·��
static CString CapFilePath;//��ʱץ���ļ�·��
static CString filterstr;


class CSnifferDlg : public CDialog
{
	// ����
public:
	CSnifferDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_SNIFFER_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CComboBox m_devComboBox;
	pcap_if_t *alldevs;
	pcap_if_t *d;
	CListCtrl m_List;
	afx_msg void OnSize(UINT nType, int cx, int cy);//no use

	CButton m_saveBtn;
	afx_msg void OnBnClickedButton1();
	CWinThread *hCapThread;
	CMyPcap myPcap;
	afx_msg void OnBnClickedButton2();
	BOOL capStatus;
	afx_msg void OnClose();
	void ShowPacketOnList(packet* p);//packet info on listctrl
	static void GetEthernetType(ethernet_header * e, char *typestr);//�����̫������
	static void GetIPv4Type(ip_header* ih, char* pt);//IP����

	afx_msg void OnNMClickList2(NMHDR *pNMHDR, LRESULT *pResult);
	//CString m_EditPacket;
	CEdit m_packetData;
	CFont   m_Font;
	static BOOL IsHttp(struct pcap_pkthdr *header, const u_char* p);//no use
	CTreeCtrl m_InfoTree;
	//������Ϣ�����edit��
	static CString PackToEdit(struct pcap_pkthdr* header, const u_char* pkt_data);
	static void DecToBinary(int n, char* ch);
	//�������������
	static void ShowIPInfo(const u_char* pkt_data, CSnifferDlg* mDlg);
	static void ShowArpInfo(arp_header* arpheader, CSnifferDlg* mDlg);
	static void ShowUDPInfo(udp_header* udpheader, CSnifferDlg* mDlg);
	static void ShowICMPInfo(icmp_header* icmpheader, CSnifferDlg* mDlg);
	static void ShowIGMPInfo(igmp_header* igmpheader, CSnifferDlg* mDlg);
	static void ShowTCPInfo(tcp_header* tcpheader, CSnifferDlg* mDlg, u_short tcpdataLen);
	CMenu m_Menu;
	afx_msg void OnCaptureStart();
	afx_msg void OnCaptureStop();
	afx_msg void OnCaptureInterface();
	CFilterDlg filter;

	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton4();

	afx_msg void OnBnClickedButton3();
	//	afx_msg void OnBnClickedButton6();
	afx_msg void OnLvnItemchangedList2(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnCbnSelchangeCombo2();
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
