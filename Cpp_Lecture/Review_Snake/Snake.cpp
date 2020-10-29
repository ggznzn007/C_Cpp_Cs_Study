#include "Turboc.h"

#define QS 1600
#define putchxy(x,y,ch) { gotoxy(x,y);_putch(ch); }
using namespace std;

void InitStage(int stage);// 스테이지 초기화
BOOL MoveSnake();// 뱀의 이동
void ProcessKey();
int getchcon(int x, int y);
void waitanykey();

struct tag_Point {
    int x, y;
};
tag_Point snake[QS]; // tag_Point형식 구조체 배열 스네이크[1600]
tag_Point now; // x,y값을 가지는 tag_Point형식 구조체 now선언
int head, tail;
int inctail;
enum tag_Dir { LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80 };
tag_Dir dir; // 방향을 가리키는 열거형식 tag_dir 선언;
int life;
int maxnumber;
int speed;
int multi;
int stage;

void main()
{
    int number;
    int ch;
    int x, y;

    life = 5;
    randomize(); // ==  srand((unsigned)time(NULL));
    setcursortype(NOCURSOR); // 커서 지우기
    for (;;) { // 무한반복 
        InitStage(stage); //  maxnumber; speed; multi; 변수들의 값이 여기서 정해진다/.
        gotoxy(0, 23); printf("스테이지 : %d", stage + 1);
        gotoxy(20, 23); printf("남은 뱀 : %d", life);
        for (number = 0; number < maxnumber; number++)
        {
            gotoxy(40, 23); printf("남은 먹이 : %d ", maxnumber - number);
            gotoxy(60, 23); printf("꼬리 길이 : 2 ");
            // 공백인 자리에 새로운 숫자를 생성한다.
            do {
                x = random(80); // == rand % 80 == 0~79
                y = random(22); // == rand & 22 == 0~21
            } while (getchcon(x, y) != ' '); // getchcon은 매개변수로 넘김 x,y위치에 저장된 문자를 return하는 함수, 해당 위치의 문자가 ' '(공백)이 아니면
            gotoxy(x, y); // x,y위치로 가서
            printf("%d", random(9) + 1);  // rand % 9(0~8) + 1 == 1 ~ 9;


            if (number == 0) { //게임시작 직후이면
                ch = _getch(); // 키입력을 1번 받는다
                if (ch == 0xE0) { // 키입력이 스페이스바이면
                    _getch(); // 키 입력을 1번 받는다
                }
                else {
                    if (ch == 27) { // ch가 아스키코드 값 27(ESC)이면 
                        setcursortype(NORMALCURSOR); // 커서를 노말 커서로 바꾸고
                        exit(0); // 게임을 종료한다/.
                    }
                    if (tolower(ch) == 'n') { // (ch가 대문자이면 소문자로 바꾸고), ch가 'n'이면 
                        stage = (stage == 4 ? 0 : stage + 1); // stage를 stage가 4이면 0으로 바꾸고, 아니면 스테이지를 1단계 올린다. 
                        break; // 즉 다음 스테이지로 넘어가는 키 == n이다.
                    }
                    if (tolower(ch) == 'p') { // (ch가 대문자이면 소문자로 바꾸고), ch가 'p'이면 
                        stage = (stage == 0 ? 4 : stage - 1); // stage를 stage가 0이면 4로 바꾸고, 아니면 스테이지를 1단계 내린다. 
                        break; // 즉 이전 스테이지로 넘어가는 키 == p이다.
                    }
                }
            }

            // 뱀 이동 루프
            if (MoveSnake() == TRUE) // MoveSnake에서 먹이 먹이 판정 // 뱀이 벽 or 꼬리에 부딪힌게 아니면, 먹이(숫자)에 부딪힌 경우이다. 그러면 for(;;)무한반복함수인 MoveSnake를 탈출하고, for (number = 0; number < maxnumber; number++)가 작동, 먹은 먹이 개수가 1개 증가한다.
            { // 뱀이 벽이나 자기 꼬리에 부딪히면, BOOL함수인 MoveSnake함수는 TRUE값을 반환한다.
               /* 주석 처리된 부분이 해당 부분이다.
                    if (headch == 'M' || headch == '#') {
                    return TRUE;
                }*/
                if (--life == 0) {
                    gotoxy(12, 20);
                    puts("게임이 끝났습니다. 그만 놀고 열심히 공부하세요.");
                    return; // 반복문 전부 탈출 // 뱀게임은 for문이 2개이다.
                }
                delay(1500); // life 변수가 0이 아니면 1.5초 딜레이 후, 반복문 1개 탈출
                break; // 반복문 1개 탈출 == 게임 재시작
            }
        }
        if (number == maxnumber) { // 증가한 number가 stage에서 할당된 maxnumber와 개수가 같아지면
            gotoxy(12, 20);
            puts("축하합니다. 아무 키나 누르시면 다음 스테이지로 갑니다.");
            waitanykey(); // 키입력 대기
            stage++; // 스테이지가 2단계 증가한다.
        }
    }
}

// 스테이지 초기화
void InitStage(int stage)
{
    int i;

    clrscr();
    snake[0].x = 5; snake[0].y = 5; // 뱀꼬리
    snake[1].x = 6; snake[1].y = 5; // 뱀꼬리
    snake[2].x = 7; snake[2].y = 5; // 뱀머리
    gotoxy(5, 5); puts("##S"); // 새끼 뱀 출력

    // 여기부터
    head = 2; // 머리는 2
    tail = 0; // 꼬리는 0
    inctail = 0;
    now.x = 7; // 현재 머리 위치 
    now.y = 5; // 현재 머리 위치 
    dir = RIGHT; //방향
    // 여기까지는 처음 게임 시작했을 때, 뱀의 크기와 위치 그리고 시작 방향이다.

    // 바깥의 벽을 그린다.
    for (i = 0; i < 80; i++) {
        putchxy(i, 0, 'M');
        putchxy(i, 22, 'M');
    }

    for (i = 0; i < 23; i++) {
        putchxy(0, i, 'M');
        putchxy(79, i, 'M');
    }

    // 스테이지별로 장애물을 적당히 그리고 난이도를 조절한다.
    switch (stage) {
    case 0: // 스테이지가 0이면
        maxnumber = 5; speed = 150; multi = 3;  // 남은먹이 // 속도 // 먹이를 먹으면 먹이숫자 * multi(3)
        for (i = 30; i <= 50; i++) { putchxy(i, 11, 'M'); } //  중간 벽돌 만들기
        break;
    case 1:
        maxnumber = 10; speed = 100; multi = 5;
        for (i = 20; i <= 60; i++) { putchxy(i, 7, 'M'); putchxy(i, 14, 'M'); }
        break;
    case 2:
        maxnumber = 15; speed = 80; multi = 6;
        for (i = 20; i < 60; i++) { putchxy(i, 11, 'M'); }
        for (i = 6; i <= 16; i++) { putchxy(40, i, 'M'); }
        break;
    case 3:
        maxnumber = 20; speed = 60; multi = 7;
        for (i = 20; i < 60; i++) {
            if (i < 30 || i > 50) {
                putchxy(i, 7, 'M');
                putchxy(i, 14, 'M');
            }
        }
        for (i = 7; i < 15; i++) { putchxy(20, i, 'M'); putchxy(60, i, 'M'); }
        break;
    case 4:
        maxnumber = 1970; speed = 50; multi = 9;
        break;
    }
}

// 뱀을 이동시킨다. 죽었으면 TRUE를 리턴한다.
BOOL MoveSnake() // 핵심 // 어려움 ★★★☆☆
{
    int headch;
    int len;
    int prev;

    for (;;) { // 무한반복
        gotoxy(60, 23); // 커서 이동
        len = head - tail; // 머리 - 꼬리 // 처음 머리 2, 꼬리 0 // 즉 처음 길이는 2
        if (len < 0) len += QS;  //
        printf("꼬리 길이 : %d ", len);
        ProcessKey(); // 키입력 받는 함수
        gotoxy(60, 25); // 커서 이동
        printf("tail : %d ", tail);
        gotoxy(60, 27); // 커서 이동
        printf("head : %d ", head);
        gotoxy(60, 29); // 커서 이동
        printf("inctail : %d ", inctail);

        switch (dir) {
        case LEFT:
            now.x--;// tag_Point형식 now구조체, x값을 -1한다. 왼쪽은 x-1
            break;
        case RIGHT:
            now.x++;
            break;
        case UP:
            now.y--; // y-1은 위로
            break;
        case DOWN:
            now.y++;
            break;
        }

        // 머리 한칸 진행
        head = (head == QS - 1 ? 0 : head + 1); // 머리가 QS-1과 같으면, 머리는 0, 아니면 머리 +1
        // head가 1599이면, head를 0으로 만들어서 게임이 안터지게 해준다. snake[1600]이므로 1599. 

        snake[head] = now; // 머리의 좌표를, snake[head]배열에 넣는다. 

        if (inctail == 0) { //inctail이 0이면 작동한다.

            // tail이 1599이면, tail를 0으로 만들어서 게임이 안터지게 해준다. snake[1600]이므로 1599. 
            tail = (tail == QS - 1 ? 0 : tail + 1); // tail변수 +1

            // 즉 숫자를 먹어  inctail이 증가하면, tail변수의 증가는 멈추고, head변수는 계속 +1 증가. 
            // head-tail == 길이이다.

        }
        else {
            inctail--; //inctali을 1 감소시킨다.
        }

        // 머리를 그리기 전에 머리 위치의 문자를 미리 읽어 놓아야 한다.
        headch = getchcon(now.x, now.y); // headch는 머리를 그리기 전, 해당 위치에 저장된 문자를 읽어와 저장한 변수이다.
        putchxy(snake[head].x, snake[head].y, 'S'); // 머리를 그린다. 

        //head가 0이면, 이전 위치는 1599이므로. head가 0이면 이전 위치인 1599에 #을 그려준다.
        prev = (head == 0 ? QS - 1 : head - 1); // 그리기, 머리에서 1을 뺀 값을 prev에 저장 /
        putchxy(snake[prev].x, snake[prev].y, '#'); // 머리 -1 배열에  x.y값에 #(꼬리)를 그림

        //tail이 0이면, 이전 위치는 1599이므로. tail이 0이면 이전 위치인 1599를 ' '으로 지워준다.
        prev = (tail == 0 ? QS - 1 : tail - 1); // tail에서 1을 뺀 값을 prev에 넣는다.
        putchxy(snake[prev].x, snake[prev].y, ' '); //  snake[prev]배열에  x.y값에 ' '를 그림 (초기화)

        // inctail = 먹이*x. ictail이 0이 될때까지 tail은 멈추고 뱀은 길어진다.
        // 따라서 tail에서 -1을 뺀 값은 뱀의 몸 끝부분(길이를 넘은 부분)을 지우는 것이다.
        // inctail = 5*3 == head+15 && tail+0은 몸길이가 10개 늘어난 뱀.
        // 처음에 먹은거면 뱀의 몸길이는 head - tail == 18 - 1 == 뱀의 몸 길이는 17 
        // 따라서 뱀의 머리가 18번째에 있던 자리가 지워져야 뱀의 길이가 17이 되므로, snake(tail-1)을 지운다.


        // 현재 위치가 공백이 아니면 어딘가에 부딪힌 것임
        if (headch != ' ') { // 위에 머리를 그리기전 x.y값에 저장된 문자를 headch에 저장. headch가 ' '이 아니면 break로 for문 탈출.
            break;
        }
        delay(speed); // speed변수만큼 딜레이를 주기
    }

    // 벽이나 자기 꼬리에 부딪쳤으면 죽은 것임
    if (headch == 'M' || headch == '#') { // headch 저장된 값이, 'M'이나 '#'이면
        return TRUE; // true값 반환 -- 
    }
    // headch에서 '0'을 빼rh int형인 multi와 곱하면 stage에서 설정한 개수 * 먹은 숫자의 값만큼 inctail가 증가한다.

    inctail += (headch - '0') * multi; //꼬리길이
    return FALSE; // false값 반환
}

// 키 입력을 처리한다.
void ProcessKey()
{
    int ch;

    if (!_kbhit()) {//키보드입력버퍼에 값이 있는지 확인 
        return;
    }
    ch = _getch();
    if (ch == 0xE0 || ch == 0) {
        //방향키 외에 다른 입력이 들어오는 것을 보정함
        ch = _getch();
        switch (ch) {
        case LEFT:
            // 진행 반대 방향으로는 전환할 수 없다.
            if (dir != RIGHT) dir = LEFT; // 방향전환
            break;
        case RIGHT:
            if (dir != LEFT) dir = RIGHT;
            break;
        case UP:
            if (dir != DOWN) dir = UP;
            break;
        case DOWN:
            if (dir != UP) dir = DOWN;
            break;
        }
    }
    else {
        switch (tolower(ch)) { // ch의 대문자를 소문자로 바꾼다
        case 27: // esc 를 누르면 
            setcursortype(NORMALCURSOR); //커서의 타입을 일반 커서로 바꾼다
            exit(0); // 종료
        case ' ': // ' ' 스페이스바를 누르면
            waitanykey(); // 임의의 키가 하나 눌러질 때까지 대기 // 라이브러리 제공 X, 자체 제작
            break;
        }
    }
}

// 화면의 x,y위치에 있는 문자를 조사한다.
int getchcon(int x, int y)// headch 참조
{
    COORD Cur; // 구조체에  x.y  값을 넣고
    Cur.X = x;
    Cur.Y = y;
    TCHAR Char; // 리턴값
    DWORD dwRead; // DWORD 과거 시스템의 재활용,  word == 16비트, dword 32비트, qword 64비트

    ReadConsoleOutputCharacter(GetStdHandle(STD_OUTPUT_HANDLE), // 연속해서 버퍼에 있는 문자를 복사하는 함수
        &Char, 1, Cur, &dwRead);
    // (핸들, 읽은 문자를 받는 포인터, 읽을 문자의 개수, 읽을 첫 번째 셀의 좌표 값)
    return Char; // 해당 좌표에서 읽은 문자를 리턴 한다.
}

// 임의의 키 하나가 눌러질 때까지 대기한다.
void waitanykey()
{
    int ch;

    ch = _getch(); // 키 입력 하나를 받는다.
    if (ch == 0xE0 || ch == 0) { 
        //기본키보드입력 외에 다른 입력이 들어오는 것을 보정함
        _getch(); //버퍼값 지우기
    }
}