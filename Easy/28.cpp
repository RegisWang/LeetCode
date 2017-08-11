int strStr(string haystack, string needle)
{
    int result = 0;
    uint hay_size = haystack.size();
    uint nee_size = needle.size();

    if (!nee_size)
    {
        return result;
    }
    result = -1;
    if (hay_size < nee_size)
    {
        return result;
    }
    bool found = false;
    for(uint i = 0; i <= hay_size-nee_size; ++i)
    {
        uint last_common = 0;
        for (uint j = 0; j < nee_size; ++j)
        {
            if (haystack[i+j] != needle[j])
            {
                found = false;
                break;
            }
            found = true;
        }
        if (found)
        {
            result = i;
            break;
        }
    }
    return result;
}
