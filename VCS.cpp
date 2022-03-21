#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int arr[m]={},brr[k]={};
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<k;i++)
        {
            cin>>brr[i];
        }
        int crr[n+1]={0};
        for(int i=0;i<m;i++)
        {
            crr[arr[i]]=crr[arr[i]]+1;
        }
        for(int i=0;i<k;i++)
        {
            crr[brr[i]]=crr[brr[i]]+1;
        }
        int count1=0,count0=0;
       
        for(int i=1;i<=n;i++)
        {
            if(crr[i]==2)
            {
                count1++;
            }
            if(crr[i]==0)
            {
                count0++;
            }
        }
        cout<<count1<<" "<<count0<<endl;

    }
	// your code goes here
	return 0;
}
