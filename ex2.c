#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define String_MaxSize 10000
int main()
{
char stringPtr[String_MaxSize]; 
while(gets(stringPtr))
{
int stringPtr_length = strlen(stringPtr);
int i; 
for(i = 0; i < stringPtr_length; i++)
{
if(stringPtr[i] == ' ')
{
printf(" ");
}
else
{
int tempPos = i;
int j;
while(i < stringPtr_length && stringPtr[i] != ' ')
{
i++;
}
i--;
for(j = i; j >= tempPos; j--)
{
putchar(stringPtr[j]);
}
}
}
printf("\n");
}
printf("\n");
return 0;
}