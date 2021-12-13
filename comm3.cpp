#include<iostream>
#include<cmath>
using namespace std;
string comm(int arr[3][2],int n)
{
    float dist1,dist2,dist3;
    dist1=sqrt(((arr[1][0]-arr[0][0])*(arr[1][0]-arr[0][0]))+((arr[1][1]-arr[0][1])*(arr[1][1]-arr[0][1])));
    dist2=sqrt(((arr[1][0]-arr[2][0])*(arr[1][0]-arr[2][0]))+((arr[1][1]-arr[2][1])*(arr[1][1]-arr[2][1])));
    dist3=sqrt(((arr[0][0]-arr[2][0])*(arr[0][0]-arr[2][0]))+((arr[0][1]-arr[2][1])*(arr[0][1]-arr[2][1])));
    if((dist1<=n&&dist2<=n)||(dist2<=n&&dist3<=n)||(dist3<=n&&dist1<=n))
    {
        return "yes";
    }
    else
    {
        return "no";
    }
}
int main()
{
    int arr[1000][3][2]={},n[1000]={},t;
    cin>>t;

    for(int k=0;k<t;k++)
    {
    cin>>n[k];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {

            cin>>arr[k][i][j];
        }
    }
    }
    for(int k=0;k<t;k++)
    {
         cout<<comm(arr[k],n[k])<<endl;
    }

    return 0;
}
