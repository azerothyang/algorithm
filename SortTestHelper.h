//
// Created by Administrator on 2017/11/9.
//

#ifndef ALGORITHM_SORTTESTHELPER_H
#define ALGORITHM_SORTTESTHELPER_H

#endif //ALGORITHM_SORTTESTHELPER_H

#include <cstdlib>
#include <iostream>
#include <cassert>
#include <ctime>

namespace SortTestHelper{
    /**
     *
     * @param n 数组长度
     * @param rangeL 左值
     * @param rangeR 右值
     * @return
     */
    int* generateRandomArray(int n, int rangeL, int rangeR){
        assert(rangeL <= rangeR);
        std::srand(std::time(0)); // 以当前时间为随机数生成器的种子
        int *arr = new int[n];
        for (int i = 0; i < n; ++i) {
            arr[i] = std::rand() % (rangeR-rangeL+1) + rangeL;             //生成n个 [rangeL, rangeR] 之间的随机数；
        }
        return arr;
    }
}