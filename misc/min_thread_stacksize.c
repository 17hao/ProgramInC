#include <unistd.h>
#include <stdio.h>


int main() {
  long res;
  res = sysconf(_SC_THREAD_STACK_MIN);
  printf("Min thread stack size=%ld\n", res);
}