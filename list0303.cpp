#include<iostream>

using namespace std;

int main(void)
{
				cout << "数あてゲーム開始\n";
				cout << "0~99の数を当ててください。\n";

				int num;
				int SetNumber = 49;

				do{
								cout << "いくつかな:";
								cin >> num;

								if(num < SetNumber)
												cout << "もっと大きい数字だよ\n";
								else if(num > SetNumber)
												cout << "もっと小さい数字だよ\n";
				}while(num != SetNumber);

				cout << "おめでとうございます！\n";
}

