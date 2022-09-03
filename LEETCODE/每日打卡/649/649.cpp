class Solution {
public:
    static bool cmp1 (const vector<int> &a, const vector<int> &b)
    {
        if (a[1] != b[1])
        {
            return a[1] < b[1];
        }
        else
        {
            return a[0] > b[0]; //����dp
        }
    } //�ȽϺ���
    int findLongestChain(vector<vector<int>>& pairs) {
        //��ϰ��̬�滮
        int len = pairs.size();
        int last;
        int ans = 1;
        sort(pairs.begin(), pairs.end(), cmp1);
        last = pairs[0][1];
        for (int i = 1; i <= len - 1; i++)
        {
            if (pairs[i][0] > last)
            {
                last = pairs[i][1];
                ans++;
            }
        }
        return ans;
    }
};
