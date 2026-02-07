# Codeforces 动态规划（DP）题目推荐

## 📚 目录
- [线性DP](#线性dp)
- [背包DP](#背包dp)
- [区间DP](#区间dp)
- [树形DP](#树形dp)
- [状态压缩DP](#状态压缩dp)
- [数位DP](#数位dp)
- [概率DP](#概率dp)
- [字符串DP](#字符串dp)
- [进阶DP](#进阶dp)

---

## 📈 线性DP

### 基础线性DP

#### 1. **455A - Boredom** ⭐⭐
- **难度**：1500
- **知识点**：线性DP、计数
- **链接**：https://codeforces.com/problemset/problem/455/A
- **说明**：经典线性DP，选择不相邻的元素
- **状态**：`dp[i]` 表示处理到值为i时的最大得分

#### 2. **474D - Flowers** ⭐⭐
- **难度**：1700
- **知识点**：线性DP、前缀和
- **链接**：https://codeforces.com/problemset/problem/474/D
- **说明**：递推关系，类似斐波那契

#### 3. **189A - Cut Ribbon** ⭐⭐
- **难度**：1300
- **知识点**：完全背包、线性DP
- **链接**：https://codeforces.com/problemset/problem/189/A
- **说明**：用三种长度切绳子，求最大段数

#### 4. **313B - Ilya and Queries** ⭐⭐
- **难度**：1100
- **知识点**：前缀和、简单DP
- **链接**：https://codeforces.com/problemset/problem/313/B
- **说明**：区间查询，前缀和优化

#### 5. **706B - Interesting drink** ⭐
- **难度**：1100
- **知识点**：二分、前缀和

### 最长上升子序列（LIS）

#### 6. **977F - Consecutive Subsequence** ⭐⭐⭐
- **难度**：1700
- **知识点**：LIS变形、DP
- **链接**：https://codeforces.com/problemset/problem/977/F
- **说明**：找最长的连续子序列

#### 7. **4D - Mysterious Present** ⭐⭐⭐
- **难度**：1800
- **知识点**：LIS、DP
- **链接**：https://codeforces.com/problemset/problem/4/D
- **说明**：二维LIS问题

---

## 🎒 背包DP

### 0-1背包

#### 8. **189A - Cut Ribbon** ⭐⭐
- **难度**：1300
- **知识点**：完全背包（已提到）

#### 9. **416B - Art Union** ⭐⭐
- **难度**：1500
- **知识点**：DP、贪心

### 完全背包

#### 10. **189A - Cut Ribbon** ⭐⭐
- **说明**：完全背包经典题

#### 11. **474D - Flowers** ⭐⭐
- **难度**：1700
- **知识点**：完全背包思想（已提到）

---

## 🔗 区间DP

#### 12. **607A - Chain Reaction** ⭐⭐⭐
- **难度**：1600
- **知识点**：区间DP、贪心
- **链接**：https://codeforces.com/problemset/problem/607/A

#### 13. **149D - Coloring Brackets** ⭐⭐⭐⭐
- **难度**：2100
- **知识点**：区间DP、括号匹配
- **链接**：https://codeforces.com/problemset/problem/149/D
- **说明**：括号序列染色，经典区间DP

#### 14. **1132F - Clear the String** ⭐⭐⭐
- **难度**：2000
- **知识点**：区间DP
- **链接**：https://codeforces.com/problemset/problem/1132/F
- **说明**：删除字符串，区间DP

---

## 🌳 树形DP

#### 15. **337D - Book of Evil** ⭐⭐⭐
- **难度**：1900
- **知识点**：树形DP、树的直径
- **链接**：https://codeforces.com/problemset/problem/337/D
- **说明**：树上的DP，两次DFS

#### 16. **219D - Choosing Capital for Treeland** ⭐⭐⭐
- **难度**：1800
- **知识点**：树形DP
- **链接**：https://codeforces.com/problemset/problem/219/D
- **说明**：有向树，选择根节点

#### 17. **461B - Appleman and Tree** ⭐⭐⭐
- **难度**：1900
- **知识点**：树形DP、组合
- **链接**：https://codeforces.com/problemset/problem/461/B
- **说明**：树上染色，经典树形DP

#### 18. **543A - Writing Code** ⭐⭐⭐
- **难度**：1800
- **知识点**：背包DP（非树形）

---

## 🔢 状态压缩DP

#### 19. **580D - Kefa and Dishes** ⭐⭐⭐
- **难度**：1800
- **知识点**：状态压缩DP
- **链接**：https://codeforces.com/problemset/problem/580/D
- **说明**：状压DP经典，TSP变形

#### 20. **401D - Roman and Numbers** ⭐⭐⭐⭐
- **难度**：2100
- **知识点**：状态压缩DP、数位DP
- **链接**：https://codeforces.com/problemset/problem/401/D
- **说明**：数字排列，状压DP

#### 21. **8C - Looking for Order** ⭐⭐⭐⭐
- **难度**：2200
- **知识点**：状态压缩DP
- **链接**：https://codeforces.com/problemset/problem/8/C
- **说明**：TSP问题，状压DP

---

## 🔢 数位DP

#### 22. **55D - Beautiful numbers** ⭐⭐⭐⭐
- **难度**：2200
- **知识点**：数位DP
- **链接**：https://codeforces.com/problemset/problem/55/D
- **说明**：数位DP经典题

#### 23. **401D - Roman and Numbers** ⭐⭐⭐⭐
- **难度**：2100
- **知识点**：数位DP、状压DP（已提到）

---

## 🎲 概率DP

#### 24. **148D - Bag of mice** ⭐⭐⭐
- **难度**：1900
- **知识点**：概率DP
- **链接**：https://codeforces.com/problemset/problem/148/D
- **说明**：概率DP经典，期望计算

#### 25. **518D - Ilya and Escalator** ⭐⭐⭐
- **难度**：1900
- **知识点**：概率DP
- **链接**：https://codeforces.com/problemset/problem/518/D
- **说明**：概率DP，期望值

---

## 📝 字符串DP

#### 26. **1132F - Clear the String** ⭐⭐⭐
- **难度**：2000
- **知识点**：区间DP、字符串（已提到）

#### 27. **1183H - Subsequences (hard version)** ⭐⭐⭐
- **难度**：2000
- **知识点**：字符串DP
- **链接**：https://codeforces.com/problemset/problem/1183/H

#### 28. **1155D - Beautiful Array** ⭐⭐⭐
- **难度**：1900
- **知识点**：线性DP、最大子段和
- **链接**：https://codeforces.com/problemset/problem/1155/D
- **说明**：最大子段和变形

---

## 🚀 进阶DP

### 综合应用

#### 29. **455A - Boredom** ⭐⭐
- **难度**：1500
- **知识点**：线性DP（已提到）

#### 30. **474D - Flowers** ⭐⭐
- **难度**：1700
- **知识点**：线性DP、前缀和（已提到）

#### 31. **1183H - Subsequences** ⭐⭐⭐
- **难度**：2000
- **知识点**：字符串DP（已提到）

#### 32. **1155D - Beautiful Array** ⭐⭐⭐
- **难度**：1900
- **知识点**：线性DP（已提到）

### 高难度DP

#### 33. **149D - Coloring Brackets** ⭐⭐⭐⭐
- **难度**：2100
- **知识点**：区间DP（已提到）

#### 34. **55D - Beautiful numbers** ⭐⭐⭐⭐
- **难度**：2200
- **知识点**：数位DP（已提到）

#### 35. **8C - Looking for Order** ⭐⭐⭐⭐
- **难度**：2200
- **知识点**：状压DP（已提到）

---

## 📖 学习路径建议

### 阶段1：基础线性DP（1200-1500）
1. **189A - Cut Ribbon** - 完全背包入门
2. **455A - Boredom** - 线性DP经典
3. **313B - Ilya and Queries** - 前缀和DP

### 阶段2：背包和区间DP（1500-1800）
4. **474D - Flowers** - 递推DP
5. **607A - Chain Reaction** - 区间DP入门
6. **580D - Kefa and Dishes** - 状压DP入门

### 阶段3：树形和字符串DP（1800-2000）
7. **219D - Choosing Capital** - 树形DP
8. **461B - Appleman and Tree** - 树形DP进阶
9. **1132F - Clear the String** - 区间DP进阶
10. **1155D - Beautiful Array** - 线性DP进阶

### 阶段4：高级DP（2000+）
11. **149D - Coloring Brackets** - 区间DP经典
12. **148D - Bag of mice** - 概率DP
13. **401D - Roman and Numbers** - 状压+数位DP
14. **55D - Beautiful numbers** - 数位DP经典

---

## 🎯 重点推荐（必做 Top 10）

### 入门必做

1. **189A - Cut Ribbon** ⭐⭐⭐
   - 完全背包，DP入门经典
   
2. **455A - Boredom** ⭐⭐⭐
   - 线性DP，选择问题
   
3. **313B - Ilya and Queries** ⭐⭐
   - 前缀和DP，简单实用

### 进阶必做

4. **474D - Flowers** ⭐⭐⭐
   - 递推DP，前缀和优化
   
5. **580D - Kefa and Dishes** ⭐⭐⭐
   - 状压DP入门，TSP变形
   
6. **219D - Choosing Capital** ⭐⭐⭐
   - 树形DP经典
   
7. **461B - Appleman and Tree** ⭐⭐⭐
   - 树形DP进阶

### 提高必做

8. **1132F - Clear the String** ⭐⭐⭐
   - 区间DP，字符串处理
   
9. **149D - Coloring Brackets** ⭐⭐⭐⭐
   - 区间DP经典，括号匹配
   
10. **148D - Bag of mice** ⭐⭐⭐
    - 概率DP，期望计算

---

## 💡 DP核心思想

### 1. 状态定义
- 明确 `dp[i]` 或 `dp[i][j]` 表示什么
- 状态要能覆盖所有情况

### 2. 状态转移
- 找到状态之间的关系
- 写出转移方程

### 3. 边界条件
- 初始化基础状态
- 处理边界情况

### 4. 优化
- 空间优化（滚动数组）
- 时间优化（前缀和、单调队列等）

---

## 📝 DP模板

### 线性DP模板
```cpp
// 1D DP
int dp[MAXN];
dp[0] = base_case;
for (int i = 1; i <= n; i++) {
    dp[i] = transition(dp[i-1], ...);
}

// 2D DP
int dp[MAXN][MAXN];
dp[0][0] = base_case;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
        dp[i][j] = transition(dp[i-1][j], dp[i][j-1], ...);
    }
}
```

### 背包DP模板
```cpp
// 0-1背包
for (int i = 1; i <= n; i++) {
    for (int j = W; j >= w[i]; j--) {
        dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
    }
}

// 完全背包
for (int i = 1; i <= n; i++) {
    for (int j = w[i]; j <= W; j++) {
        dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
    }
}
```

### 区间DP模板
```cpp
for (int len = 2; len <= n; len++) {
    for (int i = 0; i + len - 1 < n; i++) {
        int j = i + len - 1;
        for (int k = i; k < j; k++) {
            dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + cost);
        }
    }
}
```

### 树形DP模板
```cpp
void dfs(int u, int parent) {
    // 初始化叶子节点
    dp[u] = base_value;
    
    for (int v : g[u]) {
        if (v != parent) {
            dfs(v, u);
            // 状态转移
            dp[u] = combine(dp[u], dp[v]);
        }
    }
}
```

### 状态压缩DP模板
```cpp
int dp[1 << n];
dp[0] = 0;
for (int mask = 0; mask < (1 << n); mask++) {
    for (int i = 0; i < n; i++) {
        if (!(mask & (1 << i))) {
            int next_mask = mask | (1 << i);
            dp[next_mask] = min(dp[next_mask], dp[mask] + cost);
        }
    }
}
```

---

## 🔄 DP vs 其他算法

| 算法 | 适用场景 | 时间复杂度 |
|------|---------|-----------|
| 贪心 | 局部最优即全局最优 | O(n) |
| DP | 最优子结构、重叠子问题 | O(n²) 或更高 |
| 分治 | 问题可分解 | O(n log n) |

---

## ✅ 刷题检查清单

### 基础阶段
- [ ] 理解DP基本思想
- [ ] 掌握线性DP
- [ ] 掌握背包DP（0-1、完全）
- [ ] 理解状态转移方程

### 进阶阶段
- [ ] 掌握区间DP
- [ ] 掌握树形DP
- [ ] 理解状态压缩DP
- [ ] 掌握DP优化技巧

### 提高阶段
- [ ] 掌握数位DP
- [ ] 掌握概率DP
- [ ] 掌握复杂状态设计
- [ ] 能够独立分析DP问题

---

## 📚 相关资源

- **DP专题**：https://codeforces.com/problemset?tags=dp
- **经典DP问题**：
  - 最长上升子序列（LIS）
  - 最长公共子序列（LCS）
  - 编辑距离
  - 背包问题
  - 区间DP
  - 树形DP

---

**建议刷题顺序**：189A → 455A → 474D → 580D → 219D → 461B → 1132F → 149D

**祝刷题愉快！** 🎉



