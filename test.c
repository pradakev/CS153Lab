#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    // printf(1, "hello world\n");
    // hello();
    getparents();
    int status;
    waitpid(2, &status, 0);
    exit(0);
}