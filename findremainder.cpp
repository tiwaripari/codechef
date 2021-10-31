#include<iostream>
using namespace std;
int main()
{
    int arr[100][100]={},n,brr[100]={};
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
            brr[i]=arr[i][0]%arr[i][1];
            cout<<brr[i]<<endl;
    }
    return 0;


}
