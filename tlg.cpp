#include<iostream>
using namespace std;
int main()
{
    int arr[10001]={},brr[10001]={},t,sub1=0,sub2=0,lead1=0,lead2=0;
    cin>>t;
    arr[0]=0;
    brr[0]=0;
    for(int i=1;i<=t;i++)
    {
        cin>>arr[i]>>brr[i];
    }
     for(int i=1;i<=t;i++)
     {
         arr[i]=arr[i]+arr[i-1];
         brr[i]=brr[i]+brr[i-1];
         if(arr[i]>brr[i])
         {
             sub1=arr[i]-brr[i];
             if(sub1>lead1)
             {
                 lead1=sub1;
             }

              cout<<"lead1  "<<lead1<<endl;
         }
         else
         {
              sub2=brr[i]-arr[i];
             if(sub2>lead2)
             {
                 lead2=sub2;
             }


             cout<<"lead2  "<<lead2<<endl;
         }
     }
     if(lead1>lead2)
     {
         cout<<1<<" "<<lead1;
     }
     else
     {
         cout<<2<<" "<<lead2;
     }

    return 0;
}

