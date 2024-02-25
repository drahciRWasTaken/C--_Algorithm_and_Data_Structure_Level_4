#include "stdio.h"

template <typename T>
class Array
{
private:
    T *ptr;
    int size;

public:
    Array(T arr[], int s);
    ~Array();
    T operator[](int i);
    T GetMax();
};

template <typename T>
Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}
template <typename T> Array<T>::~Array()
{
    delete[] ptr;
}

template <typename T>
T Array<T>::operator[](int i)
{
    return ptr[i];
}

template <typename T>
T Array<T>::GetMax() {
    T max = ptr[0];
    for(int i = 0; i < size;i ++) {
        if (max < ptr[i]) {
            max = ptr[i];
        }
    }
    return max;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    Array<int> a(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int max = a.GetMax();
    printf("max is %d", max);
}

