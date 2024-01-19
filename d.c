#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100000

int main(){

	FILE *file = fopen("extensions.txt","r");
	FILE *file_name = fopen("files_name.txt","r");
	char buffer[MAX];
	char buffer_files[MAX];

	while(fgets(buffer,MAX,file)){
		char buffer_word[MAX];

		while(fgets(buffer_files,MAX,file_name)){
			sprintf(buffer_word,"%s.%s",buffer_files,buffer);
			printf("-> %s",buffer);

		}
		//sprintf(buffer_word,"holamundo.%s",buffer);
		//printf("-> %s",buffer);
	}



	return 0;
}
