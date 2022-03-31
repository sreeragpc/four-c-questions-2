/*
 ============================================================================
 Name        : assignment4p4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int row,space,col;
	for(row=1;row<=5;row++){
		for(space=5;space>=row;space--){
			printf("  ");
		}for(col=row;col<=(2*row-1);col++){
			printf("%d ",col);
		}
		for(col=(2*(row-1));col>=row;col--){
			printf("%d ",col);
		}printf("\n");

	}
	return EXIT_SUCCESS;
}
