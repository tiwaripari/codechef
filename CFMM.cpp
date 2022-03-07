#include <iostream>
#include<string>
using namespace std;

int main() {
      int t,n;
    string str[1000]={};
    cin>>t;
    while(t--)
    {
        cin>>n;
        int countc=0,counto=0,countd=0,counte=0,counth=0,countf=0,arr[6]={};
        for(int i=1;i<=n;i++)
        {
            cin>>str[i];
            for(int j=0;j<=str[i].length();j++)
            {
                if(str[i][j]=='c')
                {
                   countc++;
                    
                }
                else if(str[i][j]=='o')
                {
                    counto++;
                    
                }
                else if(str[i][j]=='d')
                {
                   countd++;
                }
                else if(str[i][j]=='e')
                {
                    counte++;
                }
                else if(str[i][j]=='h')
                {
                    counth++;
                }
                else if(str[i][j]=='f')
                {
                    countf++;
                }
                else
                {
                    continue;
                }
            }

        }
         arr[0]=countc/2;
         arr[1]=counto;
         arr[2]=countd;
         arr[3]=counte/2;
         arr[4]=countf;
         arr[5]=counth;
         int min=arr[0];
         for(int i=0;i<6;i++)
         {
            
             if(arr[i]<min)
             {
                 min=arr[i];
             }
         }
         cout<<min<<endl;
         
         

    }

	return 0;
}
