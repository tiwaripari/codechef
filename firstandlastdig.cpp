#include<iostream>
using namespace std;
int sumdig(int n)
{
    int temp,rem,rem1=0,num;

    rem=n%10;
    while(n>0)
    {
        num=n/10;
        if(n<10)
        {
            rem1=n;
        }
        else
        {
            rem1=0;
        }
        n=num;

    }
    temp=rem+rem1;
    return temp;
}
int main()
{
    int n,arr[100]={};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<sumdig(arr[i])<<endl;
    }
    return 0;
}
