#include <iostream>
using namespace std;
/**
 * 选择排序
 * @param arr 数组
 * @param n   数组长度
 */
void selectionSort(int arr[], int n){
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
    int arr[5] = {3,1,7,2,5};
    selectionSort(arr, 5);

    return 0;
}