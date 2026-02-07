#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int main() 
{
    cin >> s1;
    if (s1[0] == '-')
    {
        cout << "-"; 
        for (int i = s1.length() - 1, j = 0; i >= 1; i--, j++)
            s2 = s2 + s1[i]; 
        if (s2[0] == '0')
            s2.erase(0, s2.find_first_not_of('0')); 
        cout << s2;                                 
    }
    else if(s1.size() == 1)
    {
        cout << s1;
    }
    else 
    {
        for (int i = s1.length() - 1, j = 0; i >= 0; i--, j++)
            s2 = s2 + s1[i]; 
        if (s2[0] == '0')
            s2.erase(0, s2.find_first_not_of('0')); 
        cout << s2;                                
    }

    return 0; 
}
