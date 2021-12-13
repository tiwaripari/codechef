#include<iostream>
using namespace std;
int remainder(int a)
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int rem,largest=0,pack;
    if(a%2==0)
    {
        rem=((a/2)-1);
    }
    else
    {
        rem=(a/2);
    }
    pack=a-rem;
    return pack;
}
int main()
{
    int n,arr[100]={};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<remainder(arr[i])<<endl;
    }
    return 0;
}
