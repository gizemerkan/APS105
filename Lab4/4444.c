#include <stdio.h>
#include <string.h>

//function to encode
char* encode (char myStr[]){
  char *s, *encodePtr;
  int length = strlen(myStr);
  for (s = myStr, encodePtrs = myStr; *s; s++) {
    int count = 1;
    in[0] = s[0]; 
		encodePtr++;
    while (s[0] == s[1]) {
      count++;
      s++;
    }   
    if (count > 1) {
      encodePtr += length;
    }   
  }
  in[0] = 0;
  return myStr;
}
			

//create function to decode


int main(int argc, char **argv)
{
	char command;
	char encode[1024], decode[1024];
	
	printf("Enter command - e (encode), d (decode), q (quit): ");
	scanf("%c", &command);
	
	while (command != 'q'){
		
	if(command=='e'){
		printf("Enter string to encode: ");
		scanf("%s", &encode);
		encoded=encode(encode);
		printf("Encoded string: ", encoded);
	/*} else if (command== 'd'){
		printf("Enter string to decode: ");
		scanf("%s", &decode);
		decode it;
		printf("Decoded string: ", decoded);
	} else if (command== 'q'){
		printf("Exiting.\n");
		return 0;
	} else {
		printf("Unknown command %c\n", command);*/
	}
	}
	return 0;
}
