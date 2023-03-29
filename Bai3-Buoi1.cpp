// Viet hàm tính so hang thu n cua hai dãy sau:
//      X(0) = 1
//      Y(0) = 0
//      X(n) = x(n – 1) + y(n – 1) (n > 0)
//     Y(n) = 3 * x(n – 1) + 2 * y(n – 1) (n > 0) 

#include <iostream>
using namespace std;

long tinhXn(int);
long tinhYn(int);

long tinhXn(int n)
{
    if(n == 0)
        return 1;
    return tinhXn(n - 1) + tinhYn(n - 1);
}

long tinhYn(int n)
{
    if(n == 0)
        return 0;
    return 3*tinhXn(n - 1) + 2*tinhYn(n - 1);
}
int main()
{
    int n;
    cout<< "\nNhap n : "; 
	cin >> n ;
    long kq1 = tinhXn(n);
    long kq2 = tinhYn(n);
    cout <<"\nX(n) = "<< kq1 <<endl; 
	cout << "Y(n) = "<<kq2 << endl ;
    return 0;
}
