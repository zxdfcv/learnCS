//·¨Ò» 
class Solution {
public:
    int reinitializePermutation(int n) {
        vector<int> perm;
        vector<int> perm1(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            perm.emplace_back(i);
        }
        while (true)
        {
            int flag = 1;
            for (int i = 0; i < n; i++)
            {
                perm1[i] = (i % 2 == 0) ? perm[i / 2] : perm[n / 2 + (i - 1) / 2];
                if (i != perm1[i])
                {
                    flag = 0;
                }
            }
            for (int i = 0; i < n; i++)
            {
                perm[i] = perm1[i];
            }
            cnt++;
            if (flag)
            {
                return cnt;
            }
        }
        return -1;
    }//»Ö¸´³õÖµ
};
