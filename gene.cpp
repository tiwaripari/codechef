#include<iostream>
using namespace std;
int main()
{
    char ch[2]={};
    for(int i=0;i<2;i++)
    {
        cin>>ch[i];
    }
    if(ch[0]=='R'&&ch[1]=='B'||ch[0]=='B'&&ch[1]=='R')
    {
        cout<<"R";
    }
    else if(ch[0]=='R'&&ch[1]=='G'||ch[0]=='G'&&ch[1]=='R')
    {
        cout<<"R";
    }
    else if(ch[0]=='B'&&ch[1]=='G'||ch[0]=='G'&&ch[1]=='B')
    {
        cout<<"B";
    }
    else if(ch[0]=='B'&&ch[1]=='B'||ch[0]=='B'&&ch[1]=='B')
    {
        cout<<"B";
    }
    else if(ch[0]=='G'&&ch[1]=='G'||ch[0]=='G'&&ch[1]=='G')
    {
        cout<<"G";
    }
    else if(ch[0]=='R'&&ch[1]=='R'||ch[0]=='R'&&ch[1]=='R')
    {
        cout<<"G";
    }
    return 0;

}
