//
// Created by Peng Cai on 2020/8/24.
//

#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

/**
 * 给定一个整型数组和一个数字s,找到数组中最短的连续子数组，
 * 使得子数组的和sum >= s,返回这个最短的连续子数组的长度值
 *
 * - 如 给定数组[2,3,1,2,4,3]  s = 7
 * - 答案：[4,3],返回 2
 *
 * ?  子数组---连续
 * ？ 没有解---0
 * ？ 多个解---顺序
 */

// 209. Minimum Size Subarray Sum
// https://leetcode.com/problems/minimum-size-subarray-sum/description/
//
// 暴力解法
// 时间复杂度: O(n^3)
// 空间复杂度: O(1)
class Solution {
public:
    int minSubArrayLen(int s, vector<int> &nums) {
        assert(s > 0);
        int res = nums.size() + 1;
        for (int l = 0; l < nums.size(); l++)
            for (int r = l; r < nums.size(); r++) {
                int sum = 0;
                for (int i = l; i <= r; i++)
                    sum += nums[i];
                if (sum >= s)
                    res = min(res, r - l + 1);
            }

        if (res == nums.size() + 1)
            return 0;

        return res;
    }
};

int main() {
    int nums[] = {2, 3, 1, 2, 4, 3};
    vector<int> vec(nums, nums + sizeof(nums) / sizeof(int));
    int s = 7;
    cout << Solution().minSubArrayLen(s, vec) << endl;
    return 0;
}