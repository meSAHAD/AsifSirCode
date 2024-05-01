#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string name[N], sec[N];
    int cls[N], id[N], math[N], eng[N];

    for (int i = 0; i < N; i++)
    {
        cin >> name[i] >> cls[i] >> sec[i] >> id[i] >> math[i] >> eng[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int mark1 = math[i] + eng[i];
            int mark2 = math[j] + eng[j];

            if (mark1 < mark2 || mark1 == mark2 && id[i] > id[j])
            {
                swap(name[i], name[j]);
                swap(cls[i], cls[j]);
                swap(sec[i], sec[j]);
                swap(id[i], id[j]);
                swap(math[i], math[j]);
                swap(eng[i], eng[j]);
            }
        }
    }

    for (int i = 0; i < N; ++i)
    {
        cout << name[i] << " " << cls[i] << " " << sec[i] << " " << id[i] << " " << math[i] << " " << eng[i] << "\n";
    }

    return 0;
}
