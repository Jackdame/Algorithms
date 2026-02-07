# Codeforces 搜索和图论题目推荐

## 📚 目录
- [DFS/BFS 基础](#dfsbfs-基础)
- [图遍历](#图遍历)
- [二分图](#二分图)
- [最短路径](#最短路径)
- [拓扑排序](#拓扑排序)
- [强连通分量](#强连通分量)
- [树相关问题](#树相关问题)
- [进阶题目](#进阶题目)

---

## 🔍 DFS/BFS 基础

### 入门级（适合初学者）

#### 1. **500A - New Year Transportation** ⭐
- **难度**：800
- **知识点**：简单图遍历、模拟
- **链接**：https://codeforces.com/problemset/problem/500/A
- **说明**：判断从起点能否到达终点，适合BFS入门

#### 2. **580C - Kefa and Park** ⭐⭐
- **难度**：1300
- **知识点**：树上的DFS、路径计数
- **链接**：https://codeforces.com/problemset/problem/580/C
- **说明**：在树上DFS，维护路径上的连续状态

#### 3. **520B - Two Buttons** ⭐⭐
- **难度**：1400
- **知识点**：BFS最短路径、反向思考
- **链接**：https://codeforces.com/problemset/problem/520/B
- **说明**：经典BFS找最短路径，也可以反向贪心

#### 4. **131A - cAPS LOCK** ⭐
- **难度**：1000
- **知识点**：字符串处理（虽然不是图论，但逻辑简单）
- **链接**：https://codeforces.com/problemset/problem/131/A

---

## 🗺️ 图遍历

### 基础图遍历

#### 5. **445A - DZY Loves Chessboard** ⭐⭐
- **难度**：1200
- **知识点**：二分图2-染色、DFS/BFS遍历
- **链接**：https://codeforces.com/problemset/problem/445/A
- **说明**：棋盘染色问题，理解二分图的好题

#### 6. **200B - Drinks** ⭐
- **难度**：800
- **知识点**：简单计算（非图论，但简单）

#### 7. **339D - Xenia and Bit Operations** ⭐⭐
- **难度**：1600
- **知识点**：线段树、递归（DFS思想）

#### 8. **489C - Given Length and Sum of Digits...** ⭐⭐
- **难度**：1400
- **知识点**：贪心、构造

### 连通性问题

#### 9. **217A - Ice Skating** ⭐⭐
- **难度**：1200
- **知识点**：连通块、DFS/BFS
- **链接**：https://codeforces.com/problemset/problem/217/A
- **说明**：计算连通块数量，经典DFS应用

#### 10. **277A - Learning Languages** ⭐⭐
- **难度**：1400
- **知识点**：并查集、连通块
- **链接**：https://codeforces.com/problemset/problem/277/A
- **说明**：用并查集或DFS找连通块

#### 11. **500B - New Year Permutation** ⭐⭐⭐
- **难度**：1600
- **知识点**：连通块、排序
- **链接**：https://codeforces.com/problemset/problem/500/B
- **说明**：在连通块内排序

---

## 🎨 二分图

#### 12. **445A - DZY Loves Chessboard** ⭐⭐
- **难度**：1200
- **知识点**：二分图2-染色
- **说明**：已做过，经典二分图染色

#### 13. **862B - Mahmoud and Ehab and the bipartiteness** ⭐⭐⭐
- **难度**：1400
- **知识点**：二分图、树的性质
- **链接**：https://codeforces.com/problemset/problem/862/B
- **说明**：在树上添加边，保持二分图性质

#### 14. **785A - Anton and Polyhedrons** ⭐
- **难度**：800
- **知识点**：简单计数（非图论）

---

## 🛤️ 最短路径

#### 15. **20C - Dijkstra?** ⭐⭐⭐
- **难度**：1900
- **知识点**：Dijkstra算法、最短路径
- **链接**：https://codeforces.com/problemset/problem/20/C
- **说明**：经典Dijkstra，需要输出路径

#### 16. **1915F - Greetings** ⭐⭐⭐
- **难度**：1800
- **知识点**：排序、逆序对

#### 17. **59E - Shortest Path** ⭐⭐⭐⭐
- **难度**：2000
- **知识点**：BFS、状态压缩
- **链接**：https://codeforces.com/problemset/problem/59/E
- **说明**：带限制的最短路径

---

## 📊 拓扑排序

#### 18. **510C - Fox And Names** ⭐⭐⭐
- **难度**：1600
- **知识点**：拓扑排序、字典序
- **链接**：https://codeforces.com/problemset/problem/510/C
- **说明**：根据字符串关系建图，拓扑排序

#### 19. **616D - Longest k-Good Segment** ⭐⭐⭐
- **难度**：1600
- **知识点**：滑动窗口（非拓扑排序）

#### 20. **1037C - Equalize** ⭐⭐
- **难度**：1200
- **知识点**：贪心

---

## 🌳 树相关问题

### 树遍历

#### 21. **580C - Kefa and Park** ⭐⭐
- **难度**：1300
- **知识点**：树DFS、路径计数
- **说明**：已做过

#### 22. **337A - Puzzles** ⭐
- **难度**：900
- **知识点**：排序、贪心

#### 23. **977C - Less or Equal** ⭐⭐
- **难度**：1200
- **知识点**：排序、二分

### 树的直径

#### 24. **337D - Book of Evil** ⭐⭐⭐
- **难度**：1900
- **知识点**：树的直径、DFS
- **链接**：https://codeforces.com/problemset/problem/337/D
- **说明**：找树的直径，经典问题

#### 25. **455A - Boredom** ⭐⭐
- **难度**：1500
- **知识点**：DP（非树问题）

---

## 🔗 强连通分量

#### 26. **427C - Checkposts** ⭐⭐⭐
- **难度**：1700
- **知识点**：强连通分量（SCC）、Tarjan算法
- **链接**：https://codeforces.com/problemset/problem/427/C
- **说明**：找强连通分量，计算最小代价

#### 27. **999E - Reachability from the Capital** ⭐⭐⭐
- **难度**：2000
- **知识点**：强连通分量、图论
- **链接**：https://codeforces.com/problemset/problem/999/E
- **说明**：SCC应用，需要添加最少的边

---

## 🚀 进阶题目

### 综合应用

#### 28. **500C - New Year Book Reading** ⭐⭐⭐
- **难度**：1600
- **知识点**：贪心、模拟

#### 29. **510C - Fox And Names** ⭐⭐⭐
- **难度**：1600
- **知识点**：拓扑排序（已提到）

#### 30. **20C - Dijkstra?** ⭐⭐⭐
- **难度**：1900
- **知识点**：最短路径（已提到）

### 高级图论

#### 31. **118E - Bertown roads** ⭐⭐⭐⭐
- **难度**：2100
- **知识点**：桥、边双连通分量
- **链接**：https://codeforces.com/problemset/problem/118/E
- **说明**：判断能否定向边使得图强连通

#### 32. **295B - Greg and Graph** ⭐⭐⭐
- **难度**：1800
- **知识点**：Floyd算法、逆向思维
- **链接**：https://codeforces.com/problemset/problem/295/B
- **说明**：逆向Floyd，逐步添加节点

#### 33. **1472D - Even-Odd Game** ⭐⭐
- **难度**：1200
- **知识点**：贪心、博弈

---

## 📖 学习路径建议

### 阶段1：基础（800-1200）
1. **500A** - 图遍历入门
2. **580C** - 树DFS
3. **445A** - 二分图染色
4. **217A** - 连通块

### 阶段2：进阶（1300-1600）
5. **520B** - BFS最短路径
6. **277A** - 并查集/连通块
7. **500B** - 连通块应用
8. **510C** - 拓扑排序

### 阶段3：提高（1700-2000）
9. **20C** - Dijkstra
10. **427C** - 强连通分量
11. **295B** - Floyd算法
12. **999E** - SCC应用

### 阶段4：高级（2000+）
13. **118E** - 桥和边双连通
14. **59E** - 复杂BFS
15. **337D** - 树的直径

---

## 🎯 重点推荐（必做）

### 搜索类
1. ⭐⭐⭐ **580C - Kefa and Park** - 树DFS经典
2. ⭐⭐⭐ **520B - Two Buttons** - BFS最短路径
3. ⭐⭐ **217A - Ice Skating** - 连通块

### 图论类
4. ⭐⭐⭐ **445A - DZY Loves Chessboard** - 二分图入门
5. ⭐⭐⭐ **20C - Dijkstra?** - 最短路径
6. ⭐⭐⭐ **510C - Fox And Names** - 拓扑排序
7. ⭐⭐⭐ **427C - Checkposts** - 强连通分量

### 综合应用
8. ⭐⭐⭐ **500B - New Year Permutation** - 连通块+排序
9. ⭐⭐⭐ **295B - Greg and Graph** - Floyd逆向

---

## 💡 学习建议

1. **循序渐进**：从简单题开始，逐步提高难度
2. **分类练习**：按知识点分类刷题，加深理解
3. **总结模板**：每类题目总结标准模板
4. **对比学习**：同一问题尝试不同方法（DFS vs BFS）
5. **举一反三**：做完一题，找相似题目练习

---

## 📚 相关资源

- **Codeforces官方**：https://codeforces.com
- **题目分类**：https://codeforces.com/problemset
- **题解网站**：
  - https://codeforces.com/blog/entry
  - https://www.cnblogs.com（中文题解）

---

**祝刷题愉快！** 🎉



