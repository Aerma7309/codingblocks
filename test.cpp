#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int isprime(int a, int n)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return -1;
        }
    }
    cout << ", " << a;
}
int main()
{
    int N;
    cin >> N;
    cout << "2";
    if (N > 2)
    {
        for (int i = 3; i <= N; i++)
        {

            isprime(i, N);
        }
    }
}