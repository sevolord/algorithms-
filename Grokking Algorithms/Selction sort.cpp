#include <iostream>
#include <algorithm>

using namespace std;

void swap(int* a, int* b) // меняем местами указатели
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) 
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) //перебираем все элементы кроме последнего 
    {
        min_idx = i;    //берем текущий элемент
        for (j = i + 1; j < n; j++) // проходим по массиву начиная с текщего места + 1
            if (arr[j] < arr[min_idx])  // находим минимальное значение 
                min_idx = j;    // запоминаем его индекс
        swap(&arr[min_idx], &arr[i]);   // меняем местами значения текущего и минимального 
    }
}

int main() {
    int arr[] = {24, 5, 6, 79, 125, 6};
    int n = size(arr);
    selectionSort(arr, n);
    for (int i = 0; i < n; i++) 
        std::cout << arr[i] << " ";
   
    return 0;
}
