#include<iostream>
#include<string>
using namespace std;
string fav(string str,int n)
{
    int flag=0;
    string sub;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='c')

        {
            sub=str.substr(i,4);
            {
                if(sub=="code")
                {
                    flag=1;
                    break;
                }
                else if(sub=="chef")
                {
                    break;
                }
            }
        }
        else
        {
            continue;
        }

    }
    if(flag==1)
    {
        return "AC";
    }
    else
    {
        return "WA";
    }
}
int main()
{
    string str;
    int n,t;

    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>str;
        cout<<fav(str,n)<<endl;
    }

    return 0;
}
