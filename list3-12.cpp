#include<iostream>
using namespace std;

int main(void)
{
    const int DATA_NUM = 10;

    int point[DATA_NUM] = {85,72,63,45,100,98,52,88,74,65};
    int i;

    for(i = 0; i < DATA_NUM; i++ )
    {
        if(point[i] < 60)
        {
            cout << "不合格" << endl;
            continue;
        }
        
        if(80 <= point[i])  cout << "A" <<endl;
        else if(70 <= point[i]) cout << "B" << endl;
        else cout << "C" << endl;
    }

    return 0;
}