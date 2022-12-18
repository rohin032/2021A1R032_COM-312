#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
//create process
fork();
fork();
//create variables
int var=1,i=1;
//long loop but broke at i==5
while(1)
{
if(i==5)
{
break;
}
//print Address
printf("Address of var in loop=%p\n",&var);
i++;
}
return 0;
}
