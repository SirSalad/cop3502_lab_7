#include <stdio.h>

void bubbleSort(int receiver[], int size) {
    int swaps = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (receiver[j] > receiver[j + 1]) {
                int temp = receiver[j];
                receiver[j] = receiver[j + 1];
                receiver[j + 1] = temp;
                swaps++;
            }
        }
        printf("%d ", swaps);
        swaps = 0;
    }

    puts("");
}

int main(void) {
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}
