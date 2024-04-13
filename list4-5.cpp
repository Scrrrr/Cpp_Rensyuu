#include <iostream>
#include "list4-4.h"
using namespace std;

int main(void)
{
    double height;
    double weight;
    double bmi;

    cout << "身長(cm)を入力してください:";
    cin >> height;

    cout << "体重を入力してください:";
    cin >> weight;

    bmi = getBMI(height,weight);

    cout << "あなたのBMIは" << bmi << "です" << endl;

    return 0;

}