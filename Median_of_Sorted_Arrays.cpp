// @author: Abhimanyu Maurya

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[2 * n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0, k = 0;
    while (i < n and j < n)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while (i < n)
    {
        c[k++] = a[i++];
    }
    while (j < n)
    {
        c[k++] = b[j++];
    }

    cout << c[n - 1];
    return 0;
}
