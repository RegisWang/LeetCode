int romanToInt(string s)
{
    map<char,int> R2I = {{'I',1},
                         {'V',5},
                         {'X',10},
                         {'L',50},
                         {'C',100},
                         {'D',500},
                         {'M',1000}};
    int result = R2I[s[s.length()-1]];
    for (int i = 0; i < s.length()-1;++i)
    {
        int temp = R2I[s[i]];
        if (temp < R2I[s[i+1]])
        {
            result -= temp;
        }
        else
        {
            result += temp;
        }
    }
    
    return result;
}
