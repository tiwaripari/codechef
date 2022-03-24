#include <iostream>
using namespace std;
 int power(int bits)
{
    return 1<<bits;
}
 int max_bit( int bit )
{
    return power(bit+1)-1;
}
 int min( int a, int b )
{
    if(a<=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main() {
     int t;
    cin>>t;
    while(t--)
    {
       int k,count_bit=0,sum=0,bits=0;
        cin>>k;
       int temp=k;
       int i=0;
        while(k>>i)
        {
            count_bit++;
            i++;
        }
        
        for(int j=1;j<count_bit;j++)
       {
          
           bits+=(min(temp,max_bit(j))-power(j));
          
       }
       cout<<bits<<endl;
    }
	// your code goes here
	return 0;
}
