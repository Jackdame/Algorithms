#include <iostream>
using namespace std;

int main()
{
    int n, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if (m == 1)
            count1++;
        if (m == 2)
            count2++;
        if (m == 3)
            count3++;
        if (m == 4)
            count4++;
    }
    count += count4;
    if ((count2 * 2) % 4 != 0)
    {
        count += (count2 * 2) / 4 + 1;
    }
    else
        count += (count2 * 2) / 4;

    if (count3 >= count1)
        count += count3;
    else
    {
        count += count3;
        int p = count1 - count3;
        if ((count2 * 2) % 4 != 0 && p > 2)
        {
            p -= 2;
            if (p % 4 != 0)
                count += p / 4 + 1;
            else
                count += p / 4;
        }
        else if ((count2 * 2) % 4 != 0 && p <= 2)
        {
            count += 0;
        }
        else if ((count2 * 2) % 4 == 0)
        {
            if (p % 4 != 0)
                count += p / 4 + 1;
            else
                count += p / 4;
        }
    }
    cout << count;
}
