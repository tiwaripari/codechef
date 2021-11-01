#include<iostream>
using namespace std;
int four(int a)
{
    int temp,rem,sum=0;
    while(a>0)
    {
        temp=a/10;
        rem=a%10;
        if(rem==4)
        {
            sum=sum+1;
        }

        a=temp;
    }
    return sum;
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
        cout<<four(arr[i])<<endl;
    }

    return 0;

}
