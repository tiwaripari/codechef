#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int l,d,r;
	    cin>>d>>l>>r;
	    if(d>=l&&d<=r)
	    {
	        cout<<"Take second dose now"<<endl;
	    }
	    else if(d<l)
	    {
	        cout<<"Too Early"<<"\n";
	        
	    }
	    else if(d>r)
	    {
	        cout<<"Too Late \n";
	    }
	}
	return 0;
}
