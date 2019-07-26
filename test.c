#include "types.h"
#include "stat.h"
#include "user.h"

void test()
{
    char buf[10];

    test();

    buf[0] = 'a';
}

int main(int argc, char* argv[])
{
    int i = 0;
    printf(1, "pid = %d\n", getpid());
    test();
    i = 1 / i;
    printf(1, "%d\n", i);
    printf(1, "kill 1 ret = %d\n", kill(1));
    exit();
}