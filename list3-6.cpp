#include <iostream>
using namespace std;

int main(void)
{
    const char RIGHT_ANS = 'c';
    char ans;

    while (1)
    {
        cout << "〚問題〛　日本で一番長い川は？" << endl;
        cout << "a. 利根川　　b.石狩川　　c.信濃川" << endl;

        cout << "回答：";
        cin >> ans;

        if(ans == RIGHT_ANS)
        {
            cout << "正解！" << endl;
            break;
        }
    }
    
}