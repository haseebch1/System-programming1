#include<unistd.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
FILE *filepointer;
filepointer=fopen("File.txt","w");
fprintf(filepointer,"/nProcess id------%d",getpid());
fprintf(filepointer,"/nEnvironment variables%s",getenv("USER"));
fprintf(filepointer,"/nThread id -------%ld",syscall(SYS_gettid));
fclose(filepointer);
return 0;
}
