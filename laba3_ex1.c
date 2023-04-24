#include <stdio.h>
#include <string.h>

// функция сортировки выбором
void selectionSort(char arr[][100], int n) {
    int i, j, min_idx;

    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (strcmp(arr[j], arr[min_idx]) < 0)
                min_idx = j;

        if (min_idx != i) {
            char temp[100];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min_idx]);
            strcpy(arr[min_idx], temp);
        }

        // вывод текущего состояния массива
        printf("Selection sort, iteration %d: ", i+1);
        for (int k = 0; k < n; k++)
            printf("%s ", arr[k]);
        printf("\n");
    }
}

// функция сортировки пузырьком
void bubbleSort(char arr[][100], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                char temp[100];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }

        // вывод текущего состояния массива
        printf("Bubble sort, iteration %d: ", i+1);
        for (int k = 0; k < n; k++)
            printf("%s ", arr[k]);
        printf("\n");
    }
}

// функция сортировки расчёской
void combSort(char arr[][100], int n) {
    int gap = n;
    float shrink = 1.3;
    int sorted = 0;
    while (!sorted) {
        gap = (int)(gap / shrink);
        if (gap > 1) {
            sorted = 0;
        } else {
            gap = 1;
            sorted = 1;
        }

        int i = 0;
        while (i + gap < n) {
            if (strcmp(arr[i], arr[i+gap]) > 0) {
                char temp[100];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[i+gap]);
                strcpy(arr[i+gap], temp);
                sorted = 0;
            }
            i++;
        }

        // вывод текущего состояния массива
        printf("Comb sort, gap %d: ", gap);
        for (int k = 0; k < n; k++)
            printf("%s ", arr[k]);
        printf("\n");
    }
}

int main() {
    char arr[10][100];
    printf("Enter 10 words:\n");
    for (int i = 0; i < 10; i++)
        scanf("%s", arr[i]);

    // вызов функций сортировки
    selectionSort(arr, 10);
    bubbleSort(arr, 10);
    combSort(arr, 10);

    return 0;
}