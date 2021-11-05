#include<iostream>
using namespace std;
int rev(int a)
{
    int temp,revnum=0,rem;
    while(a>0)
    {
        temp=a/10;
        rem=a%10;
        revnum=revnum*10+rem;
        a=temp;

    }
    return revnum;

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
        cout<<rev(arr[i])<<endl;
    }
    return 0;
}
