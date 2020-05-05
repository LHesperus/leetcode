/*
 * @lc app=leetcode.cn id=380 lang=cpp
 *
 * [380] 常数时间插入、删除和获取随机元素
 */

// @lc code=start
class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() {

    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(map.count(val))
        {
            return false;
        }else
        {

            map.insert(make_pair(val,vec.size()));
            vec.emplace_back(val);

            return true;
        }
        
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(map.count(val))
        {
            vec[map[val]]=vec.back();
            map[vec.back()]=map[val];
            vec.pop_back();
            map.erase(val);
            return true;
        }else
        {
            return false;
        }
        
    }
    
    /** Get a random element from the set. */
    int getRandom() {

        return vec[rand()%vec.size()];
    }
private:
  //  unordered_set<int>set;
    unordered_map<int,int>map;
    vector<int> vec;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
// @lc code=end

