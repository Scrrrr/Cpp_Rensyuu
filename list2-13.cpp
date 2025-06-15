#include <iostream>

using namespace std;

int main(void)
{
	int a,b;
	int max,min;

	cout << "整数a:";  cin >> a;
	cout << "整数b:";  cin >> b;
	
	if(a > b)
	{
		max = a;
		min = b;
	}else{
		max = b;
		min = a;
	}

	cout << "小さい方の値は" << min << "です。\n";
	cout << "大きい方の値は" << max << "です。\n";
}
	
