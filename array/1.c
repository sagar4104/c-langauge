#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];
    int i = 0;

    printf("Enter the elements:\n");
    while (i < N) {
        scanf("%d", &arr[i]);
        i++;
    }

    printf("The elements you entered are:\n");
    i = 0;
    while (i < N) {
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}
