/*
* @Date    : 2020-06-09 12:42:57
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

void print(char s[], char o[], int p, char table[][5])
{
    if (s[p] == '\0')
    {
        o[p] = '\0';
        cout << o << "\n";
        return;
    }

    int t = s[p] - '0';
    for (size_t j = 0; table[t][j] != '\0'; j++)
    {
        o[p] = table[t][j];
        print(s, o, p + 1, table);
    }
}

int main()
{
    char table[][5] = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    char s[11], o[11];
    cin >> s;
    print(s, o, 0, table);
    return 0;
}
