#include<iostream>
#include<string>
using namespace std;
string game(string ch)
{
    if(ch=="b"||ch=="B")
    {
        return "BattleShip";
    }
     if(ch=="c"||ch=="C")
    {
        return "Cruiser";
    }
     if(ch=="d"||ch=="D")
    {
        return "Destroyer";
    }
     if(ch=="f"||ch=="F")
    {
        return "Frigate";
    }

}
int main()
{
    int arr[100]={},n;
    string ch[100]={};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<game(ch[i])<<endl;
    }
    return 0;
}
