#include "Headlines.h"

int main()
{
    StringAnalyzer obj1("SomeText.txt");
    
    /*������� 1:
    ��� ��������� ����.� ����� ���������� Unicode - �������.�����
    ����� ����� ������� ������, ����� �������� ������, ������� �����
    ������.*/

    WordsCounter obj2("SomeText.txt");

    /*������� 2 :
    ��� ��������� ����.� ����� ���������� Unicode - �������.����������
    ���������� ����, ������������ � ��������, ������� �����
    ������������.*/

    RewriteUnicodeAnsi obj3;

    /*������� 3 :
    ��������� ����������� � ������������ ���� � ����� � ���������
    Unicode.����� ���� ��������� �������� ���������� ����� � �����
    ����, �������������� �������� ���������� � ������ ANSI.*/

    FruitsCounter obj4;

    /*������� 4 :
    ��������� ���������� �������� ������� � �����.�������� ������� �
    ���� � ����� ������������ ������ � ����������.�������� ������� �
    ���������� ����� � ������� Unicode.*/
    return 0;
}