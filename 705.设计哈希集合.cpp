/*
 * @lc app=leetcode.cn id=705 lang=cpp
 *
 * [705] 设计哈希集合
 */

// @lc code=start
class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        inHashset.resize(10001);
        hashset.resize(10001);
    }
    
    void add(int key) {
        if(!contains(key))
        {
            hashset[key%10000].push_back(key);
            inHashset[key%10000]=true;
        }
    }
    
    void remove(int key) {
        if(contains(key))
        {
            if(hashset[key%10000].size()==1) 
            {
                hashset[key%10000].clear();
                inHashset[key%10000]=false;
                return;
            }
            int k=0;
            for(int i=0;i<hashset[key%10000].size();i++)
                if(hashset[key%10000][i]!=key)
                    hashset[key%10000][k++]=hashset[key % 10000][i];
            hashset[key%10000].pop_back();
        }
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        if(inHashset[key%10000])
        {
            for(int &v:hashset[key%10000])
                if(v==key)
                    return true;
            return false;
        }
        return false;
    }
private:
    vector<vector<int>> hashset;
    vector<bool> inHashset;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
// @lc code=end

