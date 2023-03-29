#include <iostream> 

using namespace std;

float TinhSn(float x, int n)
{	
	if(n == 0)
		return 0;
	if(n == 1)
		return x;
	return (1 + x/n) * TinhSn(x, n - 1) - (x/n) * TinhSn(x, n - 2);
	}
	
int main()
{
	float x;
	int n;
	cout << "\nNhap x: "; 
	cin >> x;
	cout << "\nNhap n: ";
 	cin >> n;
	cout << "\nKet qua = " <<TinhSn(x, n) << endl;
	return 0;
}

