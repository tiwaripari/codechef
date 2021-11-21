#include<iostream>
using namespace std;
int main()
{
    int n,arr[100]={},odd=0,even=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
     for(int i=1;i<=n;i++)
     {
         if(arr[i]%2==0)
         {
             even=even+1;
         }
         else
         {
             odd=odd+1;
         }
     }
     if(even>odd)
     {
         cout<<"READY FOR BATTLE";
     }
     else
     {
         cout<<"NOT READY";
     }
     return 0;
}
