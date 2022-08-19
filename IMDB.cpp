#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x;
        cin>>n>>x;
        map<long long int,long long int> Map;
        long long int max=0;
        for(int i=0;i<n;i++)
        {
           long long int key,val; 
            cin>>key>>val;
            Map[key] = val;
            if(key<=x)
            {
                if(Map[key]>=max)
                {
                    max=Map[key];
                }
                
            }
            //Map.insert(pair<int,int>(key,val));
            
        }
        
       
        //map<int, int>::iterator itr;
        //for(int itr=Map.begin();itr<=Map.end();itr++)
        
        cout<<max<<endl;
        
    }
	// your code goes here
	return 0;
}
