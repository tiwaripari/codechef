#include<iostream>
using namespace std;
string lessthan10(int a)
{
    if(a<10)
    {
        return "Thanks for helping Chef!";
    }
    else
    {
        return "-1";
    }
}
int main()
{
    int num[100]={},n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<lessthan10(num[i])<<endl;
    }
    return 0;
}
