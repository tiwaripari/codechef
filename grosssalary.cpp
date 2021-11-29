#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t,p[1000]={};
    double salary;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>p[i];

    }
    for(int i=0;i<t;i++)
    {
        if(p[i]<1500)
        {
            salary=2*(p[i]);
            cout<<salary<<endl;
        }
        if(p[i]>=1500)
        {
            salary=(((1.98)*p[i])+500);
            cout<<fixed<<setprecision(2)<<salary<<endl;
        }

    }
    return 0;







}
