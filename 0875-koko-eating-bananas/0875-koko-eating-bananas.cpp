class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 0;
        for (int bananas : piles) {
            right = max(right, bananas);
        }
        int result = right;  
        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long hours = 0;
            for (int bananas : piles) {
                hours += (bananas + mid - 1) / mid; 
            }
            if (hours <= h) {
                result = mid;       
                right = mid - 1;
            } else {
                left = mid + 1;  
            }
        }
        return result;
    }
};