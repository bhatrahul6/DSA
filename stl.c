#include<bits/stdc++.h>

using namespace std;

int n, i;

void pattern(int n){
	
	if(n==0){
		i--;
		cout << endl;
		n=i;
	} 
	
	if(i==0){
		return;
	}
	
	cout << n << " ";
	pattern(n-1);
	
	
}




int main(){
	n = 4;
	i = n;
	
	pattern(n);

	
	return 0;
	
}