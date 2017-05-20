#include <klee/klee.h>

int array[10];
int main() {
  unsigned i, sum;

  klee_make_symbolic(&i, sizeof(i), "i");
  sum=0;
  if(i<8)
    sum+=array[i];
  else
    array[i]=1;
}

