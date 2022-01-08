#include<iostream>
using namespace std;
int sum(int d)
{
    int days=0;
    if(d==1)
    {
        return 2;
    }
    days=sum(d-1)*2;
    return days;
}
int sum1(int d)
{
    int days1=0;
    if(d==11)
    {
        return 3072;
    }
    days1=sum1(d-1)*3;
    return days1;
}
int main()
{
    long long int t,n,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        if(d<11)
        {
            if(sum(d)<=n)
            {
                cout<<sum(d)<<endl;
            }
            else
            {
                cout<<n<<endl;
            }

        }
        else
        {
            if(sum(d)<=n)
            {
                cout<<sum1(d)<<endl;
            }
            else
            {
                cout<<n<<endl;
            }
        }


    }
   return 0;


}
