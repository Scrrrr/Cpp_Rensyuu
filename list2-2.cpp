#include<iostream>

using namespace std;

int main(void)
{
	int n;

	cout << "整数:";
	cin >> n;

	if(n > 0)
		cout << "その値は正です。\n";
	else
		cout << "その値は0か負です。\n";
}
