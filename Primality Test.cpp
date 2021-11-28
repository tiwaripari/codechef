#include<iostream>
#include<math.h>
using namespace std;
string prime(int a)
{

    for(int i=2;i<a;i++)
    {
        if(a%i==0)
         {

            return "no";
            break;
         }
         if(i==(a-1))
         {
             return "yes";
         }

    }
    if(a==1)
    {
        return "no";
    }
    if(a==2)
    {
        return "yes";
    }

}
int main()
{
    int arr[100]={},n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<prime(arr[i])<<endl;
    }
    return 0;
}




