#include <iostream>

struct Array 
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array a)
{
    std::cout<<"Elements are " << std::endl;
    for(int i = 0; i < a.length; i++)
        std::cout<<a.A[i] << " ";
}

void Append(struct Array *arr, int x)
{
    if(arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void Insert(struct Array *arr, int index, int x)
{
    if(index >= 0 && index <= arr->length)
    {
        for(int i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i-1];
        arr->A[index] = x;
        arr->length++;
    }
}

int Delete(struct Array *arr, int index)
{
    if(index >= 0 && index <= arr->length)
    {
        int x = arr->A[index];
        for(int i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int key)
{
    for(int i = 0; i < arr->length ; i++)
    {
        if(key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

int BinarySearch(struct Array arr, int key)
{
    int l, h, mid;
    l = 0;
    h = arr.length - 1;
    while(l <= h)
    {
        mid = (l+h)/2;
        if(key == arr.A[mid])
            return mid;
        else if(key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int RecursionBinarySearch(int arr[], int l, int h, int key)
{
    int mid;
    if(l <= h)
    {
        mid = (l + h)/2;
        if(key == arr[mid])
            return mid;
        else if (key < arr[mid])
            return RecursionBinarySearch(arr, l, mid - 1, key);
        else
            return RecursionBinarySearch(arr, mid + 1 ,h, key);
    }
    return -1;
}

void InsertSorted(struct Array *arr, int x)
{
    int i = arr->length - 1;
    while( i >= 0 && arr->A[i] > x )
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
    return;
}

void Rearrange(struct Array *arr)
{
    int i = 0;
    int j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0) i++;    // Di chuyển i nếu phần tử âm
        while (arr->A[j] >= 0) j--;   // Di chuyển j nếu phần tử dương
        if (i < j) swap(&arr->A[i], &arr->A[j]); // Hoán đổi khi i < j
    }
}

struct Array *Merge (struct Array *arr1, struct Array *arr2)
{
    struct Array *arr3 = new Array[sizeof(struct Array)];

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < arr1->length && j < arr2->length)
    {
        if(arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for(; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    for(; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    return arr3;
}

struct Array *Union (struct Array *arr1, struct Array *arr2)
{
    struct Array *arr3 = new Array[sizeof(struct Array)];

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            arr3->A[k++] = arr2->A[j++];
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    for(; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    for(; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

struct Array *Intersection (struct Array *arr1, struct Array *arr2)
{
    struct Array *arr3 = new Array[sizeof(struct Array)];

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            i++;
        else if (arr2->A[j] < arr1->A[i])
            j++;
        else if (arr2->A[j] == arr1->A[i])
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

struct Array *Difference (struct Array *arr1, struct Array *arr2)
{
    struct Array *arr3 = new Array[sizeof(struct Array)];

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            j++;
        }
        else
        {
            j++;
            i++;
        }
    }
    for(; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

int main()
{
    // struct Array arr = {{2, -3, 25, 10, -15, -7}, 10, 6};
    // Append(&arr, 12);
    // Insert(&arr, 3, 99);
    // std::cout << LinearSearch(&arr, 2) << std::endl;
    // std::cout << Delete(&arr, 2) << std::endl;
    // std::cout << BinarySearch(arr, 4) << std::endl;
    // std::cout << RecursionBinarySearch(arr.A, 0, arr.length - 1, 4) << std::endl;
    // InsertSorted(&arr, 0);
    // std::cout << arr.length << std::endl;
    // Rearrange(&arr);

    struct Array arr1 = {{1, 3, 5, 6}, 10 , 4};
    struct Array arr2 = {{0, 3, 4, 6, 9}, 10 , 5};
    struct Array *arr3;
    arr3 = Difference(&arr1, &arr2);
    Display(*arr3);
    return 0;
}