#include <iostream>
#include <cmath>
#include <ctime>
#include "MyVector.h"

using namespace std;

int main() {
    for (int i = 10; i < 20; i++) {
        int n = pow(2, i);

        clock_t start_time = clock();

        MyVector<int> vec;
        for (int i = 0; i < n; i++) {
            vec.push_back(i);
        }
        clock_t end_time = clock();
        cout << 2 * n << " operation: \t";
        cout << double(end_time - start_time) / CLOCKS_PER_SEC << " s" << endl;

    }

    return 0;
}