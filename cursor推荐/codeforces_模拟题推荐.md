# Codeforces 模拟题推荐（重点练习struct）

## 📚 目录
- [基础模拟（适合struct入门）](#基础模拟适合struct入门)
- [排序和比较（struct重载运算符）](#排序和比较struct重载运算符)
- [复杂模拟（多属性struct）](#复杂模拟多属性struct)
- [时间处理（struct应用）](#时间处理struct应用)
- [几何模拟（坐标struct）](#几何模拟坐标struct)
- [综合应用](#综合应用)

---

## 🎯 基础模拟（适合struct入门）

### 简单模拟 + struct基础

#### 1. **158A - Next Round** ⭐
- **难度**：800
- **知识点**：数组遍历、条件判断
- **链接**：https://codeforces.com/problemset/problem/158/A
- **struct练习**：定义选手结构体，包含分数和排名
```cpp
struct Participant {
    int score;
    int rank;
};
```

#### 2. **231A - Team** ⭐
- **难度**：800
- **知识点**：条件判断、计数
- **链接**：https://codeforces.com/problemset/problem/231/A
- **struct练习**：定义问题结构体，包含三个人的观点
```cpp
struct Problem {
    int petya, vasya, tonya;
};
```

#### 3. **282A - Bit++** ⭐
- **难度**：800
- **知识点**：字符串处理、变量操作
- **链接**：https://codeforces.com/problemset/problem/282/A
- **struct练习**：定义操作结构体

#### 4. **71A - Way Too Long Words** ⭐
- **难度**：800
- **知识点**：字符串处理
- **链接**：https://codeforces.com/problemset/problem/71/A
- **struct练习**：定义单词结构体

---

## 📊 排序和比较（struct重载运算符）

### 需要排序的模拟题

#### 5. **432A - Choosing Teams** ⭐⭐
- **难度**：1100
- **知识点**：排序、贪心
- **链接**：https://codeforces.com/problemset/problem/432/A
- **struct练习**：定义学生结构体，按参与次数排序
```cpp
struct Student {
    int id;
    int participation;
    bool operator<(const Student& other) const {
        return participation < other.participation;
    }
};
```

#### 6. **339B - Xenia and Ringroad** ⭐⭐
- **难度**：1000
- **知识点**：模拟、计算
- **链接**：https://codeforces.com/problemset/problem/339/B

#### 7. **489B - BerSU Ball** ⭐⭐
- **难度**：1200
- **知识点**：排序、匹配
- **链接**：https://codeforces.com/problemset/problem/489/B
- **struct练习**：定义学生结构体，按技能值排序
```cpp
struct Student {
    int skill;
    bool matched;
    bool operator<(const Student& other) const {
        return skill < other.skill;
    }
};
```

#### 8. **492B - Vanya and Lanterns** ⭐⭐
- **难度**：1200
- **知识点**：排序、几何
- **链接**：https://codeforces.com/problemset/problem/492/B
- **struct练习**：定义灯笼结构体，按位置排序

#### 9. **230B - T-primes** ⭐⭐
- **难度**：1300
- **知识点**：数论、判断

---

## 🎮 复杂模拟（多属性struct）

### 多属性、多状态模拟

#### 10. **158B - Taxi** ⭐⭐
- **难度**：1100
- **知识点**：贪心、模拟
- **链接**：https://codeforces.com/problemset/problem/158/B
- **struct练习**：定义组结构体，包含人数和状态
```cpp
struct Group {
    int size;
    bool assigned;
    int taxi_id;
};
```

#### 11. **363B - Fence** ⭐⭐
- **难度**：1100
- **知识点**：滑动窗口、前缀和
- **链接**：https://codeforces.com/problemset/problem/363/B

#### 12. **474B - Worms** ⭐⭐
- **难度**：1200
- **知识点**：二分、前缀和
- **链接**：https://codeforces.com/problemset/problem/474/B

#### 13. **489C - Given Length and Sum of Digits...** ⭐⭐
- **难度**：1400
- **知识点**：贪心、构造
- **链接**：https://codeforces.com/problemset/problem/489/C

#### 14. **500B - New Year Permutation** ⭐⭐⭐
- **难度**：1600
- **知识点**：连通块、排序
- **链接**：https://codeforces.com/problemset/problem/500/B
- **struct练习**：定义元素结构体，包含值和位置
```cpp
struct Element {
    int value;
    int position;
    int component_id;
    bool operator<(const Element& other) const {
        return value < other.value;
    }
};
```

---

## ⏰ 时间处理（struct应用）

### 日期时间模拟

#### 15. **339A - Helpful Maths** ⭐
- **难度**：800
- **知识点**：排序、字符串

#### 16. **158C - Cd and pwd commands** ⭐⭐
- **难度**：1400
- **知识点**：字符串处理、路径模拟
- **链接**：https://codeforces.com/problemset/problem/158/C
- **struct练习**：定义路径节点结构体
```cpp
struct PathNode {
    string name;
    PathNode* parent;
    vector<PathNode*> children;
};
```

#### 17. **1B - Spreadsheet** ⭐⭐⭐
- **难度**：1600
- **知识点**：进制转换、字符串处理
- **链接**：https://codeforces.com/problemset/problem/1/B
- **struct练习**：定义单元格结构体
```cpp
struct Cell {
    int row;
    int col;
    string notation;
};
```

---

## 📐 几何模拟（坐标struct）

### 坐标和几何问题

#### 18. **217A - Ice Skating** ⭐⭐
- **难度**：1200
- **知识点**：连通块、DFS
- **链接**：https://codeforces.com/problemset/problem/217/A
- **struct练习**：定义点结构体
```cpp
struct Point {
    int x, y;
    bool visited;
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};
```

#### 19. **492B - Vanya and Lanterns** ⭐⭐
- **难度**：1200
- **知识点**：排序、几何（已提到）

#### 20. **363B - Fence** ⭐⭐
- **难度**：1100
- **知识点**：滑动窗口（已提到）

#### 21. **474B - Worms** ⭐⭐
- **难度**：1200
- **知识点**：二分（已提到）

---

## 🎯 综合应用（推荐重点练习）

### 需要复杂struct的题目

#### 22. **500B - New Year Permutation** ⭐⭐⭐
- **难度**：1600
- **知识点**：连通块、排序（已提到）
- **struct练习**：多属性结构体，需要排序和比较

#### 23. **489B - BerSU Ball** ⭐⭐
- **难度**：1200
- **知识点**：排序、匹配（已提到）
- **struct练习**：需要重载运算符

#### 24. **432A - Choosing Teams** ⭐⭐
- **难度**：1100
- **知识点**：排序、贪心（已提到）
- **struct练习**：需要自定义排序

#### 25. **158B - Taxi** ⭐⭐
- **难度**：1100
- **知识点**：贪心、模拟（已提到）
- **struct练习**：多状态管理

---

## 💎 重点推荐（Top 10 - 适合struct练习）

### 入门级（800-1100）

1. **158A - Next Round** ⭐⭐⭐
   - 简单struct，包含分数和排名
   
2. **231A - Team** ⭐⭐⭐
   - 多属性struct，三个人的观点
   
3. **432A - Choosing Teams** ⭐⭐⭐⭐
   - **重点推荐**：需要重载运算符排序
   
4. **489B - BerSU Ball** ⭐⭐⭐⭐
   - **重点推荐**：排序+匹配，struct应用经典

### 进阶级（1100-1400）

5. **158B - Taxi** ⭐⭐⭐
   - 多状态struct，贪心应用
   
6. **500B - New Year Permutation** ⭐⭐⭐⭐
   - **重点推荐**：多属性struct，排序+连通块
   
7. **1B - Spreadsheet** ⭐⭐⭐
   - 坐标struct，进制转换

### 提高级（1400+）

8. **158C - Cd and pwd commands** ⭐⭐⭐
   - 树形struct，路径管理
   
9. **217A - Ice Skating** ⭐⭐⭐
   - 坐标struct，DFS应用

---

## 📝 struct使用技巧

### 1. 基础struct定义
```cpp
struct Student {
    int id;
    string name;
    int score;
};
```

### 2. 重载比较运算符（用于排序）
```cpp
struct Student {
    int id;
    int score;
    
    // 方法1：重载 < 运算符
    bool operator<(const Student& other) const {
        if (score != other.score) {
            return score > other.score;  // 按分数降序
        }
        return id < other.id;  // 分数相同按id升序
    }
};

// 使用
vector<Student> students;
sort(students.begin(), students.end());
```

### 3. 自定义排序函数
```cpp
struct Student {
    int id;
    int score;
};

bool cmp(const Student& a, const Student& b) {
    if (a.score != b.score) {
        return a.score > b.score;
    }
    return a.id < b.id;
}

// 使用
sort(students.begin(), students.end(), cmp);
```

### 4. 多属性struct
```cpp
struct Participant {
    int id;
    int score;
    int rank;
    bool passed;
    
    // 构造函数
    Participant(int i, int s) : id(i), score(s), rank(0), passed(false) {}
};
```

### 5. 坐标struct
```cpp
struct Point {
    int x, y;
    
    // 计算距离
    double distance(const Point& other) const {
        int dx = x - other.x;
        int dy = y - other.y;
        return sqrt(dx*dx + dy*dy);
    }
    
    // 重载 == 运算符
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};
```

### 6. 带状态的struct
```cpp
struct Group {
    int size;
    bool assigned;
    int taxi_id;
    
    Group(int s) : size(s), assigned(false), taxi_id(-1) {}
};
```

---

## 🎯 推荐刷题顺序

### 第1周：基础struct
1. ✅ **158A - Next Round** - 简单struct
2. ✅ **231A - Team** - 多属性struct
3. ✅ **432A - Choosing Teams** - 重载运算符

### 第2周：排序和比较
4. ✅ **489B - BerSU Ball** - 排序+匹配
5. ✅ **158B - Taxi** - 多状态struct
6. ✅ **492B - Vanya and Lanterns** - 坐标struct

### 第3周：复杂应用
7. ✅ **500B - New Year Permutation** - 多属性+排序
8. ✅ **217A - Ice Skating** - 坐标+DFS
9. ✅ **1B - Spreadsheet** - 坐标转换

### 第4周：综合练习
10. ✅ **158C - Cd and pwd commands** - 树形struct
11. ✅ 其他进阶题目

---

## 📚 struct最佳实践

### 1. 何时使用struct？
- ✅ 需要存储多个相关属性
- ✅ 需要自定义排序规则
- ✅ 需要封装相关操作
- ✅ 提高代码可读性

### 2. struct vs class
- **struct**：默认public，适合简单数据结构
- **class**：默认private，适合复杂对象

### 3. 常用操作
```cpp
// 定义
struct Student {
    int id, score;
    bool operator<(const Student& other) const {
        return score > other.score;
    }
};

// 使用
vector<Student> students;
students.push_back({1, 90});
students.push_back({2, 85});
sort(students.begin(), students.end());
```

---

## ✅ 学习检查清单

### 基础阶段
- [ ] 理解struct基本语法
- [ ] 能够定义简单struct
- [ ] 能够使用struct存储数据

### 进阶阶段
- [ ] 能够重载运算符
- [ ] 能够自定义排序
- [ ] 能够使用多属性struct

### 提高阶段
- [ ] 能够设计复杂struct
- [ ] 能够结合算法使用struct
- [ ] 能够优化struct性能

---

## 🔗 相关资源

- **Codeforces模拟题标签**：https://codeforces.com/problemset?tags=implementation
- **struct教程**：C++结构体基础
- **运算符重载**：C++ operator overloading

---

**建议刷题顺序**：158A → 231A → 432A → 489B → 500B

**重点练习struct的题目**：432A、489B、500B、217A

**祝刷题愉快！** 🎉











