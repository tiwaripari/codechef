#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   long long  n,num;
    long long  t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        num=(-1+(sqrt(1+8*n)))/2;
        cout<<num<<endl;
    }

    return 0;



}

