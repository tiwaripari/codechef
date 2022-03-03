#include <iostream>
using namespace std;

int main() {

   int t;// your code goes here
   cin>>t;
   while(t--)
   {
       int n=0,k=0,sum=0,num=0;
       long long int v=0,arr[1000]={};
       cin>>n>>k>>v;
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
       }
       for(int i=1;i<=n;i++)
       {
           sum=sum+arr[i];
       }
      num=(v*(n+k)-sum);
      if(num%k==0&&num>0)
      {
          cout<<num/k<<endl;
      }
      else
      {cout<<-1<<endl;}
   }
         
	return 0;
}
