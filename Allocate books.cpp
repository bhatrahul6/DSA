#include<vector>
using namespace std;

bool ispossible(int n, int m, vector<int> time,vector<int> arr,int mid){
    int studentcount = 1;
    int pagesum=0;
    
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum +=arr[i];
        }
     else{
         studentcount ++;
         if(studentcount > m) || arr[i] > mid{
             return 0;
         }
         pagecount=arr[i];
     }
    }
    return true;
}
long long allocatebooks(int n, int m,vector<int> arr, vector<int> time) 
{	
	int s = 0;
    int sum = 0;
    for (int i=0;i<n;i++){
        sum +=arr[i];
    }
    int e =sum;
    int ans=-1;
    int mid = s+(e-s)/2;
    
    while(s<e){
        if(ispossible(arr,n,m,mid)){
          int ans=mid;
            e=mid-1;
        }
    else{
        s=mid+1;
        }
       mid = s+(e-s)/2;
    }
     return ans;
}