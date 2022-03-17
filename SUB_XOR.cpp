#include <iostream>
#include <string> 
#include<math.h>
#include<sstream>
using namespace std;
void decimal(long long int arr[100002], long long int n)
{
    long long int k=0;
    for(long long int i=0;i<n;i++)
    {
        long long int rem=0,count1=0,dec=0;
        while(arr[i]>0)
        {
            long long int power=0;
            rem=arr[i]%10;
            power=pow(2,count1);
            dec=dec+rem*(power);
            count1++;
            arr[i]=arr[i]/10;
        }
        arr[i]=dec;

    }

}

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
        long long int arr[100001]={},n;
        cin>>n;
        string s,str[100001]={};
        cin>>s;
        long long int k=0;
        for(int i=0;i<n;i++)
        {
            int last=n-i;
            for(int j=1;j<=last;j++)
            {
                str[k]=s.substr(i,j);
                k++;
            }
        }

        for(int i=0;i<k;i++)
        {
          stringstream geek(str[i]);
          geek >> arr[i];
         }
        decimal(arr,k);
        int temp=0;
        for(int i=0;i<k;i++)
        {
            temp=temp^arr[i];
        }
        cout<<temp<<"\n";



     }
    return 0;
}
