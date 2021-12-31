#include<iostream>
#include<string>
using namespace std;
void fav(string str, int n)
{
    int flag=0;
    string sub;
    for(int i=1;i<=n;i++)
    {
        if(str[i]=='c')
        {
            sub=str.substr(i,4);

                if(sub=="code")
                {
                    cout<<"AC"<<endl;
                    return;
                }
                else if(sub=="chef")
                {
                    cout<<"WA"<<endl;
                    return;
                }

        }
    }
}
int main()
{
    string str;
     int n,t=1;

    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>str;
        fav(str,n);
    }

    return 0;
}

