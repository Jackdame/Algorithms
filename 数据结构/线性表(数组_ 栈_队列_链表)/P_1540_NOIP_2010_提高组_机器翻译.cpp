#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    int m, n, t, ans = 0;
    std::cin >> m >> n;
    std::vector<int> v; // 用来表示内存
    while (std::cin >> t)
    {
        if (std::find(v.begin(), v.end(), t) == v.end())
        {                   // 如果不在内存中
            v.push_back(t); // 加入内存
            ++ans;
        }
        if (v.size() > m)       // 内存满了
            v.erase(v.begin()); // 把第一个单词删掉
    }
    std::cout << ans << std::endl;
}
