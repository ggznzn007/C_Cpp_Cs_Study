#include <iostream>
#include <stack>
#include <thread>

using namespace std;

int main()
{
    stack<int> st; // 숫자를 저장할 수 있는 스택 
    
    while (1)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "push")
        {
            int num;
            cin >> num;
            st.push(num);
        }       

        else if (cmd == "pop")
        {
            cout << (st.empty() ? -1 : st.top()) << endl;
            if (!st.empty())
                st.pop();
        }

        else if (cmd == "top")
            cout << (st.empty() ? -1 : st.top()) << endl;

        else if (cmd == "size")
            cout << st.size() << endl;

        else if (cmd == "empty")
            cout << st.empty() << endl;
    }
}