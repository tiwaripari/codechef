#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
    while(t--)
    {
        long long int n=0;
        cin>>n;
       long long int arr[n]={};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long int count1=0;
        for(int i=0;i<(n-1);i++)
        {
            int diff=abs(arr[i]-arr[i+1]);
            if(diff>1)
            {
                cout<<"NO"<<endl;
                break;
            }
            else
            {
                count1++;
            }
            
        }
        
        if(count1==(n-1))
        {
            cout<<"YES"<<endl;
        }
       
    }
return 0;
}
// your code goes here
