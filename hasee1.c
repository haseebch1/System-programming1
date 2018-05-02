#include<stdio.h>
#include<stdlib.h>
int main ()
{
FILE *filepointer;
filepointer=fopen("File.txt","r");
char ch;
ch=getc(filepointer);
while(ch!=EOF)
{
putchar(ch);
ch=getc(filepointer);
}
return 0;
}

