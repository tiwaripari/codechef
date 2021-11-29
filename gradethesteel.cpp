#include<iostream>
using namespace std;
int main()
{
    float h[1000]={},c[1000]={},t[1000]={},n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>h[i]>>c[i]>>t[i];
    }
    for(int i=0;i<n;i++)
    {
        if(h[i]>50&&c[i]<0.7&&t[i]>5600)
        {
            cout<<"10"<<endl;
        }
        else if(h[i]>50&&c[i]<0.7)
        {
            cout<<"9"<<endl;
        }
        else if(c[i]<0.7&&t[i]>5600)
        {
            cout<<"8"<<endl;
        }
        else if(h[i]>50&&t[i]>5600)
        {
            cout<<"7"<<endl;
        }
        else if(h[i]>50||c[i]<0.7||t[i]>5600)
        {
            cout<<"6"<<endl;
        }

        else
        {
            cout<<"5"<<endl;

        }
    }
    return 0;







}
