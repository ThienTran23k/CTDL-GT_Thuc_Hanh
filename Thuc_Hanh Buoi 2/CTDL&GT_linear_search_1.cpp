// Code from https://nguyenvanhieu.vn
 // Cai dat linear search
 
int search(int arr[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (arr[i] == x)

      return i;

  return -1;
}
