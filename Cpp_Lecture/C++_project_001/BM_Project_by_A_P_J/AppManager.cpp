#include "AppManager.h"
AppManager::AppManager() {
	this->getKindOfMenu();
}
AppManager::~AppManager() {
	for (int i = 0; i < 4; i++) {
		delete st[i];
	}
}
void AppManager::getKindOfMenu() {
	system("cls");
	st[0]->drawMap();
	gotoxy(TX, TY);
	cout << " < 종류 선택 >";
	gotoxy(TX - 4, TY + 2);
	cout << "--------------------";
	int i = 0;
	for (; i < sizeof(kindOf) / sizeof(kindOf[0]); i++) {
		gotoxy(TX - 2, TY + 4 + i * 2);
		cout << i + 1 << ". " << kindOf[i] << endl;
	}
	gotoxy(TX - 4, TY + 4 + i * 2);
	cout << "--------------------";
	gotoxy(TX - 2, TY + 4 + i * 2 + 2);
	cout << "번호 입력 : ";
	int kindNum = 0;
	cin >> kindNum;
	--kindNum;

	getMenu(kindNum);
}
int AppManager::getMenu(int kindNum) {
	system("cls");
	st[0]->drawMap();
	gotoxy(TX, TY);
	cout << " < 가게 선택 >";
	gotoxy(TX - 4, TY + 2);
	cout << "--------------------";
	int i = 0;
	int num = 0;
	for (; i < sizeof(st) / sizeof(st[0]); i++) {
		if (st[i]->kindOfStore() == kindOf[kindNum]) {
			num++;
			gotoxy(TX - 2, TY + 2 + num * 2);
			cout << num << ". " << st[i]->showStoreName() << endl;
		}
	}
	gotoxy(TX - 4, TY + 4 + num * 2);
	cout << "--------------------";
	gotoxy(TX - 2, TY + 4 + num * 2 + 2);
	cout << "번호 입력 : ";
	int storeNum = 0;
	cin >> storeNum;
	--storeNum;
	storeNum += kindNum * 2;
	
	st[storeNum]->choiceMenu();
	st[storeNum]->checkAddress();
	st[storeNum]->cooking();
	st[storeNum]->delivery();
	return 0;
}