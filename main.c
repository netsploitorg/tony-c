#include<stdio.h>
#include<stdlib.h>
#include"header/read.h"

char open_file(char filename[]);
int buff(char filename[]);


void main(int argc, char *argv[]){
	if (argv[1] == NULL){
		printf("\nEnter the filename (Eg: tony new.tony).\n");
	}
	else {
		open_file(argv[1]);
	}
	/*return 0;*/
}
