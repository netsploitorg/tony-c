#include<stdio.h>
#include<stdlib.h>

int buff(char filename[]);

char open_file(char filename[]){
	int pointer=0,i, buffer;
	char datum;
	FILE*ptr = fopen(filename, "r");
	buffer = buff(filename);
	char data[buffer];
	
	/* Looping and adding data to array*/

	while((datum=getc(ptr)) != EOF){
		data[pointer] = datum;
		pointer++;
	}
	fclose(ptr);
	
	printf("%s", data);

}

/* gets the file size */

int buff(char filename[]){
	FILE *ptr=fopen(filename, "r");
	int buffer;
	fseek(ptr,0,SEEK_END);
	buffer = ftell(ptr);
	return buffer;
}

