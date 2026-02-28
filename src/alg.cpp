// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    for (int i = 2; i < value; i++) {
      if (value % i == 0) {
          return false;
      } 
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
    int i = 2;
    int counter = 0;
    while (1) {
        if (checkPrime(i)) {
            counter += 1;
        }
        if (counter == n) {
            return i;
        }
        i++;
    }
}

uint64_t nextPrime(uint64_t value) {
    do{
        value++;
        if (checkPrime(value)) {
            return value;
        }
    }while (1);
}

uint64_t sumPrime(uint64_t hbound) {
    long long int sum = 0;
    for (int i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
    long long int counter = 0;
    for (int i = lbound; i < hbound; i++) {
        if (checkPrime(i) and checkPrime(i + 2)) {
            counter++;
        }
    }
    return counter;
}
