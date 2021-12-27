#include<iostream>
using namespace std;
int main()
{
    int t,arr[100]={},n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long int count1=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if((arr[i]+k)%7==0)
            {
                count1=count1+1;
            }
        }

        cout<<count1<<endl;


    }
    return 0;



}

