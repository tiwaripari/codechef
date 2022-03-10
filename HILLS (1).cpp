#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,u,d,flag=0;
        cin>>n>>u>>d;
       long long int arr[n]={};
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        long long int count1=1;
        for( int i=1;i<=n;i++)
        {
            if(arr[i]<arr[i+1])
            {
                if((arr[i+1]-arr[i])>u)
                {
                    break;
                }
                else{
                    count1++;
                }

            }
            else if(arr[i]>arr[i+1])
            {
                if((arr[i]-arr[i+1])>d)
                {
                    if(flag==0)
                    {
                      flag=1;
                      count1++;
                    }
                    else if(flag==1)
                    {
                        break;
                    }
                }
                else{
                    count1++;
                }
            }
            else if(arr[i]==arr[i+1])
            {
                count1++;
            }
        }
        cout<<count1<<endl;
    }
    return 0;
}
