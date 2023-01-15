class Solution {
public:
    int countDifferentSubsequenceGCDs(vector<int>& nums) {
        int maxVal = 0;
        int ans = 0;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
        {
            maxVal = max(maxVal, (*it));
        }
        vector<bool> occured(maxVal + 2, false);
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
        {
            occured[(*it)] = true;
        }
        for (int i = 1; i <= maxVal; i++)
        {
            int gcdVal = 0;
            for (int k = i; k <= maxVal; k = k + i) //最简单的遍历方式
            {
                if (occured[k])
                {
                    if (gcdVal == 0)
                    {
                        gcdVal = k;
                    }
                    else
                    {
                        gcdVal = __gcd(gcdVal, k);
                    }
                }
            }
            ans += (i == gcdVal);
        }
        return ans;
    }
    //O(n + maxVal log(maxVal))
};