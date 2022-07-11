#include<iostream>
using namespace std;
long long int squareroot(int N){
    int s=0;
    int e=N;
     long long int ans=-1;
    long long int mid = s+(e-s)/2;

    while(s<=e){
        long long  int square = mid*mid;
        if(square == N)
         return mid;

       if(square<N){
            ans=mid;
            s=mid+1;
       }

        else{
           e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int sqrtN(long long int N)
{
  return squareroot(N);
}
