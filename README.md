# LeetCode
|Label|[stack](https://github.com/LHesperus/leetcode/tree/master/stack)|
|---| ----- |

| # | Title | Solution | Difficulty | Label |
|---| ----- | -------- | ---------- | ----- |
| 20|[有效的括号](https://github.com/LHesperus/leetcode/blob/master/stack/%E6%9C%89%E6%95%88%E7%9A%84%E6%8B%AC%E5%8F%B7/main.cpp)|C++|Easy|Stack|
|921|[使括号有效的最少添加](https://github.com/LHesperus/leetcode/blob/master/stack/%E4%BD%BF%E6%8B%AC%E5%8F%B7%E6%9C%89%E6%95%88%E7%9A%84%E6%9C%80%E5%B0%91%E6%B7%BB%E5%8A%A0/main.m)|C++|Medium|Stack|


### 数组类算法

排序，二分法，双指针(首位指针、滑动窗口)。
字符串类的常用函数：

### 查找表类算法
LeetCode 中有很多问题都会用到集合和字典（C++ 中为 set 和 map，Python 中为 set 和 dict）这两种数据结构。
两类：
(1)查找有无 set
(2)查找存在的个数 map

leetcode 第一题用map就很巧妙。

有的题需要考虑根据题意构造特殊的map，巧妙的hash映射可能比直接用unordered_map构造要方便。


### 链表
判断链表中是否有环，可以用hashmap，也可以用快慢指针(快的会追上慢的).
对于边界问题，考虑使用哨兵节点。

### 算法耗时
写的辅助函数不要穿vector<int > a,可能AC不过，传引用。