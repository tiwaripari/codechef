#include<iostream>
using namespace std;
int main()
{
    int n,b,num,rem,num1=0,num2=0,num3=0,temp,rem1,count1=0,count2=0;
    cin>>n>>b;
    num=n;
    while(n>0)
    {
        count1=count1+1;
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

    num3=num2;
    while(num3>0)
    {
        temp=num3/10;
        num3=temp;
        count2=count2+1;
    }

    if(count2==count1)
    {
        cout<<num2;
    }
    if(count2<count1)
    {
        cout<<num2;
        for(int i=0;i<(count1-count2);i++)
        {
            cout<<"0";
        }
    }

    return 0;


}
