#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  //these two lines help for fast input of long integers as cin and cout are very slow use these lines for enormous inputs
                                      //printf and scanf can also be used in c++
    cin.tie(NULL);

    int n,k,t,sum=0;

    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t%k==0)
        {
            sum=sum+1;
        }
    }
    cout<<sum;
    return 0;
}
