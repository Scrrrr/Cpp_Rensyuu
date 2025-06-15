#include<iostream>

using namespace std;

int main(void)
{
	int a,b;

	cout << "変数a:"; cin >> a;
	cout << "変数b:"; cin >> b;

	if(a == b){
		cout << "二つの値は同じ\n";
	}else{
		if(b < a)
		{
			int tmp = b;
			b = a;
			a = tmp;
		}
		cout << "a<=bとなるようにソートしました。\n";
		cout << "変数aは" << a << "です。\n";
		cout << "変数bは" << b << "です。\n";
	}
}


