class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size())
        {
            return intersect(nums2, nums1);
        }
        unordered_map<int, int> hash_list;
        vector<int> ans;
        for (auto val : nums1)
        {
            hash_list[val]++;
        }
        for (auto val : nums2)
        {
            if (hash_list.find(val) != hash_list.end())//hash_list.find(val)返回数值迭代器 也可用hash_list.count(val) != 0
            {
                ans.push_back(val);
                hash_list[val]--;
                if (hash_list[val] == 0)
                {
                    hash_list.erase(val);
                }
            }
        }
        return ans;
    }
};
