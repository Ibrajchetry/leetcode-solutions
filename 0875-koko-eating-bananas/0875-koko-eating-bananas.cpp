class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int end=0,mid,ans;
        long long start=0;

        for(int i=0 ; i < piles.size();i++){
            start +=piles[i];
            end=max(end,piles[i]); // end will be max value
        }
        start/=h; // to find start will be sum of array divide by h 
        if(!start){
            start=1;
        }
        while(start <= end){
            mid = start + (end - start)/2;
            long long total_time=0;
            for(int i=0 ; i < piles.size();i++){
                if(mid != 0){
                    total_time+=piles[i]/mid;
                }
                
                if(piles[i]%mid){
                    total_time++;   // if element is odd
                }
            }

            if(total_time <= h){  //
                ans=mid;
                end= mid-1;
            }
            if(total_time > h){
                start = mid +1;
            }
        }
        return ans ;
    }
};