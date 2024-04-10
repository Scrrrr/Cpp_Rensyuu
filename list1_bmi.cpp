#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double height;
  double weight;
  double bmi;
  double stdWeight;
  const int STD_BMI = 22; //標準BMI

  cout << "身長(m)を入力してください" << endl;
  cin >> height;

  cout << "体重(kg)を入力してください" << endl;
  cin >> weight;

  bmi = weight / height / height;
  stdWeight = STD_BMI * height * height; 

  cout << "あなたのBMIは" << fixed << setprecision(1) << bmi << "です" << endl;
  cout << "あなたの標準体重は" << fixed << setprecision(1) << stdWeight << "Kgです" << endl;

  if (bmi >= 25.0)
  {
    cout << "肥満です" << endl;
  }else{
    cout << "肥満ではありません" << endl;
  }

  return 0;
}

