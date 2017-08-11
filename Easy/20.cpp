bool isValid(string s)
{
    map<char,char> matching = {{')','('},
                                 {'}','{'},
                                 {']','['}};
    stack<char> parentheses;
    for(char c : s)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            parentheses.push(c);
        }
        else
        {
            if (parentheses.empty() || parentheses.top() != matching[c])
            {
                return false;
            }
            else
            {
                parentheses.pop();
            }
        }
    }

    return parentheses.empty();
}
