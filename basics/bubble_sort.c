#include <stdio.h>

/**
 * @file bubble_sort.c
 * @author Hesam Abdolhosseini
 * @brief Bubble sort demonstration with array printing.
 *
 * Written for teaching associate students and portfolio demonstration.
 */

// Bubble Sort: ساده‌ترین الگوریتم مرتب‌سازی برای آموزش


// Function Prototype
void printArray(int array[], int size);
void bubbleSort(int array[], int size);
void swap(int array[], int i, int j);

int main(void)
{
    // Sample data array
    int array[] = {10,98,25,68,41,23,87,78,54,62,17,18,19,39,65,15,20,44,60,69,84,55,73};
    int size = sizeof(array) / sizeof(array[0]);

    // Display the array before sorting
    printf("Array before sorting:\n");
    printArray(array, size);
    printf("\n");

    // Sort the array using bubble sort
    bubbleSort( array,  size);

    // Display the array after sorting
    printf("Array after sorting:\n");
    printArray(array, size);
    printf("\n");

    // Wait for user input before exiting
    printf("\nPress Enter to exit...");
    getchar();

    return 0;
}

/**
 * @brief Prints the elements of an array
 * 
 * @param array The array to print.
 * @param size Number of elements in the array.
 */
void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++){
        printf("%d", array[i]);
        if(i < size - 1){
            printf(", ");
        }
    }
}

/**
 * @brief Sorts an array using the bubble sort algorithm.
 * 
 * @param array The array to sort.
 * @param size Number of elements in the array.
 */
void bubbleSort(int array[], int size)
{
    for(int i = 0; i < size -1 ; i++) {
        int swapped = 0;
        for(int j = 0; j < size -i - 1; j++) {
            if(array[j] > array[j+1]) {
                swap(array, j, j+1);
                swapped = 1;
            }
        }
        if(!swapped) {
            break; // stop early if no swaps were made
        }
    }
}

/**
 * @brief Swaps two elements in an array.
 * 
 * @param array The array containing the elements to swap.
 * @param i Index of the first element.
 * @param j Index of the second element.
 */
void swap(int array[], int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;

}