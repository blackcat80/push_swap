/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:47:22 by csitja-b          #+#    #+#             */
/*   Updated: 2023/02/02 18:05:49 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	stack_a *s = stack_ini();

	push(s, 1);
	stack_print(s);
	push(s, 2);
	stack_print(s);
	push(s, 3);
	stack_print(s);
	push(s, 4);
	stack_print(s);
	printf("\n");

	printf("POP %d - ", pop(s));
	stack_print(s);
	printf("POP %d - ", pop(s));
	stack_print(s);
	printf("POP %d - ", pop(s));
	stack_print(s);
	printf("POP %d - ", pop(s));
	stack_print(s);
	stack_destroy(s);
	return 0;
}
/*void countingSort(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    int count[max + 1];
    for (int i = 0; i <= max; i++)
        count[i] = 0;

    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    int j = 0;
    for (int i = 0; i <= max; i++)
        for (int k = 0; k < count[i]; k++)
            arr[j++] = i;
}

int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[1]);
	printf(" t del array = %lu", sizeof(arr[0]));

    printf("Array original: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    countingSort(arr, n);

    printf("\nArray ordenado: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}*/
/*#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int i;

    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, n);

    heapSort(arr, n);

    printf("Sorted array is \n");
    printArray(arr, n);

    return 0;
}*/