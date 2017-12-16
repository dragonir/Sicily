#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
	if (n <= 1) return false;
	float k = sqrt(float(n));
	for (int i = 2; i <= k;i++)
	if (n%i == 0)return false;
	return true;	
}
int main()
{
	int n; cin >> n;
	while (n--){
		int m; cin >> m;
		if (isPrime(m))
			cout << m <<" " <<"0" << endl;
		else{
			int l = m - 1, r = m + 1, d = 1;
			while (1)
			if (isPrime(l)){
				cout << l <<" "<< d << endl; break;
			}
			else if (isPrime(r)){
				cout << r << " "<<d << endl; break;
			}
			else
			{
				l--; r++; d++;
			}

		}

	}return 0;
}
