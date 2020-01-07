#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100
int main(int argc, char *argv[])
{
    int x=0;
    double y;
    double z;
    if (argc==1)
    {
        printf("The program needs at least one integer parameter to run!\n");
        return 0;
    }
    if(isdigit(*argv[++x]))
    {
        z=atof(argv[x]);
    }
    else
    {
       z=EOF;
        printf("The parameter has to be an integer format!\n");
        return 0;
    }
    while((--argc) > 0 )
    {
        if(isdigit(*argv[x]))
        {
            if(z>(y=atof(argv[x])))
            z=y;
            x++;
        }
        else
        {
            z=EOF;
            printf("The parameter has to be an integer format!\n");
            return 0;
        }
    }
    if(z!=EOF)
    {
        printf("Min parameter is %g\n",z);
    }
}