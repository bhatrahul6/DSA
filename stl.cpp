#include<iostream>
using namespace std;
int main() {
	
	char str[] = "abcbacabcbac";
	
	char target[] = "bac";
	int ss = sizeof(str)/sizeof(str[0]);
	int ts = sizeof(target)/sizeof(target[0]);
	
	int pos = -1;
	int i;
	for(i=0;i<ss;i++){
		int n=0;
		
		while(n<ts){
			if(str[i+n] != target[n]) break;
			n++;
		}
		if(n==ts) pos = i;
	}	
	
	printf("%d",pos);
	return 0;
}