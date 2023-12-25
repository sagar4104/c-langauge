#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }

    float average = (float)sum / length;

    printf("The average of the array is: %.2f\n", average);

    return 0;
}