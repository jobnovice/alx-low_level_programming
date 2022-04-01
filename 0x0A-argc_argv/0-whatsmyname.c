#include <stdio.h>
/**
 *main - argc and argv illustration
 *@argc: number of arguments
 *@argv:array of argv
 *Return:0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s \n", argv[argc - 1]);
	return (0);
}
