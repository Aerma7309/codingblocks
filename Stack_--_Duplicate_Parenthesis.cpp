// @author: Abhimanyu Maurya

#include <iostream>
#include <stack>
using namespace std;

//fast i/o
bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);
bool ot = cout.tie(0);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> s;
        string str;
        getline(cin, str);

        char ch = '\0';
        bool flag = true;
        for (auto &i : str)
        {
            if (i != ')')
                s.push(i);
            else
            {
                int count = 0;
                while (!s.empty() and s.top() != '(')
                {
                    count++;
                    s.pop();
                }
                s.pop();
                if (count == 0)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (!flag)
            cout << "No Duplicates Found\n";
        else
            cout << "Duplicate Found\n";
    }
    return 0;
}
