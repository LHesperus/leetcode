#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int flag=0;
        int n=0;
        int x=0;
        int y=0;
        while(!flag)
        {
        sort(stones.begin(),stones.end());
        n=stones.size();
        if(n>=2)
        {
            x=stones[n-2];
            y=stones[n-1];
        }
        else
        {
            break;
        }
        if(x==y)
        {
            stones.pop_back();
            stones.pop_back();
        }
        else
        {
            stones[n-2]=y-x;
            stones.pop_back();
            cout<<"---"<<endl;
        }
        }
        if(stones.size()==1)
        {
            return stones[0];
        }
        else
        {
            return 0;
        }
        

    }
};

int main()
{
    vector<int> stones={2,7,4,1,8,1};
    Solution sln1;
    cout<<sln1.lastStoneWeight(stones)<<endl;
    cout<<"hello"<<endl;
}