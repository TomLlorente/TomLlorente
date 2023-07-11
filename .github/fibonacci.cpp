#include <iostream>

using namespace std;

// Funcion de fibonacci que calcula n-esimo termino
int fibonacci(int n){
    
	int fn = 0;
	if ( 0 <= n )
	{
		if (n == 0 || n == 1)
		{
			fn = n;
		}
		else 
			fn = fibonacci( n-1 ) + fibonacci( n-2 );
	}
	else
		fn = -1;
	
    return fn;
}
int main() 
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;    
    return 0;
}