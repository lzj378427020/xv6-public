#include "types.h"
#include "stat.h"
#include "user.h"

char test(char c)
{
    char buf[10*1024];

    memset(buf, 0, sizeof(buf));
    buf[0] = 'a';

    return buf[1];
}

int main(int argc, char* argv[])
{
    int i = 0;
    printf(1, "pid = %d\n", getpid());
    test('s');
    i = 1 / i;
    printf(1, "%d\n", i);
    printf(1, "kill 1 ret = %d\n", kill(1));
    exit();
}