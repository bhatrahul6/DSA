bool possible(vector<int> &stalls, int k, int mid, int n){
    int cownum = 0;
    int fposition = stalls[0];

    for(int i=0; i<=stalls.size(); i++){
        if(fposition-cownum >= mid)
        {
            cownum++;
            if(cownum == k)
            {
                return true;
            }
            fposition = stalls[i];
        }
    }
    return false;

}

int aggressiveCows(vector<int> &stalls, int k){
int s = 0;
int n = stalls.size();
int e = stalls[n-1];
int ans =-1;
int mid = s +(e-s)/2;

    while(s<=s){
        if(possible(stalls, k, mid , n))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}