/*
 * First KLEE tutorial: testing a small function
 */

#include <klee/klee.h>

int nexttest(int x, int y)
{
 if(x>3){
    if(y<5){
        return 0;
    }else{
        return 1;
    }
 }else{
    if(y==6){
        return 2;
    }else{
        return 3;
    }
 }
}

int main()
{
    int a, b;
    klee_make_symbolic(&a, sizeof(a), "a");
    klee_make_symbolic(&b, sizeof(b), "b");
    return nexttest(a, b);
}