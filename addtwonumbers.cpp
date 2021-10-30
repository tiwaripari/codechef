#include<iostream>
using namespace std;
int main()
{
    int n,arr[100][100]={},sum=0,brr[100]={};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }

    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<2;j++)
         {

             sum=sum+arr[i][j];
        }
        brr[i]=sum;

    }
    for(int i=0;i<n;i++)
    {
        cout<<brr[i]<<endl;
    }
    return 0;
}
