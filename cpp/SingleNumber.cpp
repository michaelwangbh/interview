#include <vector>
using namespace std;

class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int ret = nums[0];
            for (int i = 1; i< nums.size(); i++) {
                ret = nums[i] ^ ret;
            }
            return ret;
        }
};