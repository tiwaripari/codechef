#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        long long int arr[3]={};
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+3);
        cout<<(arr[2]+arr[1])<<endl;
    }
    // your code goes here
	return 0;
}
