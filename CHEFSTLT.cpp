#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s[100]={},S[100]={};
    int maximum[100]={0},minimum[100]={0},n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>s[j]>>S[j];

    }
    for(int j=0;j<n;j++)
    {

        for(int i=0;i<s[j].length();i++)
        {

            if(s[j][i]=='?'||S[j][i]=='?')
            {
                maximum[j]=maximum[j]+1;
            }
            else if(s[j][i]!=S[j][i])
            {
                maximum[j]=maximum[j]+1;
                minimum[j]=minimum[j]+1;
            }
        }
    }
    for(int j=0;j<n;j++)
    {
        cout<<minimum[j]<<" "<<maximum[j]<<endl;
    }

    return 0;
}
