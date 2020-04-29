/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        minstk.push_back(x);
    }
    
    void pop() {
        minstk.pop_back();
    }
    
    int top() {
        return minstk.back();
    }
    
    int getMin() {
        int minv;
        minv=minstk[0];
        for(int &i:minstk)
        {
            if(minv>i)
                minv=i;
        }
        return minv;
    }
private:
    vector<int> minstk;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

