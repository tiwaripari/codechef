#include<iostream>
using namespace std;
int main()
{
    int n,arr[10000]={};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp=arr[n-1];
    int i=n-2;
    while(arr[i]>temp&&i>=0)
    {
        arr[i+1]=arr[i];
        i--;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<temp)
        {
            continue;
        }
        else
        {
            arr[i]=temp;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}

