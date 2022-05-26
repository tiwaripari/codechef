#include <iostream>
using namespace std;
int sum(int arr[101],int n)
{
    int sum1=0;
    for(int i=0;i<n;i++)
    {
        sum1=sum1+arr[i];
    }
    return sum1;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int arr[1000]={},brr[1000]={},n1;
        int x,y;
        cin>>n1>>x>>y;
        for(int i=0;i<n1;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n1;i++)
        {
            if(arr[i]>=y)
            {
                brr[i]=arr[i]-y;
            }
            else
            {
                brr[i]=0;
            }
        }
        if(sum(arr,n1)>((sum(brr,n1))+x))
        {
            cout<<"COUPON"<<endl;
        }
        else
        {
            cout<<"NO COUPON"<<endl;
        }
    }
	// your code goes here
	return 0;
}
