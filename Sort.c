#include <stdio.h>
void bubble_sort(int a[], int n) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) {   
        for (j = 0; j < n - i - 1; j++) { 
            if (a[j] > a[j + 1]) { 
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
void heap_sort() {
    for (int i = MAX_SIZE / 2 - 1; i >= 0; i--)
        heap_adjust(MAX_SIZE, i);

    for (int i = MAX_SIZE - 1; i >= 0; i--) {
        //Swapping Values 
        t = arr_sort[0];
        arr_sort[0] = arr_sort[i];
        arr_sort[i] = t;
        heap_adjust(i, 0);

        printf("\nHeap Sort Iteration %d : ", i);
        for (a = 0; a < MAX_SIZE; a++) {
            printf("\t%d", arr_sort[a]);
        }
    }
}

void heap_adjust(int n, int i) {
    int large = i, left = 2 * i + 1, right = 2 * i + 2;

    if (left < n && arr_sort[left] > arr_sort[large])
        large = left;

    if (right < n && arr_sort[right] > arr_sort[large])
        large = right;

    if (large != i) { 
        t = arr_sort[i];
        arr_sort[i] = arr_sort[large];
        arr_sort[large] = t;
        heap_adjust(n, large);
    }
}
void quicksort(int number[25], int first, int last) {
    int i, j, pivot, temp;
    if (first < last) {
        pivot = first;
        i = first;
        j = last;
        while (i < j) {
            while (number[i] <= number[pivot] && i < last)
                i++;
            while (number[j] > number[pivot])
                j--;
            if (i < j) {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        quicksort(number, first, j - 1);
        quicksort(number, j + 1, last);
    }
}
int main() {
  int a[100], n, i, d, swap;
  printf("Enter number of elements in array:\n");
  scanf("%d", &n); 
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  bubble_sort(a, n);
  printf("Printing the sorted array:\n");
  for (i = 0; i < n; i++)
     printf("%d\n", a[i]);
  return 0;
}
