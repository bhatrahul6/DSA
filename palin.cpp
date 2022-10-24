#include<iostream>
using namespace std;
void toLowerCase(string &s)
{	

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        

        if (ch <= 'Z' && ch >= 'A')
        {
            ch = ch - ('A' - 'a');
            s[i] = ch;
        }
    }
}

bool checkPalindrome(string s)
{	
    toLowerCase(s);

    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (isalnum(s[i]) == 0)
        {
            ++i;
        }
        else if (isalnum(s[j]) == 0)
        {
            --j;
        }
        else if (s[i] == s[j])
        {
            ++i, --j;
        }
        else
        {
            return false;
        }
    }
    
    return true;
}

int main()
{ 
    char name[15];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"your name is plaindrome"<<checkPalindrome(name)<<endl;
    return 0;
}