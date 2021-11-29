#include<iostream>
using namespace std;
int main()
{
    int n,arr[100]={},sum=0;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    for(int j=0;j<n;j++)
    {
        sum=0;
        for(int i=0;i<=(arr[j]/2)-1;i++)
        {
            sum=sum+i;
        }
        cout<<sum<<endl;
    }


    return 0;




}
