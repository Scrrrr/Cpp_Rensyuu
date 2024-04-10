#include<iostream>
using namespace std;

int main(void)
{
    int money;
    int price;

    //預金の初期値を10000円とする
    money = 10000;

    while(true)
    {
        cout << "預金：" << money << "円" << endl;


        // 買い物した金額を入力する
        cout << "買い物した金額：" << endl;
        cin >> price;
        
        money = money - price;

        if(money < 0){
            cout << "もう駄目です！" << endl;
            break;
        }
    }

}