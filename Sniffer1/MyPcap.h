#pragma once
#include "pcap.h"
#include "Struct.h"






class CMyPcap
{
public:
	CMyPcap(void);
	~CMyPcap(void);
	//  ȡ�����е������豸
	pcap_if_t* GetAllAdapter(void);

public:
	//pcap_if_t* devnow;
	/*pcap_dumper_t *dumpfile;*/

	static int SavePacket(struct pcap_pkthdr *header, const u_char *pkt_data, pcap_dumper_t* d);

};

