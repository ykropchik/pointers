#include <iostream>
/*
 * ������� ���-�� ������⮢ ���ᨢ� � ���짮��⥫�
 * ������� �㬬�
 * �뢥��
 */

using namespace std;

unsigned int n = 0;
int summ = 0;
int *pointer = nullptr;

int main() {
    /* ����� ������⮢*/
    cout << "������ ���-�� ������⮢ ���饣� ���ᨢ�: \n";
    cin >> n;

    /*�������� ���ᨢ� � ����� i-�� �������*/
    pointer = new int[n];

    for (unsigned int i = 0; i < n; i++){
        cout << "������ " << (i + 1) << " ��������� \n";
        cin >> pointer[i];
    }

    /*�뢮� �⮣����� ���ᨢ�*/
    for (unsigned int i = 0; i < n; i++){
        cout << pointer[i] << " ";
    }
    cout << "\n";

    /*������ �㬬� � �뢮� �⢥�*/
    for (unsigned int i = 0; i < n; i++){
        summ += pointer[i];
    }
    cout << "�㬬� ��� ������⮢ ���ᨢ� = " << summ;

    return 0;
}