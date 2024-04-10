#include<iostream>
using namespace std;

int main(void)
{
    int step;
    int num;

    for(step = 1; step <= 9; step++)
    {
        cout << step << "の段:\t";//printf("%dの段\t",step);
        for(num = 1; num <= 9; num++)
        {
            cout << (step * num) << '\t'; //printf("%d\t",step*num);
        }

        cout << endl; //printf("\n");
    }
}