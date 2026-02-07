# Codeforces 模拟题快速参考（struct练习）

## 🎯 重点推荐（Top 10 - 适合struct练习）

### ⭐ 入门级（800-1100）

| 题号 | 题目 | 难度 | struct应用 | 推荐度 |
|------|------|------|-----------|--------|
| 158A | Next Round | 800 | 多属性struct | ⭐⭐⭐ |
| 231A | Team | 800 | 多属性struct | ⭐⭐⭐ |
| 432A | Choosing Teams | 1100 | **重载运算符** | ⭐⭐⭐⭐⭐ |
| 489B | BerSU Ball | 1200 | **排序+匹配** | ⭐⭐⭐⭐⭐ |

### ⭐⭐ 进阶级（1100-1400）

| 题号 | 题目 | 难度 | struct应用 | 推荐度 |
|------|------|------|-----------|--------|
| 158B | Taxi | 1100 | 多状态struct | ⭐⭐⭐ |
| 492B | Vanya and Lanterns | 1200 | 坐标struct | ⭐⭐⭐ |
| 500B | New Year Permutation | 1600 | **多属性+排序** | ⭐⭐⭐⭐⭐ |
| 1B | Spreadsheet | 1600 | 坐标struct | ⭐⭐⭐ |

### ⭐⭐⭐ 提高级（1400+）

| 题号 | 题目 | 难度 | struct应用 | 推荐度 |
|------|------|------|-----------|--------|
| 217A | Ice Skating | 1200 | 坐标struct | ⭐⭐⭐ |
| 158C | Cd and pwd commands | 1400 | 树形struct | ⭐⭐⭐ |

---

## 📚 按struct应用分类

### 1. 基础多属性struct

```
158A - Next Round (800)
  struct Participant {
      int id, score, rank;
      bool passed;
  };

231A - Team (800)
  struct Problem {
      int petya, vasya, tonya;
  };
```

### 2. 重载运算符（排序）

```
432A - Choosing Teams (1100) ⭐⭐⭐⭐⭐
  struct Student {
      int id, participation;
      bool operator<(const Student& other) const {
          return participation < other.participation;
      }
  };

489B - BerSU Ball (1200) ⭐⭐⭐⭐⭐
  struct Student {
      int skill;
      bool matched;
      bool operator<(const Student& other) const {
          return skill < other.skill;
      }
  };
```

### 3. 多状态struct

```
158B - Taxi (1100)
  struct Group {
      int size;
      bool assigned;
      int taxi_id;
  };
```

### 4. 坐标struct

```
217A - Ice Skating (1200)
  struct Point {
      int x, y;
      bool visited;
      bool operator==(const Point& other) const {
          return x == other.x && y == other.y;
      }
  };

492B - Vanya and Lanterns (1200)
  struct Lantern {
      int position;
      bool operator<(const Lantern& other) const {
          return position < other.position;
      }
  };
```

### 5. 复杂多属性struct

```
500B - New Year Permutation (1600) ⭐⭐⭐⭐⭐
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

## 🚀 推荐刷题顺序

### 第1周：基础struct
1. ✅ **158A - Next Round** - 简单多属性
2. ✅ **231A - Team** - 多属性struct
3. ✅ **432A - Choosing Teams** - **重载运算符**（重点）

### 第2周：排序和匹配
4. ✅ **489B - BerSU Ball** - **排序+匹配**（重点）
5. ✅ **158B - Taxi** - 多状态struct
6. ✅ **492B - Vanya and Lanterns** - 坐标struct

### 第3周：复杂应用
7. ✅ **500B - New Year Permutation** - **多属性+排序**（重点）
8. ✅ **217A - Ice Skating** - 坐标+DFS
9. ✅ **1B - Spreadsheet** - 坐标转换

---

## 📝 struct核心模板

### 模板1：基础struct
```cpp
struct Student {
    int id;
    string name;
    int score;
};
```

### 模板2：重载运算符（排序）
```cpp
struct Student {
    int id;
    int score;
    
    bool operator<(const Student& other) const {
        if (score != other.score) {
            return score > other.score;  // 降序
        }
        return id < other.id;  // 升序
    }
};

// 使用
vector<Student> students;
sort(students.begin(), students.end());
```

### 模板3：多状态struct
```cpp
struct Group {
    int size;
    bool assigned;
    int taxi_id;
    
    Group(int s) : size(s), assigned(false), taxi_id(-1) {}
};
```

### 模板4：坐标struct
```cpp
struct Point {
    int x, y;
    bool visited;
    
    Point(int x, int y) : x(x), y(y), visited(false) {}
    
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};
```

### 模板5：复杂多属性struct
```cpp
struct Element {
    int value;
    int position;
    int component_id;
    
    bool operator<(const Element& other) const {
        return value < other.value;
    }
    
    Element(int v, int p) : value(v), position(p), component_id(-1) {}
};
```

---

## 💡 struct使用技巧

### 1. 何时使用struct？
- ✅ 需要存储多个相关属性
- ✅ 需要自定义排序规则
- ✅ 需要封装相关操作
- ✅ 提高代码可读性

### 2. 重载运算符的常见模式

```cpp
// 单属性排序
bool operator<(const Student& other) const {
    return score < other.score;
}

// 多属性排序
bool operator<(const Student& other) const {
    if (score != other.score) {
        return score > other.score;  // 先按分数降序
    }
    return id < other.id;  // 再按id升序
}

// 相等判断
bool operator==(const Point& other) const {
    return x == other.x && y == other.y;
}
```

### 3. 构造函数
```cpp
struct Student {
    int id;
    int score;
    bool passed;
    
    // 默认构造函数
    Student() : id(0), score(0), passed(false) {}
    
    // 带参数构造函数
    Student(int i, int s) : id(i), score(s), passed(false) {}
};
```

### 4. 使用示例
```cpp
// 创建对象
Student s1(1, 90);
Student s2{2, 85};  // C++11初始化列表

// 添加到vector
vector<Student> students;
students.push_back(Student(1, 90));
students.push_back({2, 85});

// 排序
sort(students.begin(), students.end());
```

---

## 🎯 重点题目详解

### 1. 432A - Choosing Teams ⭐⭐⭐⭐⭐
**struct应用**：重载运算符排序
```cpp
struct Student {
    int id;
    int participation;
    bool operator<(const Student& other) const {
        return participation < other.participation;
    }
};
```

### 2. 489B - BerSU Ball ⭐⭐⭐⭐⭐
**struct应用**：排序+匹配
```cpp
struct Student {
    int skill;
    bool matched;
    bool operator<(const Student& other) const {
        return skill < other.skill;
    }
};
```

### 3. 500B - New Year Permutation ⭐⭐⭐⭐⭐
**struct应用**：多属性+排序+连通块
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

## ✅ 学习检查清单

### 基础阶段
- [ ] 能够定义简单struct
- [ ] 能够使用struct存储数据
- [ ] 理解struct的基本语法

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

- **Codeforces模拟题**：https://codeforces.com/problemset?tags=implementation
- **struct示例代码**：查看 `模拟题_struct示例.cpp`

---

**快速开始**：建议从 **158A → 231A → 432A → 489B → 500B** 这个顺序开始！

**重点练习struct的题目**：
1. ⭐⭐⭐⭐⭐ **432A - Choosing Teams** - 重载运算符
2. ⭐⭐⭐⭐⭐ **489B - BerSU Ball** - 排序+匹配
3. ⭐⭐⭐⭐⭐ **500B - New Year Permutation** - 多属性+排序











