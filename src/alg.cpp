// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    for (int num = 2; num * num <= value; num++) {
        if (value % num == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t value = 1;
  uint64_t num = 0;
  while (num != n) {
    value++;
    if (checkPrime(value) == true) {
      num++;
    }
  }
  return value;
}

uint64_t nextPrime(uint64_t value) {
  while (true) {
    value++;
    if (checkPrime(value)) {
      return value;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum1 = 0;
    uint64_t hbound1 = 0;
    while (hbound1 > 0) {
        if (checkPrime(hbound1) == true) {
            sum1 += hbound1;
        }
        --hbound1;
    }
    return sum1;
}
