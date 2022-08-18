#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x;
        cin>>a>>b>>x;
        int diff;
        diff=b-a;
        if(diff%x==0)
        {
            cout<<diff/x<<endl;
        }
        else
        {
            cout<<(diff/x)+1<<endl;
        }
    }
	// your code goes here
	return 0;
}
