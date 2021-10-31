#include<iostream>
using namespace std;
int sumnum(int a)
{
    int temp,rem,sum=0;
    while(a>0)
    {
        temp=a/10;
        rem=a%10;
        sum=sum+rem;
        a=temp;
    }
    return sum;

}
int main()
{
    int n,num,arr[100]={},sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<sumnum(arr[i])<<endl;
    }

  return 0;

}
