#include <iostream>
//#include <cstring>
using namespace std;

int main()
{
	char st[] = " JavaTpoint ";
	char ch;
	cout << " Printing the given string : " << st << endl;
	cout << " Enter an alphabet  : ";
	cin >> ch;
	memset(st, ch, sizeof(st));
	cout << " Printing the string after replacing the each character of the string with the given substitute : " << endl;
	cout << " " << st;
	return 0;
}ven substitute : " << endl ;  
    cout << " " << st ;  
    return 0 ;  
}  