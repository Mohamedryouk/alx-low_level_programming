#include "search_algos.h"
#include <stdio.h>

/**
 * print_subarray - print array after every change.
 * @array: array to search in.
 * @x: size of the array.
 * @y: the value the value that needs to be found.
 */
void print_subarray(int *array, size_t x, size_t y)
{
    size_t i;

    printf("Searching in array: ");
    for (i = x; i <= y; i++)
    {
        printf("%d", array[i]);
        if (i < y)
        {
            printf(", ");
        }
    }
    printf("\n");
}

/**
 * binarySearch - binary search algorithm implementation.
 * @arr: array to search in.
 * @l: left index.
 * @r: right index.
 * @x: value to search for.
 * Return: index of the found value, or -1 if not found.
 */
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

/**
 * min - returns the minimum of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: minimum of a and b.
 */
size_t min(size_t a, size_t b)
{
    return (a < b ? a : b);
}

/**
 * exponential_search - search for a value in an array using exponential search algorithm.
 * @array: array to search in.
 * @size: size of the array.
 * @value: value to search for.
 * Return: index of the found value, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t start;
    size_t end;

    if (array == NULL || size == 0)
    {
        return -1;
    }
    while (bound < size && array[bound] <= value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }
    start = bound / 2;
    end = min(bound, size - 1);
    printf("Value found between indexes [%lu] and [%lu]\n", start, end);
    return binarySearch(array, start, end, value);
}
