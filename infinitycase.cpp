#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0,rem=0;
        if(n==1)
        {
            cout<<0<<endl;
        }
        else{
        c=((n-1)/5)*2;
        rem=(n-1)%5;
        
        if(rem==4)
        {
            c=c+2;
        }
        else if(rem==2||rem==3||rem==1)
        {
            c++;
        }
        cout<<c<<endl;
        }
    }
	// your code goes here
	return 0;
}
