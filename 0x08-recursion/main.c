#include <stdio.h>
#include "main.h"


// int main(void){

//     _puts_recursion("Puts with recursion");

//     return (0);
// }




/**
 * main - check the code
 *
 * Return: Always 0.
 */
// int main(void)
// {
//     _print_rev_recursion("\nColton Walker");
//     return (0);
// }





/**
 * main - check the code
 *
 * Return: Always 0.
 */
// int main(void)
// {
//     int n;

//     n = _strlen_recursion("Corbin Coleman");
//     printf("%d\n", n);
//     return (0);
// }




/**
 * main - check the code
 *
 * Return: Always 0.
 */
// int main(void)
// {
//     int r;

//     r = factorial(1);
//     printf("%d\n", r);
//     r = factorial(5);
//     printf("%d\n", r);
//     r = factorial(10);
//     printf("%d\n", r);
//     r = factorial(-1024);
//     printf("%d\n", r);
//     return (0);
// }




/**
 * main - check the code
 *
 * Return: Always 0.
 */
// int main(void)
// {
//     int r;

//     r = _pow_recursion(1, 10);
//     printf("%d\n", r);
//     r = _pow_recursion(1024, 0);
//     printf("%d\n", r);
//     r = _pow_recursion(2, 16);
//     printf("%d\n", r);
//     r = _pow_recursion(5, 2);
//     printf("%d\n", r);
//     r = _pow_recursion(5, -2);
//     printf("%d\n", r);
//     r = _pow_recursion(-5, 3);
//     printf("%d\n", r);
//     return (0);
// }





/**
 * main - check the code
 *
 * Return: Always 0.
 */
// int main(void)
// {
//     int r;

//     r = _sqrt_recursion(1);
//     printf("%d\n", r);
//     r = _sqrt_recursion(1024);
//     printf("%d\n", r);
//     r = _sqrt_recursion(16);
//     printf("%d\n", r);
//     r = _sqrt_recursion(17);
//     printf("%d\n", r);
//     r = _sqrt_recursion(25);
//     printf("%d\n", r);
//     r = _sqrt_recursion(-1);
//     printf("%d\n", r);
//     return (0);
// }




/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}