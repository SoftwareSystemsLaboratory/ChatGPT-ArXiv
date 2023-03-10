#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return (*(int*)b - *(int*)a);
}

int main() {
    FILE *fp;
    int *nums;
    int count = 0, max_nums = 1000;

    // Open the file
    fp = fopen("numbers.txt", "r");

    // Allocate memory for the array
    nums = malloc(max_nums * sizeof(int));

    // Read the numbers from the file
    while (fscanf(fp, "%d", &nums[count]) != EOF) {
        count++;
        if (count >= max_nums) {
            // Resize the array if it is full
            max_nums *= 2;
            nums = realloc(nums, max_nums * sizeof(int));
        }
    }

    // Sort the numbers in descending order
    qsort(nums, count, sizeof(int), cmpfunc);

    // Print the third largest number to the screen
    if (count >= 3) {
        printf("The third largest number is: %d\n", nums[2]);
    } else {
        printf("There are not enough numbers in the file to find the third largest.\n");
    }

    // Free the memory used by the array
    free(nums);

    // Close the file
    fclose(fp);

    return 0;
}
