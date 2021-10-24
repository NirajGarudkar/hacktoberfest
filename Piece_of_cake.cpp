#include <bits/stdc++.h>
using namespace std;
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char str[MAX_SIZE];
        int i, len;
        int a[3];
        int freq[26];

        /* Input string from user */

        gets(str);

        len = strlen(str);

        /* Initialize frequency of each character to 0 */
        for (i = 0; i < 26; i++)
        {
            freq[i] = 0;
        }

        /* Find total number of occurrences of each character */
        for (i = 0; i < len; i++)
        {
            /* If the current character is lowercase alphabet */
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                freq[str[i] - 97]++;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                freq[str[i] - 65]++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            a[i] = freq[i];
        }
        if (a[0] == a[1] + a[2] or a[1] == a[0] + a[2] or a[2] == a[0] + a[1])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 1;
        char c;
        vector<char> v;
        vector<int> b;
        for (int i = 0; i < v.size(); i++)
        {

            v.push_back(s[i]);
        }
        sort(v.begin(), v.end());
        v.push_back('z');
        for (int i = 0; i < s.length(); i++)
        {
            
            if (v[i] == v[i + 1] )
            {
                count++;
                
            }
            else
            {
                v.push_back(count);
                count=1;
               
            }
            v.erase(v.begin());
           
        }
        if (v[0] == v[1] + v[2] or v[1] == v[0] + v[2] or v[2] == v[0] + v[1])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
} */