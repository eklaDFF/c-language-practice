#include <stdio.h>
#include "mystring.h"

int main()
{
	const char *text = "Hello, world!";
	char ch = 'o';

	// first occurence of a character in C String
	char *result = my_strchr(text, ch);

	if (result) {
        	printf("Found '%c' at position: %ld\n", ch, result - text);
	} else {
        	printf("Character '%c' not found.\n", ch);
	}

	// length of String
	int length = my_strlen(text);
	printf("Length of String is %d\n", length);

	// comparing one string to another
	char s1[6] = "Hello";
	char *s2 = "World";
	int result2 = my_strcmp(s1, s2);
	if(result2 == 0){
		printf("%s and %s are equal\n", s1, s2);
	}else if(result2 == -1){
		printf("%s is lexigraphically larger than %s\n", s1, s2);
	}else{
		printf("%s is lexigraphically smaller than %s\n", s1, s2);
	}

	// copy one string to another
	my_strcpy(s1, s2);
	printf("after copy, the text is %s\n", s1);

	// reversing a string
	reverse(s1);
	printf("after reversing in same text, text is %s\n", s1);
}
