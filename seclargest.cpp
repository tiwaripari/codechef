#include<iostream>
using namespace std;
int seclar(int a,int b,int c)
{

    if(a>b&&a<c||a>c&&a<b)
    {
        return a;
    }
    if(b>a&&b<c||b>c&&b<a)
    {
       return b;
    }
     if(c>a&&c<b||c>b&&c<a)
     {
        return c;
     }


}
int main()
{
    int arr[100][100]={},n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {

        {
            cout<<seclar(arr[i][0],arr[i][1],arr[i][2])<<endl;

        }
    }
    return 0;

}



