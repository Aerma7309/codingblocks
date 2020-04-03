// @author: Abhimanyu Maurya

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//fast i/o
bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);
bool ot = cout.tie(0);

bool fun(string a, string b)
{

    if (a.substr(0, b.length()) == b or b.substr(0, a.length()) == a)
    {
        if (a.length() > b.length())
        {
            string s = a.substr(0, b.length());
            if (b == s)
                return true;
        }
        else
        {
            string s = b.substr(0, a.length());
            if (a == s)
                return false;
        }
    }

    return a < b;
}

int main()
{
    int n;
    cin >> n;
    string s;
    vector<string> v;
    while (n--)
    {
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), fun);
    for (auto &i : v)
    {
        cout << i << '\n';
    }
    return 0;
}
