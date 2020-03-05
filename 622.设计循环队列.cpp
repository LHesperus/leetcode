/*
 * @lc app=leetcode.cn id=622 lang=cpp
 *
 * [622] 设计循环队列
 */

// @lc code=start
class MyCircularQueue {
private:
    vector<int> data;  
    int p_head;
    int p_tail;
    int data_num;
    
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        data.resize(k);
        p_head=-1;
        p_tail=-1;
        data_num=0;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        int k=data.size();
        if(data_num==0)
        {
            p_head=0;
            p_tail=0;
            data[p_tail]=value;
            data_num++;
            return true;
        }
        if(data_num<k)
        {
            data_num++;
            if(p_tail==k-1)
            {
                p_tail=0;
            }else
            {
                p_tail++;
            }
            data[p_tail]=value;
            return true;
        }
        else
        {
            return false;
        }
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        int k=data.size();
        if(!isEmpty())
        {
            if(p_head==k-1)
            {
                p_head=0;
            }else
            {
                p_head++;
            }
            data_num--;
            if(isEmpty())
            {
                p_head=-1;
                p_tail=-1;
            }
            return true;
        }
        else
        {

            return false;
        }
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if(!isEmpty())
        {
            return data[p_head];
        }else
        {
            return -1;
        }
        
        
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if(!isEmpty())
        {
            return data[p_tail];
        }else
        {
            return -1;
        }
        
        
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        if(data_num==0)
        {
            return true;
        }else
        {
            return false;
        }

    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        int k=data.size();
        if(data_num==k)
        {
            return true;
        }else
        {
            return false;
        }
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
// @lc code=end

