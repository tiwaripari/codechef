#include<iostream>
#include<string>
using namespace std;
string counting(string str)
{
       long long int count0=0,count1=0;
       for(int i=0;i<str.size();i++)
       {
           if(str[i]=='0')
           {
               count0=count0+1;
           }
           else if(str[i]=='1')
           {
               count1=count1+1;
           }

       }
       if(count1==1||count0==1)
       {
           return "Yes";
       }
       else{
            return "No";
       }


}
int main()
{

   long long int t;
   string arr[100]={};
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<t;i++)
    {
        cout<<counting(arr[i])<<endl;
    }

    return 0;



}

