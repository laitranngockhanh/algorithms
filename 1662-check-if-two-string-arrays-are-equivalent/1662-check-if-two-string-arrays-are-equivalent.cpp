class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string new_s1 = "", new_s2 = "";
    for (int i = 0; i < word1.size();i++)
    {
        new_s1 += word1[i];
    }
    for(int i = 0; i < word2.size();i++)
    {
        new_s2 += word2[i];
    }
    if(new_s1 == new_s2)
    {
        return true;
    }
    else
        return false;
    }
};