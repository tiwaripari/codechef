#include<iostream>
#include<math.h>
using namespace std;
string prime(int a)
{

    for(int i=2;i<=sqrt(a);i++)
    {
       if(a%i==0)
        return "no";
    }
    return "yes";
}
int main()
{
    int arr[100]={},n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<prime(arr[i])<<endl;
    }
    return 0;






}




