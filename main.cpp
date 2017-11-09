#include <iostream>
#include "Student.h"
#include "SortTestHelper.h"
using namespace std;
/**
 * 选择排序
 * @param arr 数组
 * @param n   数组长度
 */
template<typename T>
void selectionSort(T arr[], int n){
    for (int i = 0; i < n; ++i) {
       //寻找i到n最小的数组值的索引，并且
        int minIndex = i;
        int tmp = 0;
        for (int j = i+1; j < n; ++j) {
            if(arr[i] > arr[j]){
                minIndex = j;
                //将当前小值和大值交换位置
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n = 10000;
    int arr[5] = {3,1,7,2,5};
    selectionSort(arr, 5);
    float floatArr[5] = {3.1,1.5,2.5,2.2,3};
    selectionSort(floatArr, 5);
    string str[4] = {"B", "C", "A", "D"};
    selectionSort(str, 4);
    Student stu[4] = {{"D", 90}, {"C", 100}, {"B", 95}, {"A", 95}};
    selectionSort(stu, 4);
    int *newArr = SortTestHelper::generateRandomArray(n, 0, n);
    cout << time(0) << endl;
    selectionSort(newArr, n);
    cout << time(0) << endl;
//    for (int i = 0; i < 10000; ++i) {
//        cout << newArr[i] << endl;
//    }
    return 0;
}