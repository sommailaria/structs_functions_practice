// Given a prime number N,he task is to check if it is possible to express N as sum of two separate prime numbers


#include <iostream>
#include <cmath>

bool isNumPrime(int num)
{
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i <= std::sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }

    return true;
}

bool checkSum(int primeNum)
{
   
    bool sumResult = isNumPrime(primeNum - 2);

    if (sumResult)
    {
        std::cout << "Yes, the number can be expressed as:  " << primeNum - 2 << " + " << 2 << " = " << primeNum;

        return true;
    } 


    else 
    {
        std::cout << "No, this prime number cannot be expressed as sum of two primes";
        return false;
    }

} 

int main()
{

    int numToCheck;

    std::cout << "Please enter a prime number: " << std::endl;

    std::cin >> numToCheck;
    
    if (isNumPrime(numToCheck))
        checkSum(numToCheck);
    else
        std::cout << numToCheck << " is not a Prime number!";
   
}
