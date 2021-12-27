#include<iostream>
using namespace std;
int main()
{
   long long int t,arr[100],count1=0,n;
    cin>>t;
    while(t--)
    {

        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int minimum=arr[0];
        for(int i=0;i<n;i++)
        {
            if(minimum>arr[i])
            {
                minimum=arr[i];
            }
        }


        cout<<minimum*(n-1)<<endl;
    }

    return 0;
}

