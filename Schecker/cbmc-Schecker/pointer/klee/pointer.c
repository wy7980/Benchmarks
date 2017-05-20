#include <klee/klee.h>


int main() {
  int *p;
  int a;
  p = &a;
  
  klee_make_symbolic(&a, sizeof(a), "a");
  klee_make_symbolic(&p, sizeof(int *), "p");

  if(a>10){
	*p = 2;
	p=0;
  }
  
  *p = 4;
  

}

