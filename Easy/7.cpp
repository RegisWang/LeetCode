int reverse(int x)
{
    long divisor[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
    int digit_num = x ? log10(std::abs(x))+1:1;
    if (digit_num < 0)
    {
        std::cout << x << std::endl;
    }
    int digits[10];

    int remainder = x;

    for(int i = 0; i < digit_num; ++i)
    {
        digits[i] = remainder / divisor[digit_num-i-1];
        remainder = remainder % divisor[digit_num-i-1];
    }

    long result = 0;

    for(int i = 0; i < digit_num; ++i)
    {
        result = result + digits[digit_num-i-1] * divisor[digit_num-i-1];//pow(10, digit_num-i-1);
    }

    if (result != (int) result)
    {
        return 0;
    }
    else
    {
        return (int)result;
    }
}
