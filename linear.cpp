#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start=0;
    int end= size-1;
    int mid=(start=end)/2;

    while(start<=end){

        if (arr[mid] == key){
            return mid;
        }

        if (key> arr[mid]){
            start= mid+1;
        }
        else{
            end=mid-1;
        }
    mid= (start+end)/2;

    }
    return -1;

}


int main(){


int even[4]={6,77,54,98};
int odd[5]={8,44,25,62,75};
int key;
cout<< "Enter the key";
cin>> key;
 int index=binarysearch(even, 4, key);
 cout<< "index of 77 is "<< index <<endl;
return 0;



}
