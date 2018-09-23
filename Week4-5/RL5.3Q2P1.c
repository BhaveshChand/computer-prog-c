#include <stdio.h>
 int main (void){
                             int num;
                             printf ("Enter a positive integer");
                             scanf ("%d",&num);
                             for(;num!=0;num/=10)
				{
					printf ("%d  ",num%10);
                                }
                                      getchar();getchar();return (0);
                            }


