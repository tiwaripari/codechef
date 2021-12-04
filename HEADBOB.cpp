#include<iostream>
#include<string>
using namespace std;
string country(int t,string str)
{
    int nind=0,ind=0;
    for(int i=0;i<t;i++)
    {
        if(str[i]=='Y')
        {
            nind=nind+1;
        }
        else if(str[i]=='I')
        {
            ind=ind+1;
        }

    }
    if(nind==0&&ind!=0)
    {
        return "INDIAN";
    }
    else if(nind!=0&&ind==0)
    {
        return "NOT INDIAN";
    }
    else if(nind==0&&ind==0)
    {
        return "NOT SURE";
    }

}
int main()
{
    int n,len,t[100]={};
    string str[100]={};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
        cin>>str[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<country(t[i],str[i])<<endl;
    }
    return 0;










}
