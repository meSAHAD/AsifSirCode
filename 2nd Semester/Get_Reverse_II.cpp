#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string name[N], sec[N];
    int cls[N], id[N];

    for (int i = 0; i < N; i++)
    {
        cin >> name[i] >> cls[i] >> sec[i] >> id[i];
    }
    for (int i = 0; i < N / 2; i++)
    {
        swap(id[i], id[N - i - 1]);
    }

    for (int i = 0; i < N; i++)
    {
        cout << name[i] << " " << cls[i] << " " << sec[i] << " " << id[i] << "\n";
    }
    return 0;
}