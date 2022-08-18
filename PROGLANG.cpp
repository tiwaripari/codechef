#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> g1,g2,g3;
        for(int i=0;i<2;i++)
        {
            int a;
            cin>>a;
            g1.push_back(a);
        }  
        for(int i=0;i<2;i++)
        {
            int a;
            cin>>a;
            g2.push_back(a);
        }  
        for(int i=0;i<2;i++)
        {
            int a;
            cin>>a;
            g3.push_back(a);
        }  
        sort(g1.begin(),g1.end());
        sort(g2.begin(),g2.end());
        sort(g3.begin(),g3.end());
        if(g1==g2)
        {
            cout<<1<<endl;
        }
        else if(g1==g3)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
    }
   
	// your code goes here
	return 0;
}
