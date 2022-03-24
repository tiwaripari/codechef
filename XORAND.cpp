#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n]={};
        long long int max=arr[0];
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
         for(long long int i=0;i<n;i++)
         {
             if(max<arr[i])
             {
                 max=arr[i];
             }
         }
      
        long long int k=0;
         while((1<<k)<=max)
         {
             k++;
         }
     
        long long int brr[k+1]={0};
        for(long long int i=0;i<n;i++)
        {
            long long int count_bit=0;
            while((1<<count_bit)<=arr[i])
            {
                 count_bit++;
            }
            brr[count_bit]+=1;
            
        }
         
       long long  int sum=0;
        for(long long int i=1;i<=k;i++)
        {
            if(brr[i]>1)
            {
                sum+=(brr[i]*(brr[i]-1))/2;
            }
            else
            {
                continue;
            }
        }
        cout<<sum<<endl;
        
    
  
    }
	// your code goes here
	return 0;
}
