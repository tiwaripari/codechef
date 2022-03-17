#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,count1=0;
        cin>>n>>k;
        string s;
        string sub1,sub2;
        cin>>s;
        sub1=s.substr(0,k);
        for(int i=1;i<(n-k+1);i++)
        {
            sub2=sub1;
            sub1=s.substr(i,k);
            if(sub1==sub2)
            {
                continue;
            }
            else

            {
                for(int j=0;j<k;j++)
                {
                    if(sub1[j]!=sub2[j])
                    {

                        count1++;
                    }

                }
            }
        }
        cout<<count1<<endl;
    }
    return 0;
}
