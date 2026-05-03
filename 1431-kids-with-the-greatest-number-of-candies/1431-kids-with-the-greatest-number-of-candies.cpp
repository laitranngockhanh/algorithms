class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = candies[0];
        for (int i = 1; i < candies.size();i++)
        {
            if(candies[i]>maxCandies)
            {
                maxCandies = candies[i];
            }
        }
        vector<bool> result;
        for (int i = 0; i < candies.size(); i++) {
            result.push_back(candies[i] + extraCandies >= maxCandies);
        }
        return result;
    }
};