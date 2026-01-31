// Program that will find all prime numbers from 3 - 100

#include <stdio.h>

bool isPrime(int n) {
    if (n == 0 || n == 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(void) {

    int primes[100] = {2, 3};

    int arrPos =  2;
    for (int i = 5; i < 100; i++) {
        if (isPrime(i)) {
            primes[arrPos] = i;
            arrPos++;
        }
    }

    int arrLength = sizeof(primes) / sizeof(primes[0]);
    printf("%d", primes[0]);
    for (int arrIndex = 1; arrIndex < arrLength; arrIndex++) {
        printf(", %d", primes[arrIndex]);
    }
    return 0;
}
