#include<iostream>
#include<string>
using namespace std;
string twostr(string str1,string str2)
{

    int count1=0;

    for(int i=0;i<str1.length();i++)
    {

        if(str1[i]==str2[i])
        {
            count1=count1+1;
        }
        else if(str1[i]=='?'||str2[i]=='?')
        {
            count1=count1+1;
        }

    }
    if(count1==str1.length())
    {
        return "Yes";
    }
    else
    {
        return "No";
    }


}
int main()
{
    string str1[100]={},str2[100]={};
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str1[i]>>str2[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<twostr(str1[i],str2[i])<<endl;
    }
    return 0;






}
