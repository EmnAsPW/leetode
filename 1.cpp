#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num[5] = {1, 2, 3, 4, 5};

    cout << num[2] << endl;

    num[0] = 9;

    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << endl;
    }
}