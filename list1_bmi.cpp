#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double height;
  double weight;
  double bmi;

  cout << "身長(m)を入力してください" << endl;
  cin >> height;

  cout << "体重(kg)を入力してください" << endl;
  cin >> weight;

  bmi = weight / height / height;

  cout << "あなたのBMIは" << fixed << setprecision(1) << bmi << "です" << endl;


  return 0;
}
