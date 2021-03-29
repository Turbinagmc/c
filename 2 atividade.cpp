#include <stdio.h>

int potencia(long m, long n) {
  if(m == 0) {
        return n + 1;
  } else if(n == 0) {
        return acker(m-1, 1);
  } else {
        return acker(m-1, acker(m, n-1));
  }
}

