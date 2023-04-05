// Nguon : https://nguyenvanhieu.vn

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);

        // Sap xep 2 mang con trai phai
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
