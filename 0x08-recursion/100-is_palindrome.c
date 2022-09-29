root@9cd88ba3b9cf:/alx-low_level_programming/0x08-recursion# cat > 6-is_prime_number.c
#include "main.h"

/**
 * prime_a - check the code for ALX Africa students.
 * @a: number
 * @b: number of power
 * Return: Always 0.
 */

int prime_a(int a, int b)
{
        if (a <= 1 || (a != b && a % b == 0))
        {
                return (0);
        }
                else if (a == b)
        {
                return (1);
        }
        return (prime_a(a, b + 1));
}


/**
 * is_prime_number - check the code for ALX Africa students.
 * @n: number
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
        return (prime_a(n, 2));
}
root@9cd88ba3b9cf:/alx-low_level_programming/0x08-recursion# git add .
root@9cd88ba3b9cf:/alx-low_level_programming/0x08-recursion# git commit -m '6-is_prime_number'
[master d57570e] 6-is_prime_number
 1 file changed, 33 insertions(+)
 create mode 100644 0x08-recursion/6-is_prime_number.c
root@9cd88ba3b9cf:/alx-low_level_programming/0x08-recursion# git push
Password for 'https://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@github.com':
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 575 bytes | 575.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Utethe/alx-low_level_programming.git
   1dc826b..d57570e  master -> master
root@9cd88ba3b9cf:/alx-low_level_programming/0x08-recursion# cat > 100-is_palindrome.c
#include "main.h"

/**
 * long_1 - check the code for ALX Africa students.
 * @s: number
 *
 * Return: Always 0.
 */

int long_1(char *s)
{
	if (*s != '\0')
	{
		return (1 + long_1(s + 1));
	}
	return (0);

}
/**
 * compare - check the code for ALX Africa students.
 * @s: number
 * @l: lenght
 *
 * Return: Always 0.
 */
int compare(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	if (*s == *(s + (l - 1)))
	{
		return (compare(s + 1, l - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - check the code for ALX Africa students.
 * @s: character
 *
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int l;

	l = long_1(s);
	return (compare(s, l));
}
