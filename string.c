#include <stdio.h>
//int stringlength(char str[]);
int main()
{
	char str[] = "The quick brown fox";
//int stringlength(char str[])
//{
	int count = 0, i;
	for (i=0; str[i] != '\0'; i++)
	{
		//printf("%d\n", count);
		count++;
	}
	printf ("The lenght of the string is %d ", count);
	return 0;
//}
}