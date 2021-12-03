#include<iostream>
using namespace std;
int coins(int n,int k)
{
    int rem,maximum=0;
    for(int j=1;j<=k;j++)
    {
        rem=n%j;
        if(rem>maximum)
        {
            maximum=rem;
        }
    }
    return maximum;
}
int main()
{
    int n[100]={},k[100]={},t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n[i]>>k[i];
    }
    for(int i=0;i<t;i++)
    {
        cout<<coins(n[i],k[i])<<endl;
    }
    return 0;

}
