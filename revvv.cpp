#include<iostream>
using namespace std;
void revofarrr(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
       
    }
}

int main()
{
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    revofarrr(arr,size);
       for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}