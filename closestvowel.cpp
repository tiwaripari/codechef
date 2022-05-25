#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    while (n--)
    {
        int s;
        cin >> s;
        string str;
        cin >> str;
        int pro = 1;
        for (int i = 0; i < s; i++)
        {
            int diff = 0, c = 1, mindiff = 0;

            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                continue;
            }
            else
            {
                diff = abs(str[i] - 'a');
                mindiff = diff;
                diff = abs(str[i] - 'e');
                if (mindiff > diff)
                {
                    mindiff = diff;
                }
                else if (mindiff == diff)
                {
                    c++;
                }
                diff = abs(str[i] - 'i');
                if (mindiff > diff)
                {
                    mindiff = diff;
                }
                else if (mindiff == diff)
                {
                    c++;
                }
                diff = abs(str[i] - 'o');
                if (mindiff > diff)
                {
                    mindiff = diff;
                }
                else if (mindiff == diff)
                {
                    c++;
                }
                diff = abs(str[i] - 'u');
                if (mindiff > diff)
                {
                    mindiff = diff;
                }
                else if (mindiff == diff)
                {
                    c++;
                }

                pro = pro * c;
            }
        }
        cout << pro % 1000000007 << endl;
    }
    return 0;
}
