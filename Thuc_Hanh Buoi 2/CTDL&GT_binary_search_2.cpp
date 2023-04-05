// Nguon : https://freetuts.net/thuat-toan-tim-kiem-nhi-phan-2634.html
#include <iostream>
using namespace std;

//Hàm tìm kiem nhi phân
int binarySearch(int arr[], int left, int right, int x) {
    int middle;
 
    while(left <= right) {
        middle = (left + right) / 2;
 
        if (arr[middle] == x)
            return middle;

        if (x > arr[middle])
            left = middle + 1;
        else

            right = middle - 1;
    }
 
    return -1;
}
//Vi Du tim 1 mang gom 15 20 25 30 31 44 66
int main() {
    int arr[] = {15, 20, 25, 30, 31, 44, 66};
 
    //Lay ra do dai cua mang
    int n = sizeof(arr) / sizeof(arr[0]);
    //Phan tu can tim
    int x = 25;
     
    // n -1 là vi tri cuoi cung trong mang
    int result = binarySearch(arr, 0, n-1, x);
 
    cout << result;
}

