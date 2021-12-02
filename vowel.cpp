#include<iostream>
#include<string>
using namespace std;
string vowel(string ch)
{
    if(ch=="A"||ch=="E"||ch=="I"||ch=="O"||ch=="U")
    {
        return "Vowel";
    }
     else
    {
        return "Consonant";
    }
}
int main()
{
    string ch;
    cin>>ch;
    cout<<vowel(ch);
    return 0;
}



