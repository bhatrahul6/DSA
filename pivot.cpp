#include<iostream>
using namespace std;

int getpivot(int arr[], int n){

    int s=0;
    int e=n-1;
    int mid = s+ (e-s)/2;
    while(s<e){

       if(arr[mid] >= arr[0])
        {
       s= mid+1;
       }
       else{
        e=mid;

       }
       mid = s+ (e-s)/2;
    }
    return s;
    
}
int main(){

int arr[4]={ 5 ,0,6};

cout<< "The pivot element is "<< getpivot(arr, 4)<< endl;



}
