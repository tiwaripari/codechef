#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,arr[1000]={},c=0,temp=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        int k=1;
        while(c!=7)
        {

            if(arr[k]>=1&&arr[k]<=7)
            {
                c++;
            }

            k++;
        }
        cout<<k-1<<endl;

    }
	// your code goes here
	return 0;
}
