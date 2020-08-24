//
// Created by Peng Cai on 2020/8/24.
//

#include <iostream>
#include <cmath>
#include <ctime>
#include <cassert>

using namespace std;

template<typename T>
int binary_search(T arr[], int n, T target) {
    // 在[l,r] 的范围内寻找target
    int l = 0;
    int r = n - 1;
    while (l <= r) { // 在[l,r] 的范围内寻找target
        int mid = (l + r) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (target > arr[mid]) {
            l = mid + 1; // target 在 [mid +1 ,r]
        } else {
            r = mid - 1; // target 在 [l ,mid -1]
        }
    }
    return -1;
}

int main() {
    return 0;
}