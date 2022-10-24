#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
   int  s=0;
    int e=n-1;
    while (s<=e){
        swap (arr[s], arr[e]);
        s++;
        e--;

    }
}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }

}

int main(){
int size;
cin>> size;
    int arr[size];
for(int i=0; i<size; i++){
    cin>>arr[i];
}

reverse(arr,size);


print(arr,size);



return 0;
}