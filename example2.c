#include<stdio.h>
#include<unistd.h>
int main ()
{
    printf("i am the process with id  %d\n",getpid());

  printf("i am the user id with %d\n",getuid());


printf("i am the group id with %d\n",getgid());
}
