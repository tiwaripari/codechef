#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n]={};
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        
       
        int sum=0,i=0;
        for( i=1;i<=n;i++)
        {
            if(arr[i]==0)
            {
                break;
            }
          
        }
      
        if(i>m)
        {
          if(i>=n)
          {
            if(arr[n]==0)
            cout<<k<<endl;
            else if(arr[n]==1)
            cout<<100<<endl;
          }
          else
          cout<<k<<endl;
        }
        
        else if(i<=m)
        {
            cout<<0<<endl;
        }
    }
	// your code goes here
	return 0;
}
