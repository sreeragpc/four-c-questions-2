/*
 ============================================================================
 Name        : assignment4p5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int row,col,space;
	for(row=1;row<=5;row++){
		for(space=5;space>=row;space--){
			printf("  ");
		}for(col=1;col<=row;col++){
			if(col==1 && row<5){
				printf("1");
			}
			if((col==row) && row>1 && row<5 ){

				printf("%d ",row);
			}
			if(row==5){
				printf("%d   ",col);
			}
			else{
				printf("    ");
			}

		}printf("\n");
	}
	return EXIT_SUCCESS;
}
