#include <stdio.h>
/**
 *add - add two number
 *@a: first
 *@b: second
 *Return: return
 */
int add(int a, int b)
{
    return a + b;
}
/**
 *sub - add two number
 *@a: first
 *@b: second
 *Return: return
 */
int sub(int a, int b)
{
    return a - b;
}
/**
 *mul - add two number
 *@a: first
 *@b: second
 *Return: return
 */
int mul(int a, int b)
{
    return a * b;
}
/**
 *div - add two number
 *@a: first
 *@b: second
 *Return: return
 */
int div(int a, int b)
{
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero\n");
        return 0;
    }
    return a / b;
}
/**
 *mod - add two number
 *@a: first
 *@b: second
 *Return: return
 */
int mod(int a, int b)
{
    if (b == 0) {
        fprintf(stderr, "Error: Modulus by zero\n");
        return 0;
    }
    return a % b;
}
