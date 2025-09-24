#include <stdio.h>

/**
 * @file divisors.c
 * @author Hesam Abdolhosseini
 * @brief Receives a number from the user and displays a list of the divisors of that number.
 *
 * Written for teaching associate students and portfolio demonstration.
 */

// divisors نمایش مجموعه مقسوم علیه های یک عدد


// Function prototype
int totalDivisors(int userInput);
void initiateArray (int array[], int size);
void getDivisors(int zeroArray[], int userInput);
void printArray(int array[], int size);

int main(void)
{
    int userInput = 0;
    printf("Please enter an integer to calculate all its divisors:\n");
    scanf("%d", &userInput);

    int size = totalDivisors(userInput);
    printf("Total divisors of %d is %d.\n", userInput, size);

    // Create array with exact size based on number of divisors
    int array[size];
    initiateArray(array, size);
    getDivisors(array, userInput);
    printArray(array, size);

    return 0;
}

/**
 * @brief Count the divisors.
 * @param userInput Integer entered by user.
 * @return The total number of divisors.
 */
int totalDivisors(int userInput)
{
    if(userInput == 0) {
        return 0;
    }
    if(userInput < 0) {
        userInput = -userInput;
    }
    int counter = 0;
    for(int i = 1; i <= userInput; i++) {
        if(userInput % i == 0) {
            counter ++;
        }
    }
    return counter;
}

/**
* @brief Initiate the array elements with zero.
* @param array The array to initiate.
* @param size Number of elements in the array.
*/
void initiateArray (int array[], int size)
{
    for(int i = 0; i < size; i++) {
        array[i] = 0;
    }
}

/**
 * @brief Fills the array with all divisors of the input number.
 * @param zeroArray The initiated array with zero.
 * @param userInput Integer entered by user.
 */
void getDivisors(int zeroArray[], int userInput)
{
    if(userInput == 0) {
        zeroArray[0] = 0;
    }
    // Handle negative input
    else if(userInput < 0) {
        userInput = -userInput;
        int j = 0;
        for(int i = 1; i <= userInput; i++) {
            if(userInput % i == 0) {
                zeroArray[j] = -i;
                j++;
            }
        }
    }
    else{
        int j = 0;
        for(int i = 1; i <= userInput; i++) {
            if(userInput % i == 0) {
                zeroArray[j] = i;
                j++;
            }
        }
    }
}

/**
* @brief Show the array elements in output.
* @param array The array to print.
* @param size Number of elements in the array.
*/
void printArray(int array[], int size)
{
    printf("{");
    for(int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if(i < size - 1) {
            printf(", ");
        }
    }
    printf("}");
}