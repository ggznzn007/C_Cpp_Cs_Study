#include <iostream>

using namespace std;

struct Stack {
    // 필수적으로 필요한 멤버변수
    int data[1000]; // 데이터 저장    -> 문자열을 저장하고 싶으면 string 타입으로 변경한 뒤, 함수들의 return 형을 조금 수정해주면 된다.
    int size;       // 여러 연산을 위해 필요함

    // 생성자 : 멤버변수의 초기화를 담당한다. 이것이 존재하지 않으면 경고가 뜸.
    Stack()
    {
        size = 0;
    }

    void push(int n)
    {
        data[size] = n;
        size += 1;
    }

    int pop()
    {
        if (size == 0)
            return -1;
        else {
            size -= 1;         // pop 할 때 데이터를 따로 삭제해주는 작업은 없다.(다시 push시 덮어쓰면 되므로)
            return data[size];
        }
    }

    bool empty()
    {
        return (size == 0) ? true : false;
    }

    int top()
    {
        return (size == 0) ? -1 : data[size - 1];
    }
};

int main(void)
{
    ios::sync_with_stdio(false);

    int N;
    Stack st; // 구조체 타입의 변수 생성

    cin >> N;

    while (N--) {
        string cmd;
        cin >> cmd;

        if (cmd == "push")
        {
            int a;
            cin >> a;
            st.push(a);
        }
        else if (cmd == "pop")
            cout << st.pop() << endl;

        else if (cmd == "size")
            cout << st.size << endl;

        else if (cmd == "empty")
            cout << st.empty() << endl;

        else if (cmd == "top")
            cout << st.top() << endl;
    }
}