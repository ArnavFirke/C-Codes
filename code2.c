#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void swap(int *a, int *b);
int inputArray(int array[]);
void printArray(int array[], int n);
void modify(int *first, int n);
int insert(int *first, int n);
int delete (int *first, int n);
int bubbleSort(int *first, int n);
void selectionSort(int *first, int n);
void insertionSort(int *first, int n);
int linearSearch(int *first, int n, int key);
int binarySearch(int *first, int n, int key);

void main()
{
    int array[10];
    int c, n, i, op = 0;
    printf("Which array operation would you like to perform\n");
    printf("1.Modify\n2.Insert\n3.Delete\n4.Sort\n5.Search\n");
    printf("Enter the operation: ");
    scanf("%d", &c);
    if (c < 1 || c > 5)
    {
        printf("Invalid option selected!");
    }
    else
    {
        printf("\n");
        // Taking array I/P from user
        n = inputArray(array);
        if (n == 0)
        {
            printf("Invalid array size!");
        }
        else
        {
            printf("\n");
            // Display I/P array
            printf("Input array is:");
            printf("\n");
            printf("Index:");
            printf("\t\t");
            for (i = 0; i < n; i++)
            {
                printf("array[%d]\t", i);
            }
            printf("\n");
            printf("Address:");
            printf("\t");
            for (i = 0; i < n; i++)
            {
                printf("%d\t\t", &array[i]);
            }
            printf("\n");
            printf("Value:");
            printf("\t\t");
            printArray(array, n);
            printf("\n\n");
            switch (c)
            {
            case 1:
            {
                modify(array, n);
                op = 1;
                break;
            }
            case 2:
            {
                n = insert(array, n);
                op = 1;
                break;
            }
            case 3:
            {
                n = delete (array, n);
                op = 1;
                break;
            }
            case 4:
            {
                int sort;
                printf("Which sorting technique to apply\n\n");
                printf("1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n\n");
                scanf("%d", &sort);
                if (sort < 1 || sort > 3)
                {
                    printf("Invalid option selected!");
                }
                else
                {
                    switch (sort)
                    {
                    case 1:
                    {
                        int type;
                        type = bubbleSort(array, n);
                        printf("\n\n");
                        // Checking case
                        if (type == 1)
                        {
                            printf("This is Best Case.\n\n");
                        }
                        else if (type == 2)
                        {
                            printf("This is Worst Case.\n\n");
                        }
                        else
                        {
                            printf("This is Average Case.\n\n");
                        }
                        break;
                    }
                    case 2:
                    {
                        selectionSort(array, n);
                        break;
                    }
                    case 3:
                    {
                        insertionSort(array, n);
                        break;
                    }
                    }
                    op = 2;
                }
                break;
            }
            case 5:
            {
                int search;
                printf("Which searching technique to apply\n\n");
                printf("1.Linear Search\n2.Binary Search\n\n");
                scanf("%d", &search);
                if (search < 1 || search > 3)
                {
                    printf("Invalid option selected!");
                }
                else
                {
                    switch (search)
                    {
                    case 1:
                    {
                        int key, flag;
                        // Take input of key from user
                        printf("Enter the value you want to search in the array:");
                        scanf("%d", &key);

                        // Linear Search
                        flag = linearSearch(array, n, key);
                        // Printing O/P
                        if (flag == -1)
                            printf("\nSearch was unsuccessful!");
                        else
                            printf("\nSearch was successfull! %d was found at index %d of the array.", key, flag);
                        break;
                    }
                    case 2:
                    {
                        int key, flag;
                        // Take input of key from user
                        printf("Enter the value you want to search in the array:");
                        scanf("%d", &key);
                        printf("\n");
                        // Binary Search
                        flag = binarySearch(array, n, key);
                        // Printing O/P
                        if (flag == -1)
                            printf("\nSearch was unsuccessful!");
                        else
                            printf("\nSearch was successfull! %d was found at index %d of the array.", key, flag);
                        break;
                    }
                    }
                    op = 0;
                }
                break;
            }
            }
            // Display O/P array
            if (op != 0)
            {
                (op == 1) ? printf("\nModified array is:") : printf("\nSorted array is:");
                printf("\n\n");
                printf("Index:");
                printf("\t\t");
                for (i = 0; i < n; i++)
                {
                    printf("array[%d]\t", i);
                }
                printf("\n");
                printf("Address:");
                printf("\t");
                for (i = 0; i < n; i++)
                {
                    printf("%d\t\t", &array[i]);
                }
                printf("\n");
                printf("Value:");
                printf("\t\t");
                printArray(array, n);
                printf("\n\n");
            }
        }
    }
}
// Swap Function
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// Create Array
int inputArray(int *first)
{
    int *ptr, n;
    printf("Enter the size of the array[Less than 10]: ");
    scanf("%d", &n);
    for (ptr = first; ptr < first + n; ptr++)
    {
        printf("Enter the elements of the array: ");
        scanf("%d", ptr);
    }
    return n;
}
// Display Array
void printArray(int *first, int n)
{
    int *ptr;
    for (ptr = first; ptr < first + n; ptr++)
    {
        printf("%d\t\t", *ptr);
    }
}
// Modify Array
void modify(int *first, int n)
{
    int p, v;
    printf("Enter the index of element which is to be modified: ");
    scanf("%d", &p);
    if (p < 0 || p > n - 1)
    {
        printf("\nInvalid Position Input!");
    }
    else
    {
        printf("\nInsert the value you want at index %d:", p);
        scanf("%d", &v);
        *(first + p) = v;
    }
}
// Insert element
int insert(int *first, int n)
{
    int p, m, i;
    printf("Enter the index you want to insert the element in:");
    scanf("%d", &p);
    if (p < 0 || p > n - 1)
    {
        printf("\nInvalid index Input!");
    }
    else
    {
        printf("\nEnter the element you want to insert at position %d:", p);
        scanf("%d", &m);
        for (i = 0; i <= n - p - 1; i++)
        {
            *(first + n - i) = *(first + n - i - 1);
        }
        *(first + p) = m;
        n = n + 1;
    }
    return n;
}
// Delete Element
int delete (int *first, int n)
{
    int i, p;
    printf("Enter the index you want delete the element in:");
    scanf("%d", &p);
    if (p < 0 || p > n - 1)
    {
        printf("\nInvalid index Input!");
    }
    else
    {
        n = n - 1;
        *(first + p) = 0;
        for (i = p; i < n; i++)
        {
            *(first + i) = *(first + i + 1);
        }
    }
    return n;
}
// Bubble Sort
int bubbleSort(int *first, int n)
{
    int i, j, swaps = 0, iteration = 0, type;
    for (i = 0; i < n - 1; i++)
    {
        printf("\nPass:%d\n\n", i + 1);
        for (j = 0; j < n - i - 1; j++)
        {
            // Swap
            if (*(first + j) > *(first + j + 1))
            {
                swap((first + j), (first + j + 1));
                swaps++;
            }
            // Iterations
            printf("Iteration:%d", j + 1);
            printf("\t");
            printArray(first, n);
            printf("\n");
            iteration++;
        }
        if (swaps == 0)
        {
            break;
        }
    }
    if (swaps == 0)
    {
        type = 1;
    }
    else if (swaps == iteration)
    {
        type = 2;
    }
    else
    {
        type = 3;
    }
    return type;
}

// Selection Sort
void selectionSort(int *first, int n)
{
    int i, j, min_index;
    for (i = 0; i < n - 1; i++)
    {
        min_index = i;
        // Selecting minimum value
        for (j = i + 1; j < n; j++)
        {
            if (*(first + min_index) > *(first + j))
            {
                min_index = j;
            }
        }
        swap((first + min_index), (first + i));
        // Passes
        printf("Pass:%d\n", i + 1);
        printf("Selected minimum element = %d\n", *(first + i));
        printf("Array:\t\t");
        printArray(first, n);
        printf("\n\n");
    }
}

// Insertion Sort
void insertionSort(int *first, int n)
{
    int i, j, current_value;
    for (i = 1; i < n; i++)
    {
        current_value = *(first + i);
        j = i - 1;
        while (j >= 0 && *(first + j) > current_value)
        {
            *(first + j + 1) = *(first + j);
            j--;
        }
        *(first + j + 1) = current_value;
        printf("\nPass:%d\n\n", i);
        printf("Current Value = %d", current_value);
        printf("\n\n");
        printf("Array:", i);
        printf("\t\t");
        printArray(first, n);
        printf("\n");
    }
}

// Linear Search
int linearSearch(int *first, int n, int key)
{
    int i, flag = -1;
    for (i = 0; i < n; i++)
    {
        if (key == *(first + i))
        {
            flag = i;
            break;
        }
    }
    return flag;
}

// Binary Search
int binarySearch(int *first, int n, int key)
{
    int i, j, low, up, mid, flag = -1, type;
    type = bubbleSort(first, n);
    if (type == 1)
    {
        printf("\nThe given array is already sorted.");
        printf("\n\n");
    }
    else
    {
        printf("\nThe given array has been sorted.The new array is:");
        printf("\n\n");
        printf("Index:");
        printf("\t\t");
        for (i = 0; i < n; i++)
        {
            printf("array[%d]\t", i);
        }
        printf("\n");
        printf("Adress:");
        printf("\t\t");
        for (i = 0; i < n; i++)
        {
            printf("%d\t\t", (first + i));
        }
        printf("\n");
        printf("Value:");
        printf("\t\t");
        printArray(first, n);
        printf("\n\n");
    }

    low = 0;
    up = n - 1;
    for (i = 0; i < n; i++)
    {
        if (low <= up)
        {
            mid = (low + up) / 2;
            printf("Pass:%d", i + 1);
            printf("\n\n");
            printf("Current Array:");
            printf("\t");
            for (j = low; j <= up; j++)
            {
                printf("%d\t\t", *(first + j));
            }
            printf("\nIndex:");
            printf("\t\t");
            for (j = low; j <= up; j++)
            {
                printf("array[%d]\t", j);
            }
            printf("\n\n");
            printf("Current Low = %d \nCurrent Up = %d\nCurrent Mid = %d", low, up, mid);
            printf("\n\n");
            if (*(first + mid) == key)
            {
                flag = mid;
                break;
            }
            else if (*(first + mid) < key)
            {
                low = mid + 1;
            }
            else
            {
                up = mid - 1;
            }
        }
    }
    return flag;
}
