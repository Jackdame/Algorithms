#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n + 1);
    vector<ll> last(n + 1, 0); // 初始时间戳为0
    ll global_val = 0;
    ll last_global = -1; // 初始无全局操作
    ll sum = 0;

    // 读入初始数组
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    // 处理q次操作
    for (ll op_index = 1; op_index <= q; op_index++)
    {
        ll type;
        cin >> type;
        if (type == 1)
        {
            ll i, x;
            cin >> i >> x;

            // 判断当前元素的旧值
            ll old_val;
            if (last[i] > last_global)
            {
                old_val = arr[i]; // 最近有单独修改
            }
            else
            {
                old_val = global_val; // 最近被全局修改覆盖
            }

            // 更新和、数组值及时间戳
            sum = sum - old_val + x;
            arr[i] = x;
            last[i] = op_index;

            cout << sum << '\n';
        }
        else if (type == 2)
        {
            ll x;
            cin >> x;
            // 更新全局状态并重置和
            global_val = x;
            last_global = op_index;
            sum = n * x;
            cout << sum << '\n';
        }
    }
    return 0;
}
//核心思路：依旧空间换时间
