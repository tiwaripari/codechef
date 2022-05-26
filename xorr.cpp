#include <iostream>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int arr[1000000], brr[1000000], n;
        cin >> n;
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (long long int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        map<long long int, long long int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[arr[i] ^ brr[i]]++;
        }
        long long int ans = 0;
        for (auto i : freq)
        {
            
            ans += ((i.second) * (i.second - 1)) / 2;
        }
        cout << ans << endl;
    }
}