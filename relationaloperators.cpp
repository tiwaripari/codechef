#include<iostream>
using namespace std;

int main()
{
    int arr[100][100]={},n;
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

      if(arr[i][1]>arr[i][2])
      {
          cout<<" > "<<endl;
      }
      if(arr[i][1]<arr[i][2])
      {
          cout<<" < "<<endl;
      }
      if(arr[i][1]==arr[i][2])
      {
          cout<<" = "<<endl;
      }

    }
   return 0;



}
