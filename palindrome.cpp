#include<iostream>
using namespace std;
string palindrome(int a)
{
    int temp=0,rem,num;
    num=a;
    while(a>0)
    {


        rem=a%10;
        temp=temp*10+rem;
        a=a/10;

    }

    if(temp==num)
    {
        return "wins";
    }
    else
    {
        return "loses";
    }

}
int main()
{
    int arr[100]={},n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        cout<<palindrome(arr[i])<<endl;
    }
    return 0;





}
