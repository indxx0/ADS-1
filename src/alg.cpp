// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    for (uint64_t i = 2; i < value; i++) {
      if (value % i == 0) {
          return false;
      }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t i = 2;
    uint64_t counter = 0;
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
    do {
        value++;
        if (checkPrime(value)) {
            return value;
        }
    }while (1);
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
    uint64_t counter = 0;
    for (uint64_t i = lbound; i < hbound; i++) {
        if (checkPrime(i) && checkPrime(i + 2)) {
            counter++;
        }
    }
    return counter;
}
