#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#pragma warning(disable:4996)
using namespace std;
#include <iomanip> 
int main()
{
    //��ȡ����û���кź��кŵľ���1 2 3 
                             //4 5 6
                             //7 8 9
    /*vector<vector<int>> arr;
    string input;
    while (getline(cin, input)) {
        if (input.size() > 0) {
            stringstream stringin(input);
            int num;
            vector<int> a;
            while (stringin >> num) {
                a.push_back(num);
            }
            arr.push_back(a);
        }
    }*/

    //���������д��������źͶ���
    /*vector<vector<int>> arr;
    string input;
    char *tok;
    while (getline(cin, input))
    {
        if (input.size() > 0)
        {
            vector<int> a;
            tok = strtok((char*)input.c_str(), " ,[]");
            while (tok != NULL)
            {
                a.push_back(stoi(tok));
                tok = strtok(NULL, " ,[]");
            }
            arr.push_back(a);
        }
    }*/

    //��ȡ�����ַ���
    /*vector<vector<char>> arr;
    string input;
    while (getline(cin, input))
    {
        if (input.size() > 0)
        {
            vector<char> a;
            for (int i = 0; i < input.size(); i++)
            {
                a.push_back(input[i]);
            }
            arr.push_back(a);
        }
    }*/
    double number = 3.14159265359;

    // ʹ�� std::setprecision �������������Ϊ2λС��
   cout <<setprecision(2) << number << endl;
   float num1 = 3.14159265359;
   double num2 = 3.14159265359;

   // ʹ��%.2f�����Ƹ������ľ���Ϊ2λС��
   printf("������1: %.3f\n", num1);
   printf("������2: %.2f\n", num2);

   int num = 1225225;

   // ʹ��%d��%5d�����������Ŀ��Ϊ5λ
   printf("����: %5d\n", num);


    return 0;
}