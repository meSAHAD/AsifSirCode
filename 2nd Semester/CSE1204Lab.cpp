/*
1. Write a program to read two sets(from file) and perform the following :
     i) Union
    ii) Intersection

    Sample Input:
        A = {1, 2};
        B = {2, 3};
    Sample Output:
        A U B = {1, 2, 3};
        A B = {2};

2. Find power set of a given set A
    Sample Input:
        A = {1, 2};
    Sample Output:
        |P(A)| = 4
        Subset of A = {}, {1}, {2}, {1, 2};

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string first, second;
    getline(cin, first);
    getline(cin, second);

    set<int> A, B;

    int n = first.size();
    for (int i = 0; i < n; i++) {
        if (first[i] >= '0' and first[i] <= '9') {
            A.insert(first[i] - '0');
        }
    }

    n = second.size();
    for (int i = 0; i < n; i++) {
        if (second[i] >= '0' and second[i] <= '9') {
            B.insert(second[i] - '0');
        }
    }

    set<int> ans1, ans2;
    for (auto &u : A) ans1.insert(u);
    for (auto &u : B) ans1.insert(u);

    for (auto &u : A) {
        if (B.find(u) != B.end()) {
            ans2.insert(u);
        }
    }

    cout << "A U B = {";
    int size1 = ans1.size();
    for (auto &u : ans1) {
        if (size1 == ans1.size()) cout << " ";
        else cout << ", ";
        cout << u;
        size1--;
    }
    cout << " }\n";

    cout << "A INTERSECT B = {";
    int size2 = ans2.size();
    for (auto &u : ans2) {
        if (size2 == ans2.size()) cout << " ";
        else cout << ", ";
        cout << u;
        size2--;
    }
    cout << " }\n";
}
