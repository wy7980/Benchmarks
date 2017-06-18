## 1.source
```cpp
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
```
## 2.note
*	must use -search=dfs

## 3.run
```
$ klee -search=dfs get_sign.bc
```

## 4.result

| type |        property        | satisfiability |
|------|------------------------|----------------|
| EF   | E F a>0                | satisfied      |
| EG   | E a>0 G b!=3           | unsatisfied    |
| EG   | E a>0 and b!=3 G b=3   | unsatisfied    |
| EU   | E a>=0 U b=3           | satisfied      |
| EU   | E a<0 U b=3 and a>=0   | unsatisfied    |
| EX   | E a<0 X b<4            | satisfied      |
| EX   | E a>0 and b=4 X a<0    | unsatisfied    |
| EF   | E a<0 and b<4 F a>2    | unsatisfied    |
| EF   | E a>=0 and b=3 F b>4   | satisfied      |
| AU   | A a>=0 U a>=0 and b!=3 | satisfied      |
| AU   | A a<0 U a>=0 and b>=4  | unsatisfied    |
| AX   | A a<0 X a<3            | satisfied      |
| AX   | A a>=0 and b=3 X b>3   | unsatisfied    |
| AF   | A a<0 F a>4            | unsatisfied    |
| AF   | A a<0 F b!=4           | satisfied      |



