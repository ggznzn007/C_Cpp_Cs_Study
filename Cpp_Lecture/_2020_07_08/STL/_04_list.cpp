/*
list 자료구조 == Sequence Container
- 순서가 있다
- 나열된다
1) 배열 : 물리적으로 순차적
          시작 ~ 끝까지 검색
2) 링크드리스트 : 논리적으로 순차적
3) 덱 : 배열/링크드리스트로 만든다
        양방향 증가
*/
#include <iostream>
#include <list>

using namespace std;

void main()
{
    /* 링크드 리스트
    순서보장
    중간 삽입/삭제에 유연한 구조
    */
    const int DATA_NUM = 6;
    list<int> llist;
    for (int i = 0; i < DATA_NUM; i++)
        llist.push_back(i * 2);

    // 반복자로 접근
    list<int>::iterator it = llist.begin();
    ++it;   // 2번째 위치로 이동
    /* 99개 2번째 위치에 삽입
     it는 3번째를 가리킨다.
     */
    llist.insert(it, 99);
    llist.erase(it);

    // 출력
    it = llist.begin();
    while (it != llist.end())
        cout << *it++ << ", ";
    cout << endl;
}