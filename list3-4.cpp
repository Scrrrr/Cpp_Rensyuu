#include <iostream>
#include <string>
using namespace std;

int main(void){
    int channel;
    string stationName;

    cout << "チャンネル番号をニュ力してください" << endl;
    cin >> channel;

    // テレビ局をstaionNameに格納する
    switch (channel){ 
        case 1:
            stationName = "NHK総合";
            break;
        case 2:
            stationName = "NHK Eテレ";
            break;
        case 3:
            stationName = "日本テレビ";
            break;
        case 4:
            stationName = "テレビ朝日";
            break;
        case 5:
            stationName = "TBSテレビ";
            break;
        case 6:
            stationName = "フジテレビ";
            break;
        case 7:
            stationName = "テレビ東京";
            break;
        default:
            stationName = "割り当てなし";
            break;
    }

    cout << stationName << endl;

    return 0;

    
}