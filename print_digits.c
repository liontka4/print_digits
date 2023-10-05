#include <stdio.h>

void print_digits(int n)
{
	if(n >= 10)
		reverse(n / 10);
	printf("%d ", n % 10);
}

int main()
{
	int number;
	scanf("%d",&number);
	reverse(number);
	return 0;
}
