#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char* itoa(int num, char* buffer, int base)
{
	int current = 0;
	if (num == 0)
	{
		buffer[current++] = '0';  
		buffer[current] = '\0';  
		return buffer;  
	}  
	int num_digits = 0;  
	if (num < 0)
	{  
		if (base == 10) {  
			num_digits ++;  
			buffer[current] = '-';  
			current ++;  
			num *= -1;  
		}  
		else  
			return NULL;  
	}  
	num_digits += (int)floor(log(num) / log(base)) + 1;  
	while (current < num_digits)   
	{  
		int base_val = (int) pow(base, num_digits-1-current);  
		int num_val = num / base_val;  
		char value = num_val + '0';  
		buffer[current] = value;  
		current ++;  
		num -= base_val * num_val;  
	}  
	buffer[current] = '\0';  
	return buffer;  
}  

int is_palindrome(int mul)
{
	int i, len, j;
	char s[6];

	itoa(mul, s, 10);
	len = strlen(s);
	j = len - 1;

	for (i = 0; i < len/2; i++)
	{
		if (s[i] != s[j - i])
			return (0);
	}

	return (1);
}

int main()
{
	int a, b, c;
	a = 100;
	int largest = 0;

	while (a <= 999)
	{
		b = 100;
		while (b <= 999)
		{
			c = a * b;

			if (c > largest && is_palindrome(c))
				largest = c;
			b++;
		}
		a++;
	}

	if (is_palindrome(largest))
		printf("%i", largest);

	return (0);
}
