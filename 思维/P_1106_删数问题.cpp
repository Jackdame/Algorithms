#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num;
    int k;
    cin >> num >> k;

    string result = ""; 
    for (char digit : num)
    {
        
        while (k > 0 && !result.empty() && result.back() > digit)
        {
            result.pop_back();
            k--;
        }
        
        if (!result.empty() || digit != '0')
        {
            result.push_back(digit);
        }
    }

    
    while (k > 0 && !result.empty())
    {
        result.pop_back();
        k--;
    }

   
    cout << (result.empty() ? "0" : result) << endl;
    return 0;
}