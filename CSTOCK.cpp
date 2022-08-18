#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int s,a,b,d;
        float c;
        cin>>s>>a>>b;
        cin>>c;
        d=((c/100.00)*s)+s;
        
        if(d>=a&&d<=b)
        {
            cout<<"Yes"<<"\n";
        }
        else if(d<a)
        {
            cout<<"No"<<"\n";
        }
        else if(d>b)
        {
            cout<<"No"<<"\n";
        }
        
        
    }
	// your code goes here
	return 0;
}
