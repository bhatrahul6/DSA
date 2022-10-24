#include<iostream>
using namespace std;
char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }

bool palin(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(lowcase ( a[s])!=lowcase(a[e])){
            return 0;
        }
        
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void revofstr(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int lengthofit(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main()
{
    char name[15];
    cout<<"Enter your name"<<endl;
    cin>>name;
    int len=lengthofit(name);
    cout<<"Length of the string is "<<len<<endl;
    revofstr(name,len);

    cout<<"Reverse of the string is "<<name<<endl;

    return 0;
}