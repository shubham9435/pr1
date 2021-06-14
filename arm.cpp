#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ori,sum=0;
    cin >> n;
    ori=n;
    while (n > 0)
    {
       int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }
    if (sum==ori)
    {
        cout << "armstrong number";
    }
    else
    {
        cout << "not amrstorng number";
    }
}