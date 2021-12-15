#include<iostream>
using namespace std;
int main()
{
    int m[100000]={},arr[100000]={},t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>m[j];
    }
    for(int j=0;j<t;j++)
    {if(m[j]%2==0)
    {
        for(int i=1;i<=(m[j]/2);i++)
        {
            if(i==1||i==(m[j]/2))
            {
                arr[i]=1;
            }
            else
            {
                arr[i]=0;
            }
        }
        for(int i=((m[j]/2)+1);i<=m[j];i++)
    {
        if(arr[(m[j]-i)+1]==0)
        {
            arr[i]=1;
        }
        else if(arr[(m[j]-i)+1]==1)
        {
            arr[i]=0;
        }
    }
    for(int i=1;i<=m[j];i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    }

    else
    {
        cout<<"-1"<<endl;
    }
    }
       return 0;
}
