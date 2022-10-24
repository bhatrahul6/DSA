#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){

    vector<int> v;
    //another way of intializing vector
    vector<int> a(4,1); // here 1 will be intialized otherwise 0 is default
    for(int i:a){
        cout<<i<<" ";
    }
    //to check the size & capacity
    cout<<"size is "<<v.capacity()<<endl;
    //righnow size is zero so we push some element in it
    v.push_back(1);
    cout<<"Now the size is "<<v.capacity()<<endl;

       v.push_back(2);
    cout<<"Now the size is "<<v.capacity()<<endl;

       v.push_back(3);
    cout<<"Now the size is "<<v.capacity()<<endl;

     //to delete one element
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }

    v.clear();
    cout<<"Now its size is "<<v.size()<<endl;


}