//
// Created by Peng Cai on 2020/8/29.
//
#include <iostream>
#include <vector>

using namespace std;


/**
定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

示例:

输入: [0,1,0,3,12]  [0,1,0,3,12]
输出: [1,3,12,0,0]
说明:

必须在原数组上操作，不能拷贝额外的数组。
尽量减少操作次数。

链接：https://leetcode-cn.com/problems/move-zeroes
 */

// 时间复杂度: O(n)
// 空间复杂度: O(n)

class Solution {
public:
    void move_zeros(vector<int> &nums) {
        vector<int> newElements;
        // 将vec中所有非0元素放入nonZeroElements中
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]) {
                newElements.push_back(nums[i]);
            }
        }

        // 将nonZeroElements中的所有元素依次放入到nums开始的位置
        for (int i = 0; i < newElements.size(); i++) {
            nums[i] = newElements[i];
        }

        // 将nums剩余的位置放置为0
        for (int i = newElements.size(); i < nums.size(); i++)
            nums[i] = 0;

    }
};

int main() {

    int arr[] = {0, 1, 0, 3, 12};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
    Solution().move_zeros(vec);
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    return 0;
}