#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        string str1[10001];
        int j=0,k=0;
        for(int i=0;i<((str.size())-1);i++)
        {
            str1[i]=str1[i]+str[k]+str[k+1]  ;
            k++;
        }
        int flag[10001]={0},count=0;
        
        for(int i=0;i<((str.size())-1);i++)
        {
           if(flag[i]==1)
           {
               continue;
           }
           else
           {
               count++;
               for(int j=i+1;j<((str.size())-1);j++)
               {
                   if(str1[i]==str1[j])
                   {
                       flag[j]=1;
                   }
               }
           }
        }
        cout<<count<<"\n";
        
    }
	// your code goes here
	return 0;
}
