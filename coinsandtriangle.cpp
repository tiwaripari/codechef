#include<iostream>
using namespace std;
int main()
{
    int n,i=1,num=0,count1=0,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        while(num<=n)
        {
        count1=count1+1;
        num=num+i;
        i++;
        }
        cout<<count1-1<<endl;
    }
    return 0;



}
