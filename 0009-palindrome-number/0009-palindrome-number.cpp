class Solution {
public:
    bool isPalindrome(int x) {
        string rev = to_string(x);
        int l = 0;
        int r = rev.size()-1;
        while(l<r)
        {
            if(rev[l]!= rev[r])
            {
                return false;
            }
            l++;
            r--;

        }
        return true;
    }
};