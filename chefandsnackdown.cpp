#include <iostream>
using namespace std;

int main()
{
	int arr[1000]={},n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
	    if(arr[i]==2010||arr[i]==2015||arr[i]==2016||arr[i]==2017||arr[i]==2019)
	    {
	        cout<<"HOSTED"<<endl;
	    }
	    else
	    {
	        cout<<"NOT HOSTED"<<endl;
	    }
	}

	return 0;
}

