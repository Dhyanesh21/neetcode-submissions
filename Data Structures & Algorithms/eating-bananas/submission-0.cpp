class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        while(low <= high){
            int mid = low + (high - low)/2;
            if(hoursNeeded(piles,mid) <= h){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }

    long long hoursNeeded(vector<int> &piles,int k){
        long long hours = 0;
        for(int x:piles){
            hours += (x+k-1)/k;
        }
        return hours;
    }
};
