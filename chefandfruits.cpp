#include<iostream>
using namespace std;
int main()
{
    int n,a[100][3]={},r[100]={},d[100]={};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
       r[i]=(a[i][1]-a[i][2]);
       if(r[i]<0)
       {
           r[i]=(-r[i]);
       }

       d[i]=r[i]-a[i][3];

    }
    for(int i=1;i<=n;i++)
    {
        if(a[i][3]>=r[i])
        {
            cout<<"0"<<endl;
        }
        else
        {

                cout<<d[i]<<endl;



        }
    }
    return 0;







}
