#include "dk_tool.h"

#define MAX_NUMBER 4        // � ��������� ���� �������, ����� :)
#define OCT 8           // ��������� ����� ��� ������� ������������ ������

int i, dec, num;        // ����� �� �������� ���� � ��������� ����(�� ����� �� ������� � ��� ���� �������� ������� ������� � "���������")

int limonchik(char* arr)        // ���� ������� ��� ������ ����� arr (���������� �� array)
{
    for (i = 0; i < 5; i++)     // ��� ����� �������� ���� �������� �� ������ ���� ��� (���. 59 ������)
    {
        if (arr[i] == 10) {
            num = i;
            
        }
    }
    for (i = 0; i < MAX_NUMBER; i++)
    {
        switch (arr[i])
        {
        case 0:
            arr[i] = 0;
            break;
        case 10:
            arr[i] = 0;
            break;
        case '0':
            arr[i] = 0;
            break;
        case '1':
            arr[i] = 1;
            break;
        case '2':
            arr[i] = 2;
            break;
        case '3':
            arr[i] = 3;
            break;
        case '4':
            arr[i] = 4;
            break;
        case '5':
            arr[i] = 5;
            break;
        case '6':
            arr[i] = 6;
            break;
        case '7':
            arr[i] = 7;
            break;
        default:
            printf("������� �������� � ������������ ������� ����������!\n");
            return -1;      // �� ������ �� ���������� ��'������ �������� ������ ������� ��� � � ������ ��������� -1
            break;
        }
    }
    switch (num)            // ��� ���� ���� ���������� �������, ���� �������� ��� ��������� �� ����� ������ ��� ��� � ����� ���� 2-� �� 3-� ������ ����� ������� ����� 0 (���������: 0254(� ��������� ������ �� 172, ������� � ���� �������), � ��� ������� ����� ������� ������ 254 ������� ��������� �� 12 �������)
    {
        case 1:
            dec = arr[0] * 1;
            break;
        case 2:
            dec = (arr[0] * OCT) + arr[1] * 1;
            break;
        case 3:
            dec = (arr[0] * OCT * OCT) + (arr[1] * OCT) + arr[2] * 1;
            break;
        case 0:
            dec = (arr[0] * OCT * OCT * OCT) + (arr[1] * OCT * OCT) + (arr[2] * OCT) + arr[3] * 1;      // ������� ������� ���� ������ ������� ��ﳿ
            break;
    default:
        break;
    }
    return dec;     // ������� ������� ���� int - ���� ������� ������� ����� � ��������� ����
}
