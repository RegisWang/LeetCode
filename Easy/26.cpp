int removeDuplicates(vector<int>& nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    uint result = 0;
    for (uint i=1; i < nums.size(); ++i)
    {
        if (nums[result] != nums[i])
        {
            result = result + 1;
            nums[result] = nums[i];
        }
    }
    return result+1;
}
