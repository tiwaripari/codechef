#include<iostream>
using namespace std;
int main()
{
    int n,b,num,rem,num1=0,num2=0,temp,rem1;
    cin>>n>>b;
    num=n;
    while(n>0)
    {

        rem=num%b;
        num1=num1*10+rem;
        num=n/b;
        n=num;
    }
    while(num1>0)
    {
        rem1=num1%10;
        temp=num1/10;
        num2=num2*10+rem1;
        num1=temp;
    }
     cout<<num2;

    return 0;


}
