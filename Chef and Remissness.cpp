#include<iostream>
using namespace std;
int main()
{
    int arr[100][2]={},n,sum,minimum;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2;j++)
        {
            cin>>arr[i][j];
        }

    }
    for(int i=1;i<=n;i++)
    {
        sum=arr[i][1]+arr[i][2];
        if(arr[i][1]>arr[i][2])
        {
            minimum=arr[i][1];
        }
        else
        {
            minimum=arr[i][2];
        }
        cout<<sum<<" "<<minimum;
        cout<<endl;
    }

    return 0;









}
