#include<iostream>
#include<string.h>
using namespace std;
//* 배열을 사용하세요
//1. 10명의 영어점수를 입력하고, 총합과 평균을 구하세요
void problem1() {
	int eng[10];
	int sum = 0;
	double avg = 0.0;
	for (int i = 0; i < 10; i++) {
		cout << i+1 << "번째 학생의 영어 점수를 입력하세요 : ";
		cin >> eng[i];
		sum += eng[i];
	}
	avg = (double)sum / 10;
	cout << "총합 : " << sum << " 평균 : " << avg << endl;
}
//2. 국어, 영어, 수학 점수를 각 3개씩 입력받고, 각과목의 총합과 평균을 구하고
//전체 과목의 총합과 평균을 구하세요
void problem2() {
	int kor[3],eng[3],math[3];
	int sumAll = 0, sumKor = 0, sumEng = 0, sumMath = 0;
	double avgAll = 0.0, avgKor = 0.0, avgEng = 0.0, avgMath = 0.0;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "번째 학생의 점수를 입력하세요(국어, 영어, 수학) : ";
		cin >> kor[i] >> eng[i] >> math[i];
		sumKor += kor[i]; sumEng += eng[i]; sumMath += math[i];
		sumAll = sumAll + kor[i] + eng[i] + math[i];
	}
	avgKor = (double)sumKor / 3;
	avgEng = (double)sumEng / 3;
	avgMath = (double)sumMath / 3;
	avgAll = (double)sumAll / 9;
	cout << "국어 총합 : " << sumKor << " 평균 : " << avgKor << endl;
	cout << "영어 총합 : " << sumEng << " 평균 : " << avgEng << endl;
	cout << "수학 총합 : " << sumMath << " 평균 : " << avgMath << endl;
	cout << "전체 총합 : " << sumAll << " 평균 : " << avgAll << endl;
}
//3. 과목명을 입력받고, 3명의 점수를 입력받으세요
//그리고 과목명과 3명의 점수를 출력하세요
void problem3() {
	char name[10] = { 0 };
	int score1, score2, score3;
	cout << "과목명을 입력하세요 :";
	cin >> name;
	cout << "3명의 점수를 입력하세요 : ";
	cin >> score1 >> score2 >> score3;
	cout << "과목명 : " << name << endl;
	cout << "점수 : " << score1 << " " << score2 << " " << score3 << endl;
}
//4. 10명의 수학점수를 입력받고, index가 홀수인 것만 출력하세요
void problem4() {
	int score[10];
	cout << "10명의 점수를 입력하세요"<<endl;
	for (int i = 1; i <= 10; i++) {
		cout << i << "번째 학생의 점수 : ";
		cin >> score[i];
		if (i % 2 == 1) cout << score[i]<<endl;
	}
}
//5. 7명의 국어점수를 배열 초기화를 사용해서 미리 입력하세요
//그리고 70점 이상인 학생점수만 출력하세요
void problem5() {
	int kor[7] = { 10,20,90,40,80,60,70 };
	for (int i = 0; i < 7; i++) {
		if (kor[i] >= 70) cout << i + 1 << "번 학생 점수 : " << kor[i] << "점" << endl;
	}
	cout << endl;
}
//6. 5명의 학생의 이름과 국어점수를 입력받으세요
//이름과 점수를 출력하세요
void problem6() {
	for (int i = 0; i < 5; i++) {
		char name[10]; int kor;
		cout << "학생의 이름과 국어점수를 입력하세요 : ";
		cin >> name >> kor;
		cout << "이름 : " << name << " 점수 : " << kor << endl;
	}cout << endl;
}
//7. 8명의 학생의 이름과 수학점수를 입력받으세요
//가장 점수가 높은 학생의 이름과 점수를 출력하세요
void problem7() {
	int max=0;
	char mName[10];
	for (int i = 0; i < 8; i++) {
		char name[10]; int ma;
		cout << "학생의 이름과 수학점수를 입력하세요 : ";
		cin >> name >> ma;
		if (max < ma) {
			max = ma; strcpy(mName, name);
		}
	}
	cout << mName<<" "<< max<<endl;
}
//8. 8명의 학생의 이름과 수학점수를 입력받으세요
//가장 점수가 낮은 학생의 이름과 점수를 출력하세요
void problem8() {
	int min = 999;
	char mName[10];
	for (int i = 0; i < 8; i++) {
		char name[10]; int ma;
		cout << "학생의 이름과 수학점수를 입력하세요 : ";
		cin >> name >> ma;
		if (min > ma) {
			min = ma; strcpy(mName, name);
		}
	}
	cout << mName << " " << min << endl;
}
int main()
{
	while (1) {
		int sel;
		cout << "원하는 과제를 입력하세요 : ";
		cin >> sel;
		if (sel == 0) { cout << "end!!" << endl; break; }
		else if (sel == 1) { problem1(); }
		else if (sel == 2) { problem2(); }
		else if (sel == 3) { problem3(); }
		else if (sel == 4) { problem4(); }
		else if (sel == 5) { problem5(); }
		else if (sel == 6) { problem6(); }
		else if (sel == 7) { problem7(); }
		else if (sel == 8) { problem8(); }
		cout << endl;
	}
	return 0;
}