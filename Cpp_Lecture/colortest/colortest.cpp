#include <iostream>
#include <windows.h>

using namespace std;

#define col GetStdHandle(STD_OUTPUT_HANDLE)
#define BLACK SetConSoleTextAttribute(col, 0x0000)//검은색
#define DARK_BLUE SetConSoleTextAttribute(col, 0x0001)//청색
#define GREEN SetConSoleTextAttribute(col, 0x0002)//녹색
#define BLUE_GREEN SetConSoleTextAttribute(col, 0x0003)//청녹색
#define BLOOD SetConSoleTextAttribute(col, 0x0004)//피색
#define WINE SetConSoleTextAttribute(col, 0x0005)//와인색
#define GOLD SetConSoleTextAttribute(col, 0x0006)//금색
#define ORIGINAL SetConSoleTextAttribute(col, 0x0007)//밝은 회색
#define GRAY SetConSoleTextAttribute(col, 0x0008)//회색
#define BLUE SetConSoleTextAttribute(col, 0x0009)//파란색
#define HIGH_GREEN SetConSoleTextAttribute(col, 0x000a)//밝은녹색
#define SKY_BLUE SetConSoleTextAttribute(col, 0x000b)//하늘색
#define RED SetConSoleTextAttribute(col, 0x000c)//빨간색
#define PLUM SetConSoleTextAttribute(col, 0x000d)//자주색
#define YELLOW SetConSoleTextAttribute(col, 0x000e)//노란색
#define WHITE SetConSoleTextAttribute(col, 0x000f)//하얀색

void setcolor(unsigned short text, unsigned short back)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}

void main()
{
	/*cout << "Nomal Color";
	system("color 1");
	*/
	setcolor(0x000e,0);
}




