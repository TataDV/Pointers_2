/*Щигарцова Татьяна группа БВ215
 * Задание 2. Написать функцию, которая получает указатель на динамический массив и его размер. Функция
должна удалить из массива конкретное число и вернуть
указатель на новый динамический массив.*/

#include <iostream>
using namespace std;

int* DeleteArrayKey (int* source, int* size, int key){
    int new_size = 0; // верно??
    int* temp = new int [new_size];
    for (int i = 0, j = 0; i < *size; ++i){
        if (source [i] == key) continue;
            temp [j] = source [i];
            j++;
            new_size++; // верно???
    }
    *size = new_size;
    return temp;
}

//Функция вывода массива на экран

void PrintArray (int* arr, int size){
    cout << "{ ";
    for (int i = 0; i < size; ++i){
        cout << *(arr + i) << " ";
    }
    cout << "}" << endl;
}

int main() {
    int size = 10;
    int* arr = new int[10] {10, 20, 30, 40, 50, 10, 20, 10, 30, 50};
    PrintArray(arr, size);
    arr = DeleteArrayKey(arr, &size, 10);
    PrintArray(arr, size);

    return 0;
}
