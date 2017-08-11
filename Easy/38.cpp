string countAndSay(int n) {
    vector <string> num2str = {"1", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    string last_term = "1";
    string curr_term = "";
    for (uint i = 2; i <= n; ++i)
    {
        int count = 0;
        char last_char = last_term[0];
        for (uint j = 0; j < last_term.size(); ++j) {
            char c = last_term[j];
            if (c == last_char && j != last_term.size() - 1)
            {
                count = count + 1;
            }
            else
            {
                if (c != last_char)
                {
                    curr_term = curr_term + num2str[count] + last_char;
                    last_char = c;
                    count = 1;
                    if (j ==  last_term.size() - 1)
                    {
                        curr_term = curr_term + num2str[count] + last_char;
                    }
                }
                else
                {
                    if (c == last_char && j == last_term.size() - 1)
                    {
                        count = count + 1;
                        curr_term = curr_term + num2str[count] + last_char;
                    }
                }

            }
        }
        last_term = curr_term;
        curr_term = "";
    }

    return last_term;
}
