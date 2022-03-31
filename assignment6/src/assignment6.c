/*
 ============================================================================
 Name        : assignment6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	char arr[100];
	int counter=0,visited[100],copyvi[100];
	int count=0,temp=0;
	int i,j;
	printf("Enter a string");
	scanf("%s",arr);
	int size=strlen(arr);
	for(i=0;i<size;i++){
		count=1;
		for(j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				count++;
				visited[j]=-2;
				counter++;
			}
		}if(visited[i]!=-2){
			visited[i]=count;
		}
	}
	for(i=0;i<size;i++){
		copyvi[i]=visited[i];
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(visited[i]<visited[j]){
				temp=visited[i];
				visited[i]=visited[j];
				visited[j]=temp;
			}
		}
	}
	int max=visited[0];
	int min=visited[size-counter-1];
	int m,n;
	for(i=0;i<size-counter;i++){
		if(copyvi[i]==max){
			m=i;
		}
		if(copyvi[i]==min){
			n=i;
		}
	}
	char lmax,lmin;
	for(i=0;i<size;i++){
		lmax=arr[m];
		lmin=arr[n];
	}
	printf("Most repeated letter is %c \n",lmax);
	printf("least repeated letter is %c ",lmin);
	return EXIT_SUCCESS;
}
