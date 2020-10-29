#include <stdio.h>	// FILE
#include "addressDefine.h" // Address, ADDR_LEN

extern Address g_Address[ADDR_LEN];
extern int g_addrCnt;

void saveAllAddress()
{
	FILE* fp = NULL;
	fopen_s(&fp, "address.bin", "wb");

	// 구조체 길이 저장
	fwrite(&g_addrCnt, sizeof(int), 1, fp);
	// 구조체 배열을 저장길이만큼 저장
	fwrite(g_Address, sizeof(Address),
		g_addrCnt, fp);

	fclose(fp);
}

void loadAllAddress()
{
	FILE* fp = NULL;
	errno_t err = 0;
	err = fopen_s(&fp, "address.bin", "rb");
	if (err == 0)	// 정상 스트림 오픈
	{
		fread(&g_addrCnt, sizeof(int), 1, fp);
		fread(g_Address, sizeof(Address),
			g_addrCnt, fp);
		fclose(fp);
	}
}
