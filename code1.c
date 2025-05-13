// Menu Driven Program to perform various Options on Array

#include <stdio.h>

// Insertion of elements in an array
void insert(int a[], int size)
{

    int i;
    int n;
    int m;

    // Taking number to be inserted in array from user
    printf("\nEnter the number you want to insert in array :");
    scanf("%d", &n);

    // Taking index where to insert the number in the array
    printf("\nEnter the index where you want to insert the number in array :");
    scanf("%d", &m);

    for (i = size - 1; i >= m; i--)
    {
        a[i + 1] = a[i];
    }
    a[m] = n;
    printf("\nNew array is = \n");
    printf("\t");
    for (int i = 0; i < size + 1; i++)
    {
        printf("a[%d]\t", i);
    }
    printf("\n");
    for (int i = 0; i < size + 1; i++)
    {
        printf("\t%d\t", a[i]);
    }
}
// Deletion of elements in an array
void delete (int a[], int size)
{
    int i;
    int m;
    printf("\nEnter the index of number you want to delete from array : ");
    scanf("%d", &m);
    for (i = m + 1; i <= size; i++)
    {
        a[i - 1] = a[i];
    }
    printf("\nThe array after deletion is : \n");
    printf("\t");
    for (int i = 0; i < size - 1; i++)
    {
        printf("a[%d]\t", i);
    }
    printf("\n");
    for (int i = 0; i < size - 1; i++)
    {
        printf("\t%d\t", a[i]);
    }
}

// Modification of elements in an array
void modify(int a[], int size)
{
    int i;
    int m, n;
    printf("\nEnter the index of number you want to modify in array : ");
    scanf("%d", &m);
    printf("\nEnter the new number : ");
    scanf("%d", &n);
    for (int i = 0; i < size; i++)
    {
        a[m] = n;
    }
    printf("\nNew array : \n");
    printf("\t");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]\t\t", i);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("\t%d\t", a[i]);
    }
}

// Searching of element by linear search method
void linear_search(int a[], int size)
{
    printf("\nEnter the number you want to search in array :");
    int b, i;
    int k = 0;
    int z;
    scanf("%d", &b);
    for (int i = 0; i < size; i++)
    {
        if (a[i] == b)
        {
            k = 1;
            z = i;
            break;
        }
    }
    if (k == 1)
    {

        printf("The number is present at index:\t%d", z);
    }
    else
    {
        printf("The number is not present in the array");
    }
}
// Searching of elements by binary search
void binary_search(int a[], int size)
{
    printf("\n\nSorted array : ");
    printf("\n");
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\t");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]\t\t", i);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("\t%d\t", a[i]);
    }
    printf("\n\nEnter the number you want to search in array : ");
    int key;
    scanf("%d", &key);
    int start = 0;
    int end = size - 1;
    int ans = 0;
    int mid = ((start + end) / 2);
    while (start <= end)
    {
        if (key == a[mid])
        {
            ans = mid;
            break;
        }
        else if (key > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = ((start + end) / 2);
    }
    if (a[ans] == key)
    {
        printf("\n The number is present in the sorted array at the index : %d", ans);
    }
    else
    {
        printf("\nThe number is not Present in array\n");
    }
}
// Various types of sorting techniques
void bubble_sort(int arr[], int b)
{
    int temp = 0;
    int p = 0;
    for (int i = 0; i < b - 1; i++)
    {
        printf("\n");
        printf("Pass : %d", i + 1);
        printf("\n");
        for (int j = 0; j < b - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                p += 1;
            }
            printf("\n");
            printf("itertion:%d =>\t", j + 1);
            for (int i = 0; i < b; i++)
            {
                printf("%d\t", arr[i]);
            }
            printf("\n");
        }
    }
    printf("\n");
    printf("Number of passes:%d", b - 1);
    printf("\n");
    printf("Total number of comparison:%d", b * (b - 1) / 2);
    printf("\n");
    printf("Total number of swapping:%d", p);
}
void bubble_sort1(int arr[], int b)
{
    int z = 0;
    if (1)
    {
        for (int i = 0; i < b; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                z++;
            }
        }
        if (z == (b - 1))
        {
            printf("It is the best case.");
        }
        else
        {
            bubble_sort(arr, b);
        }
    }
}
void printarr(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int selection_sort(int arr[], int b)
{
    for (int i = 0; i < b; i++)
    {
        int minindex = i;
        for (int j = i; j < 5; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
        printf("iteration number %d : ", i + 1);
        printarr(arr);
    }
}
void insertion_sort(int arr[], int b)
{
    for (int i = 1; i < b; i++)
    {
        printf("Pass : %d", i);
        printf("\n");
        int temp = arr[i];
        int j = i - 1;
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
        printf("\t");
        for (int i = 0; i < b; i++)
        {
            printf("%d\t", arr[i]);
        }
        printf("\n");
    }
    printf("Sorted array is : ");
    printf("\n");
    printf("\t");
    for (int i = 0; i < b; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int size,*ptr;
    int arr[10];
    int i;

    // Taking number of elements user wants in the array
    printf("Enter the number of elements you want in your array: ");
    scanf("%d", &size);
    // Taking the elements of array one by one
    for (i = 0; i < size; i++)
    {
        printf("Enter the elements of array one by one: ");
        scanf("%d", &arr[i]);
        // scanf("%d", ptr);
        // ptr++;
    }

    printf("Your array is :\n");
    printf("\t");

    for (i = 0; i < size; i++)
    {
        printf("a[%d]\t\t", i);
        
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("\t%1d\t", arr[i]);
        // printf("\t%d\t", ptr);
    }

    printf("\nSelect the Operation you want to perform on the above array \n");
    printf("-----------------------------------------\n");
    printf("*  1.Insert any number in the array      *\n");
    printf("*  2.Delete any number from the array    *\n");
    printf("*  3.Modify any number in the array      *\n");
    printf("*  4.Search any number in the array      *\n");
    printf("*  5.Sort the array                      *\n");
    printf("------------------------------------------\n");

    int opp;
    printf("Enter the operation: ");
    scanf("%d", &opp);
    switch (opp)
    {
    case 1:
        insert(arr, size);
        break;
    case 2:
        delete (arr, size);
        break;
    case 3:
        modify(arr, size);
        break;
    case 4:
        printf("\nSelect the search opperation you want to perform on given array\n");
        printf("--------------------\n");
        printf("| 1.Linear Search  |\n");
        printf("| 2.Binary Search  |\n");
        printf("--------------------\n");
        int searchopp;
        scanf("%d", &searchopp);
        switch (searchopp)
        {
        case 1:
            linear_search(arr, size);
            break;
        case 2:
            binary_search(arr, size);
            break;
        default:
            printf("\nPlease enter the correct choice\n");
            break;
        }
        break;
    case 5:
        printf("\nSelect the sort opperation you want to perform on given array\n");
        printf("|------------------|\n");
        printf("| 1.Bubble sort    |\n");
        printf("| 2.Insertion sort |\n");
        printf("| 3.Selection sort |\n");
        printf("|------------------|\n");
        int sortopp;
        scanf("%d", &sortopp);
        switch (sortopp)
        {
        case 1:
            bubble_sort1(ptr, size);
            break;
        case 2:
            insertion_sort(arr, size);
            break;
        case 3:
            selection_sort(arr, size);
            break;
        default:
            printf("Please enter the a valid choice ");
            break;
        }
    }
}
