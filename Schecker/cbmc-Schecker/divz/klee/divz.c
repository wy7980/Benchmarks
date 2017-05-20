#include<klee/klee.h>

int main(){
	int y;
	double z;
 
  klee_make_symbolic(&y, sizeof(y), "y");

	if(y>2)
		z=y/2;
	else
		z=2/y;

	return z;

}
