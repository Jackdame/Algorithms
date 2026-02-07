#include <iostream>
#include <vector>
#include <cmath>
#include <set>
using namespace std;

const int MAX = 1000000;

set<long long> t_primes;

void precompute_t_primes()
{
    // 筛法找质数
    vector<bool> is_prime(MAX + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= MAX; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= MAX; i++)
    {
        if (is_prime[i])
        {
            t_primes.insert((long long)i * i);
        }
    }
}

void solve_method2()
{
    precompute_t_primes();

    int n;
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        if (t_primes.count(x))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve_method2();

    return 0;
}