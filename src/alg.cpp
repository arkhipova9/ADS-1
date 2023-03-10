// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value <= 1) return false; 
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
  do value ++;
  while (checkPrime(value)==false);
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  uint64_t num = 1;
    while (nextPrime(num) < hbound){
      sum += nextPrime(num);
      num = nextPrime(num);
    }
    return sum;
}
