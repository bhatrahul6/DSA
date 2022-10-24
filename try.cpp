#include<iostream>
using namespace std;
class Hero{
    public:
    char name[100];

    int health;
    char level; 
    //constructor
    Hero(){
        cout<<"hello"<<endl;
    }
    //Destructor
    ~Hero(){
        cout<<"here is the destructor"<<endl;
    }
    //parameterized constructor
    Hero(int health){
        this -> health=health;
    }
    //static Keyword
    static int timeTocomplete; 

    //Static Function
    static int something(){
        return timeTocomplete;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    } 
    void sethealth(int h){
        health=h;   
    }
    void setlevel(char l){
        level=l;
    }    
};
int Hero :: timeTocomplete=9;

int main()
{   
    cout<<Hero::something()<<endl;

    //itz static Allocation
    Hero h1;
    h1.sethealth(70);
    h1.setlevel('A');
    cout<<"Health is "<<h1.gethealth()<<endl;
    cout<<"Level is "<<h1.level<<endl;

    //itz dynamic Allocation
    Hero *h2= new Hero;
    delete h2;
    h2 -> setlevel('B');
    h2 -> sethealth(99);
    cout<<"Health is "<<h2 -> health<<endl;
    cout<<"Level is "<<h2 -> level<<endl;
    
    
  

    cout<<"size of hero is"<<sizeof(h1)<<endl;


    return 0;
}