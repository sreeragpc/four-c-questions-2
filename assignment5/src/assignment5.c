/*
 ============================================================================
 Name        : assignment5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,j,n;
    setbuf(stdout,NULL);

    printf("Enter the number till which you want prime numbers\n");
    scanf("%d",&n);

    printf("Prime numbers are:-\n");
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }

       if(c==2)
        {
            printf("%d ",i);
        }
    }

	return EXIT_SUCCESS;
}
