#include "vector.hpp"

void MyVector::vector_new (size_t sz)
{
    arr = new int[sz];
    MyVector::size = 0;
    MyVector::capacity = sz;
}

void MyVector::vector_delete()
{
    delete[] MyVector::arr;
}

void MyVector::vector_push_back(int n)
{
    MyVector::size++;
    int* arr_temp;
    if (MyVector::size == MyVector::capacity){
        MyVector::capacity *= 2;
        arr_temp = new int[MyVector::capacity];
        arr_temp[size] = n;
        for (int i = 0; i < MyVector::size; i++) {
            arr_temp[i] = MyVector::arr[i];
        }
        MyVector::arr = arr_temp;
    }
    
    MyVector::arr[size-1] = n;
}

void MyVector::vector_pop_back()
{
    int* temp_arr;
    int size_temp = MyVector::size--;
    temp_arr = new int[size_temp];

    for (int i = 0; i < size_temp; i++) {
        temp_arr[i] = MyVector::arr[i];
    }

    MyVector::arr = temp_arr;
}

int& MyVector::vector_front()
{
    return MyVector::arr[0];
}
int& MyVector::vector_back()
{
    return MyVector::arr[size - 1];
}


size_t MyVector::vector_size() 
{
    return MyVector::size;
}


void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}