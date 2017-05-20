#include <klee/klee.h>
int main(){
	int a,b;
	klee_make_symbolic(&a, sizeof(a), "a");
	if(a>3){
		b=0;
	}
	else{
		b=1;
	}
	return b;
}
