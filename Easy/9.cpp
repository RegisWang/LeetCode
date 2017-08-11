bool isPalindrome(int x) 
{
    if (x < 0)
    {
        return false;
    }
    long divisor[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
    int digit_num = x ? log10(std::abs(x))+1:1;

    int digits[10];

    int remainder = x;

    for(int i = 0; i < digit_num; ++i)
    {
        digits[i] = remainder / divisor[digit_num-i-1];
        remainder = remainder % divisor[digit_num-i-1];
    }

    for(int i = 0; i < digit_num/2; ++i)
    {
        if (digits[i] != digits[digit_num-i-1])
        {
            return false;
        }
    }

    return true;

}
