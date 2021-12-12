#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=0&&n<10)
    {
        cout<<"1"<<endl;
    }
    else if(n>=10&&n<100)
    {
        cout<<"2"<<endl;
    }
    else if(n>=100&&n<1000)
    {
        cout<<"3"<<endl;
    }
    else if(n>=1000)
    {
        cout<<"More than 3 digits"<<endl;
    }
    return 0;
}

