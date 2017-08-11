int removeElement(vector<int>& nums, int val)
{
    uint size = nums.size();
    if (size == 0)
    {
        return 0;
    }
    uint tail = 0;
    for (uint i = 0; i < size && i != size - tail;)
    {
        if(nums[i] == val)
        {
            tail = tail + 1;
            nums[i] = nums[size-tail];
        }
        else
        {
            i = i + 1;
        }
    }
    return size - tail;
}
