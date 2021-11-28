#include<iostream>
using namespace std;
int sum(int a, int b)
{

    for(int i=1;i<=a;i++)
    {
        int sum=0;
        for(int j=1;j<=b;j++)
            {
                sum=sum+j;
            }
        b=sum;
    }
    return b;
}
int main()
{
    int arr[100][2]={},n;
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
        cout<<sum(arr[i][1],arr[i][2])<<endl;
    }
    return 0;

}
