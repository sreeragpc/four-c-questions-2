/*
 ============================================================================
 Name        : assignment3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	Write a program to find Second Largest Number in an Array
	int a[50],size,i,j,count=0,temp;
		setbuf(stdout,NULL);
		printf("enter the size of the array");
		scanf("%d",&size);
		printf("enter the values of the array");
		for(i=0;i<size;i++){
			scanf("%d",&a[i]);
		}for(i=0;i<size;i++){
			for(j=i+1;j<size;j++){
				if(a[i]==a[j]){

					for(int k=j;k<size-1;k++){
						a[k]=a[k+1];
					}size--;
					j--;
				}
			}

		}

		for(i=0;i<size;i++){
			for(j=i+1;j<size;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}

			}

		}
			printf("2nd largest element=%d",a[1]);



	return EXIT_SUCCESS;
}
