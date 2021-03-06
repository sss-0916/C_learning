#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 1024

const char* myStrstr(const char* dest, 
	const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	const char* temp_dest = dest;
	const char* temp_src = src;
	while (*temp_dest != '\0')
	{
		const char* temp = temp_dest;
		while (*temp != '\0' &&
    	   *temp_src != '\0' &&
		   *temp == *temp_src)
		{
			++temp;
			++temp_src;
		}
		if (*temp_src == '\0')
		{
			return temp_dest;
		}
		temp_src = src;
		++temp_dest;
	}
	return NULL;
}

int main()
{
	char str1[N] = "hello, world!";
	char str2[N] = "world";

	printf("%s\n", myStrstr(str1, str2));

	system("pause");
	return 0;
}