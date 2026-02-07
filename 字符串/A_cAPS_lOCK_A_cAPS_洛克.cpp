#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char m;
    bool good = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (i != 0 && s[i] != toupper(s[i]))
            good = false;
    }
    if (good && s.size() != 1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[0] == tolower(s[0]))
            {
                if (i == 0)
                    s[i] = toupper(s[i]);
                else if (i != 0)
                {
                    s[i] = tolower(s[i]);
                }
            }
            else
                s[i] = tolower(s[i]);
        }
        cout << s;
    }
    else if (s.size() == 1)
    {
        if (s[0] == tolower(s[0]))
        {
            m = toupper(s[0]);
        }
        else
        {
            m = tolower(s[0]);
        }
        cout << m;
    }
    else
        cout << s;
}
