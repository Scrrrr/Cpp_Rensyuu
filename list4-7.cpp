#include<iostream>
#include<typeinfo>

using namespace std;

int main(void)
{
		cout << "文字リテラルaの型:" << typeid('A').name() << '\n';
		cout << "文字リテラル1の型:" << typeid(1).name() << '\n';
		cout << "文字リテラル1.2の型:" << typeid(1.2).name() << '\n';
		cout << "文字リテラルAhahaの型:" << typeid("hoge").name() << '\n';
		cout << "文字リテラルあ！の型:" << typeid("あ！").name() << '\n';
		cout << "文字リテラル💛の型:" << typeid("💛").name() << '\n';

		cout << "A * 2 = " << 'A' * 2 << '\n';



}
