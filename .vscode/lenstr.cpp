#include<iostream>
using namespace std;
int gettinglen(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main()
{
    char name[11];
    cout<<"Enter your name"<<endl;

    cin>>name;
    cout<<"Lenth of your name is "<<gettinglen(name)<<endl;
    return 0;
}