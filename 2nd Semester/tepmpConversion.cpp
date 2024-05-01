#include<bits/stdc++.h>
using namespace std;
int tempconvert(float t);

int main()
{
    cout<<"enter the value of Temperature : ";
    double  tem;
    cin>>tem;
    tempconvert(tem);
    
    return 0;
}

int tempconvert(float t)
{
    double temp;
    temp = (t - 32) / 1.8;
    cout << "the converted temperature is : " << temp << endl;
}