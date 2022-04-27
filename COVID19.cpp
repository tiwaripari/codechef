#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n]={},count[n]={1};
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int maxans=1,minans=n,ans=1;
	    for(int i=0;i<=(n-1);i++)
	    {
	        ans=1;
	        for(int k=i;k<(n-1);k++)
	        {
	           if((arr[k+1]-arr[k])<=2)
	           {
	               ans++;
	           }
	           else
	           break;
	        }
	        for(int k=i;k>=1;k--)
	        {
	            if((arr[k]-arr[k-1])<=2)
	            {
	                ans++;
	            }
	            else
	            break;
	        }
	        if(minans>ans)
	        {
	            minans=ans;
	        }
	        if(maxans<ans)
	        {
	            maxans=ans;
	        }
	    }
	    cout<<minans<<" "<<maxans<<"\n";
	}
	return 0;
}
