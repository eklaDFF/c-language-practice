#include "mystring.h"

int my_strlen(const char *str)
{
	int length = 0;
	while(*str != '\0'){
		length++;
		str++;
	}

	return length;
}

int my_strcpy(char *dest, const char *src)
{
	while(*dest != '\0' && *src != '\0'){
		*dest = *src;
		dest++;
		src++;
	}

	return 0;
}

int my_strcmp(const char *s1, const char *s2)
{
	while(*s1 && *s2){
		if(*s1 < *s2){
			return 1;
		}else if(*s1 > *s2){
			return -1;
		}
		s1++;
		s2++;
	}

	if(*s1 < *s2){
		return 1;
	}else if(*s1 > *s2){
		return -1;
	}

	return 0;
}

void my_strcat(char *dest, const char *src)
{
	while(*dest++);

	while(*src){
		*dest++ = *src++;
	}
}

char *my_strchr(const char *str, char ch)
{
	while(*str && *str != ch){
		str++;
	}

	return (char *) str;
}

void reverse(char *str)
{
	int length = my_strlen(str);
	char *right = str + length - 1;

	while(right > str){
		char ch = *str;
		*str = *right;
		*right = ch;
		str++;
		right--;
	}
}
