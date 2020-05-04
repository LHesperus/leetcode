/*
 * @lc app=leetcode.cn id=706 lang=cpp
 *
 * [706] 设计哈希映射
 */

// @lc code=start
#define Base 2069
class MyHashMap {
public:
    /** Initialize your data structure here. */
    MyHashMap() {
        inMap.resize(Base);
        keyMap.resize(Base);
        valMap.resize(Base);
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        int k=getk(key);
        if(k==-1)
        {
            keyMap[key%Base].push_back(key);
            valMap[key%Base].push_back(value);
            inMap[key%Base]=true;
        }else
        {
            keyMap[key%Base][k]=key;
            valMap[key%Base][k]=value;
        }
        
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        if(inMap[key%Base])
        {
            for(int k=0;k<keyMap[key%Base].size();k++)
                if(keyMap[key%Base][k]==key)
                    return valMap[key%Base][k];
        }
        return -1;
    }
    int getk(int key)
    {
        if(inMap[key%Base])
        {
            for(int k=0;k<keyMap[key%Base].size();k++)
                if(keyMap[key%Base][k]==key)
                    return k;
        }
        return -1;       
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int k=getk(key);
        if(k!=-1)
        {
            keyMap[key%Base].erase(keyMap[key%Base].begin()+k,keyMap[key%Base].begin()+k+1);
            valMap[key%Base].erase(valMap[key%Base].begin()+k,valMap[key%Base].begin()+k+1);
            if(!keyMap[key%Base].size())
                inMap[key%Base]=false;
        }
    }
private:
    vector<bool> inMap;
    vector<vector<int>> keyMap;
    vector<vector<int>> valMap;
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
// @lc code=end

