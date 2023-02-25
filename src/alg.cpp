// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value <= 1) return false; 
    for (int num = 2; num <= value / 2; num++) {
        if (value % num == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
  int value = 1, num = 0;
        while (num < n) {
            value++;
            if (checkPrime(value)) {
                num++;
            }
        }
        return value;
}

uint64_t nextPrime(uint64_t value) {
  for (int num = 1; ; num++) {
            if (checkPrime(value + num)) {
                if ((value - num >= 2) && checkPrime(value + num)) {
                    return value + num;
                }
                else if (value - num == 1) {
                    return value + num;
                }
                else
                    return value - num;
                break;  
            }
        }
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
    for (int num = 2; num < hbound; num++) {
        if (checkPrime(num)) {
            sum += num;
        }
    }
    return sum;
}
