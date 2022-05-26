#include <bits\stdc++.h>
using namespace std;
int main()
{
    int arr[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> fre;
    for (int i = 0; i < n; i++)
    {
        fre[arr[i]]++;
    }

    int maxc = fre[0], index = 0;
    for (auto i : fre)
    {
        if (maxc < i.second)
        {
            maxc = i.second;
            index = i.first;
        }
        cout << i.first << " => " << i.second << endl;
    }
    cout << "The max count is of " << index << endl;
}