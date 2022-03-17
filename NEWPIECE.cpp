#include <iostream>
using namespace std;

int main() {
    int x1,y1,x2,y2,t;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2&&y1==y2)
        {
            cout<<0<<endl;
        }
        else if((x1+y1)%2==0&&(x2+y2)%2==0||(x1+y1)%2!=0&&(x2+y2)%2!=0)
        {
            cout<<2<<endl;
        }
       
        else
        {
            cout<<1<<endl;
        }
    }
	// your code goes here
	return 0;
}
