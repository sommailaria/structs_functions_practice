
// Find all the prime numbers between the given range

#include <iostream>

bool checkPrimeNum(int num) {

    if (num <= 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;

    }

    return true;
}

int main()
{
    int rangeStart = 100;
    int rangeEnd = 200;

    std::cout << "Prime numbers in range are :" << std::endl;

    for (int n = rangeStart; n <= rangeEnd; n++ ) {
        if (checkPrimeNum(n)) {
            std::cout << n << '\n';
        }
    }
}
