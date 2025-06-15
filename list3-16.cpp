#include<iostream>

using namespace std;

int main(void)
{
				int x;

				cout << "右下直角の二等辺三角形を表示します。\n";
				cout << "段数は:"; cin >> x;
				
				for(int i = 1; i <= x; i++)
				{
								for(int j = 1; j <= i; j++)
												cout << "*";
								cout << "\n";
				}

}
