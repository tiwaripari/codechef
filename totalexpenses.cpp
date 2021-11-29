#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long int n,arr[100][100]={};
    long double dis,total;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {

        if(arr[i][1]>1000)
        {
            long double total;
            total=((arr[i][1]*arr[i][2])*0.9);
            cout<<fixed<<setprecision(6)<<total<<endl;
        }
        else

        {
            total=((arr[i][1]*arr[i][2])*1.0);
            cout<<fixed<<setprecision(6)<<total<<endl;
        }
    }
    return 0;


}
