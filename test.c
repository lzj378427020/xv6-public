#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[])
{
    printf(1, "pid = %d\n", getpid());
    sleep(10);
    printf(1, "sleep 10\n");
    exit();
}