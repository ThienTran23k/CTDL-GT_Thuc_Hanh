#include<iostream>
#define MAX 50
using namespace std;

void nhapMang (float a[], int &n){
	do{
		cout << "\nNhap so phan tu de su dung : " ;
		cin >> n ;
		if(n <= 0 || n > MAX)
		{
			printf("\nHay nhap lai !");
		}
		}while(n <= 0 || n > MAX);
	
	for(int i = 0; i < n; i++)
	{
		cout << "\na[ " << i << " ] = ";
		cin >> a[i];
	}
}



void xuatMang(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "\n";
	}
}

int demsoDuong(float a[], int n)
	{
	if(n == 0)
		return 0;
	int dem = demsoDuong(a, n - 1);
	if(a[n - 1] > 0)
		dem++;
	return dem ;
	}
int main()
{
	int n;
	float a[MAX];
	nhapMang(a, n);
	xuatMang(a, n);
	int dem = demsoDuong(a, n);
	cout << "\n --> " <<dem <<  " so duong \n";
	return 0;
}

