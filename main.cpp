#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;

/* Display array */
void displayArray(int *arr, int total)
{
    int i = 0;
    while (i < total)
    {
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
}

/* Moves all zeros in the array to the end. Uses no
   extra space and does the operation in O(n) */
void moveZerosToEnd(int *arr, int len)
{
    /* Keeps track of zeros */
    int count = 0;

    int i = 0;
    int j = 0;

    while (i < len)
    {
        if (arr[i] == 0)
        {
            count++;
        }
        else
        {
            arr[j] = arr[i];
            j++;
        }

        i++;
    }

    while (count != 0)
    {
        arr[j] = 0;
        j++;
        count--;
    }
}

/* MAIN */
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Enter atleast 1 value in command line argument!\n");
        return 0;
    }

    int i = 0;
    int total = argc - 1;
    int arr[total];
    memset(arr, 0, total);

    while (i < total)
    {
        arr[i] = atoi(argv[i+1]);
        i++;
    }

    cout<<"Initial: "<<endl;
    displayArray(arr, total);
    moveZerosToEnd(arr, total);
    cout<<"\nAfter pushing all zeros to end:"<<endl;
    displayArray(arr, total);

    return 0;
}
