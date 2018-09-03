/* **************************************************************************

    * File Name : List_of_Conquests.cpp

    * Creation Date : 2018-09-01 11:10:26

    * Last Modified : 2018-09-03 10:39:15

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
#include <string> //getline()
#include <algorithm> //sort()
using namespace std;

int main()
{
    int count; //計算國家次數
    int numOfInput; //有幾項輸入值
    string inputCountryAry[2000]; //將輸入國家儲存於陣列中
    string name; //輸入的姓名

    cin >> numOfInput; //輸入有幾項輸入值
    for(int i = 0; i < numOfInput; i++)
    {
        cin >> inputCountryAry[i]; //僅將國家儲存至陣列中
        getline(cin, name); //輸入姓名，因姓名有空格，故使用getline
    }
    sort(inputCountryAry , inputCountryAry + numOfInput); //將inputCountryAry排序
    for(int j = 0; j < numOfInput; j++)
    {
        count = 0; //每次歸零
        cout << inputCountryAry[j]; //印出國家名
        for(int k = 0; k < numOfInput; k++)
            //一ㄧ比對是否相同，若相同則加1
            if(inputCountryAry[j] == inputCountryAry[k])
            {
                count++;
                j = k;
            }
        cout << " " << count << endl; //印出次數
    }
    return 0;
}
