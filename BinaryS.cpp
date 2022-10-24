#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return -1;
}


int main() {

    int even[6] = {5,4,6,8,13,22};
    int odd[5] = {3, 8, 12, 17, 19};

    int evenIndex = binarySearch(even, 6, 6);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 17);

    cout << " Index of 17 is " << oddIndex << endl;


    return 0;
}


