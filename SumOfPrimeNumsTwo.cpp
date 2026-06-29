
#include <iostream>


bool isPrime(int num, int i = 3)

{
    if (i * i > num) return true;
    if (num % i == 0) return false;

    else
        return isPrime(num, i + 2);
}


void checkPrimeSum(int num) {
   
    if (num > 2 && isPrime(num - 2)) {
        std::cout << "Yes, the number can be expressed as: " << num - 2 << " + 2 = " << num << "\n";
    }
    else {
        std::cout << "No, this prime number cannot be expressed as sum of two primes\n";
    }
}

int main() {
    int numToCheck;
    std::cout << "Please enter a prime number: ";
    std::cin >> numToCheck;

    checkPrimeSum(numToCheck);

    return 0;
}

