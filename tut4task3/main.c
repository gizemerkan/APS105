#include <stdio.h>
//3 a)

bool isPalindrome (char str[]){
	int high=strlen(str)-1;
	int low=0;
	
	while(high>low){
		if(str[low++] != str[high--]){
			return false;
		} else {
			return true;
		}
	}
}
//for 3 part b) add if(input=='space') continue; etc. same for ; or , 	
	
//question #4 recursive implementation of isPalindrome function

bool isPalindrome (char str[]){
	int length=strlen(str);
	
	//the base case
	
	if(length==1||length==2){ //includes null in strlen
		return true;
	}
	
	if(str[0]!=str[length-1]){
		return false;
	}
	
    str[length - 1] = NULL; 
	
	return isPalindrome(str+1);
	
}