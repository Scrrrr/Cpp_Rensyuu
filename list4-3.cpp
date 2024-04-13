#include<iostream>
using namespace std;

double getBMI(double height, double weight);

int main(void)
{
    double height;
    double weight;
    double bmi;

    cout << "身長(cm)を入力してください" << endl;
    cin >> height;

    cout << "体重を入力してください" << endl;
    cin >> weight;

    bmi = getBMI(height,weight);

    cout << "あなたのBMIは" << bmi << "です" << endl;

    return 0;

}