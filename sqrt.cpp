#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[100]={},n,brr[100]={};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        brr[i]=sqrt(arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        if((sqrt(arr[i])-brr[i])>0.5)
        {
            cout<<brr[i]+1<<endl;
        }
        else
        {
            cout<<brr[i]<<endl;
        }
    }
    return 0;




}







