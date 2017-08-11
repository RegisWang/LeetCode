vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> result;
    unordered_map<int,uint> dict;
    for (uint i = 0; i < nums.size(); ++i)
    {
        if (dict.find(nums[i]) != dict.end())
        {
            result.push_back(dict[nums[i]]);
            result.push_back(i);
            return result;
        }
        else
        {
            dict[target-nums[i]] = i;
        }
    } 
}
