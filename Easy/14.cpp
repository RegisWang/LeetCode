string longestCommonPrefix(vector<string>& strs)
{
    if (strs.size() == 0)
    {
        return "";
    }
    vector<string> sort_strs = strs;
    sort(sort_strs.begin(),sort_strs.end());
    string shortest = sort_strs[0];
    string result = "";
    bool find = false;
    int start = 0;
    int end = shortest.length();
    int mid = (shortest.length()+1)/2;//fit the one letter situation
    //use binary search
    while (start <= end)
    {
        find = true;
        for (string s : sort_strs)
        {
            if (s.compare(0,mid,shortest,0,mid))//s.compare return non-zero when they are different 
            {
                end = mid - 1;
                find = false;
                break;
            }
        }
        if (find)
        {
            result = shortest.substr(0,mid);
            start = mid +1;
        }
        mid = start + (end - start) / 2;
    }
    return result;
}
