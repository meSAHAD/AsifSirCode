#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string nm[N];
    int cls[N], math[N], eng[N];
    char sec[N];

    for (int i = 0; i < N; i++)
    {
        cin >> nm[i] >> cls[i] >> sec[i] >> math[i] >> eng[i];
    }

    for (int i = N - 1; i >= 0; i--)
    {
        cout << nm[i] << " " << cls[i] << " " << sec[i] << " " << math[i] << " " << eng[i] << endl;
    }

    return 0;
}