iinclude <stdio.h>

int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int Long;
	long long int LLong;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(Long));
	printf("Size of long long int:%zu byte(s)\n", sizeof(LLong));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	
     return (0);
}

