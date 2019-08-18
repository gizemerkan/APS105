#include <stdio.h>

//function to encode
char* encode (char str[]){
	char *s=str;
	int count=0;
	
	
	while(*s !=NULL ){
		if (*s==*(s+1)){
			count++;
			if (count==1){
				
			}
	}
}

//create function to decode


int main(int argc, char **argv)
{
	char command;
	char str[1024];
	
	printf("Enter command - e (encode), d (decode), q (quit): ");
	scanf("%c", &command);
	
	while (command != 'q'){
		
	if(command=='e'){
		printf("Enter string to encode: ");
		encode it;
		printf("Encoded string: ", encoded);
	} else if (command== 'd'){
		printf("Enter string to decode: ");
		scanf("%s", &decode);
		decode it;
		printf("Decoded string: ", decoded);
	} else if (command== 'q'){
		printf("Exiting");
		return 0;
	} else {
		printf("Unknown command %c", command);
	}
	}
	return 0;
}
