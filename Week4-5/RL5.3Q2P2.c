#include <stdio.h>
 int main(void)
                        {
                          int i=0, j;
                          do
				{
				  j=1;
					do
					{
						printf("%d %d \t", i,j);
						j++;
					}while(j<40);
				i++;
				}while(i<10);                                   
                          getchar();getchar();return (0);
                        }
