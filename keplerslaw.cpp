#include<iostream>
using namespace std;
int main()
{
    float t,t1,t2,r1,r2,time=0,axis=0;
    cin>>t;
    while(t--)
    {
        cin>>t1>>t2>>r1>>r2;
        time=(t1*t1)/(r1*r1*r1);
        axis=(t2*t2)/(r2*r2*r2);

        if(time==axis)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;



}


