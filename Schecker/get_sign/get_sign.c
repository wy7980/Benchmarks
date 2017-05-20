/*
 * First KLEE tutorial: testing a small function
 */

#include <klee/klee.h>

int get_sign(int x, int y)
{
    if (x == 0)
    {
        y = 0;
        return 0;
    }

    if (x < 0)
    {
        y = -1;
        return -1;
    }
    else
    {
        y = 1;
        return 1;
    }
}

int main()
{
    int a;
    int b;
    klee_make_symbolic(&a, sizeof(a), "a");
    return get_sign(a, b);
}