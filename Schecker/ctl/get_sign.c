/*
 * First KLEE tutorial: testing a small function
 */

#include <klee/klee.h>
#include<stdio.h>
int get_sign(int x,int y) {
  if (x < 0){
	if(y<4)
	     printf("0\n");
	else
	     printf("1\n");
   }else{
	if(y!=3)
	     printf("2\n");
	else{
		y++;
		if(y>4)
		     printf("3\n");
		else
		     printf("4\n");
	}
   }  
} 

int main() {
  int a;
  int b;
  klee_make_symbolic(&a, sizeof(a), "a");
  klee_make_symbolic(&b, sizeof(b), "b");
  return get_sign(a,b);
} 
