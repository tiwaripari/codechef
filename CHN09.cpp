#include<iostream>
#include<string>
using namespace std;
int chg(string str)
{
    int count1=0,count2=0,count3=1;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a')
           {
               count1=count1+1;
           }
        else if(str[i]=='b')
        {
            count2=count2+1;
        }

    }
    if(count1<count2)
    {
        return count1;
    }
    else if(count1==count2)
    {
        return count1;
    }
    else
    {
        return count2;
    }
}
int main()
{
    int t;
    string str[100]={};
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<t;i++)
    {
        cout<<chg(str[i])<<endl;
    }
    return 0;












}
