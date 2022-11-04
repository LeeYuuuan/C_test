#include <stdio.h>
int power(int exp)   
{	
	int res = 1;
	for (int i = 0; i < exp; i++)
		res *= 10;
	return res;    
}
void print_word(int d)
{
	switch (d)
	{
	case 1: printf("个"); break;
	case 2: printf("十"); break;
	case 3: printf("百"); break;
	case 4: printf("千"); break;
	case 5: printf("万"); break;
	}
}
int main()
{
	int n_input;
	printf("please input an integer:\n");
	scanf_s("%d", &n_input);
	int digit = 1;
	while (n_input / power(digit) != 0)
		digit += 1;
	printf("这是一个%d位数:", digit);
	for (int i = digit; i > 0; i--)
	{
		if (i != 1)
		{
			print_word(i);
			printf("位是%d,", (n_input * 10 / power(i)) % 10);
		}
		else
		{
			printf("位是%d.", (n_input * 10 / power(i)) % 10);
		}
	}
	return 0;

}