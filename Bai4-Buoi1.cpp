/*
 Viet hàm tính so hang thu n cua hai dãy sau:
       X(0) = 1
       Y(0) = 0
       X(n) = x(n – 1) + y(n – 1) (n > 0)
       Y(n) = 3 * x(n – 1) + 2 * y(n – 1) (n > 0)
*/
#include <iostream>
using namespace std;

long tinhXn(int n)
{
    if(n == 0)
        return 1;
    long s = 0;
    for(int i = 1; i <= n; i++)
    {
        s = s + i * i * tinhXn(n - i);
    }
    return s;
}
int main()
{
    int n;
   	cout <<"\nNhap n : "; 
   	cin >> n;
	long s = tinhXn(n);
	cout << " Ket qua = " << s;
    return 0;
}
