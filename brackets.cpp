#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {string str;
    cin>>str;
    int max_bal=0;
    int balance=0;
    for(int i=0;i<str.length();i++)
    {


        if(str[i]=='(')
        {
            balance=balance+1;
        }
        else if(str[i]==')')
        {
            balance=balance-1;
        }
        if(max_bal<balance)
        {
            max_bal=balance;
        }
    }
     for(int j=0;j<(max_bal*2);j++)
     {
         if(j<max_bal)
         {
             cout<<"(";
         }
         else if(j>=max_bal)
         {
             cout<<")";
         }
     }
     cout<<"\n";
    }
     return 0;
}

