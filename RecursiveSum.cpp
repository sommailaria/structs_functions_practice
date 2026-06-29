// Natural numbers include all positive integers from 1 to infinity. It does not include zero (0).
// Given a number n, find the sum of the first n natural numbers.

#include <iostream>

int recursiveSum(int num)
{
    
    if (num < 1) return num;

    else
        return num + recursiveSum(num - 1);
}

int main()
{
    int num = 8;
    std::cout << recursiveSum(num);
    
}
