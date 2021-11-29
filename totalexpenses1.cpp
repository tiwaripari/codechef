#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long int n,p[1000]={},q[1000]={};
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>p[i]>>q[i];
    }
    for(int i=0;i<n;i++)
    {
        if(p[i]>1000)
        {
            long double total;
            total=(p[i]*q[i])*0.9;
            cout<<fixed<<setprecision(6)<<total<<endl;
        }
        else
        {
            long double total;
            total=p[i]*q[i];
            cout<<fixed<<setprecision(6)<<total<<endl;
        }
    }
    return 0;








}
