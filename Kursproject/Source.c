#include <stdio.h> 
#define _USE_MATH_DEFINES
#include<math.h>
#include <locale.h>


void main() {
    setlocale(LC_ALL, "RUS");
    int gold = 0, silver = 0, bronse = 0, racers = 20, i = 0, racer[20][3] =
    { {15, 12, 14},
        {10, 16, 18},
        {17, 20, 18},
        {13, 14, 15},
        {11, 15, 14},
        {12, 10, 15},
        {17, 18, 19},
        {19, 16, 17},
        {10, 15, 14},
        {13, 20, 19},
        {15, 12, 11},
        {13, 14, 15},
        {14, 16, 18},
        {20, 21, 10},
        {14, 21, 10},
        {10, 12, 13},
        {10, 12, 11},
        {10, 19, 18},
        {18, 10, 20},
        {12, 13, 14} };
    for (int g = 0; g < 20; g++) {
        if ((racer[g][0] +50) >= gold) {
            silver = gold;
            gold = racer[g][0] + 50;
        }
        else if ((racer[g][0] + 50) >= silver) {
            bronse = silver;
            silver = racer[g][0] + 50;
        }
        else  if ((racer[g][0] + 50) >= bronse) bronse = racer[g][0] + 5;
    } //���������� 1,2,3 ����
   //6 ������� ������������ � ������� ������� ������� 20 �����������, 
    //������ 2-� ������ �������� �� 20 ����� � 3 ��������, � ������� ��������
    //(����� ������� �����, ����� ������� �����, ����� �������� �����) ���������  ������ � ����� ������.
    printf("________________________________________________________________________________________\n");
    printf("|   ������   | ����� 1 �����|����� 2 �����|����� 3 �����|�������|����|�����\n");
    for (int n = 0; n < 20; n++) {
        printf("----------------------------------------------------------------------------------------\n");
        printf("|%2d-�� ������|     %3d      |    %3d      |  %3d      |", n + 1, racer[n][i], racer[n][i + 1], racer[n][i + 2]);
        char racername[20][10] = {
            {'�','�','�','�','�','�',' ',' ',' ',' '},
            {'�','�','�','�','�','�','�',' ',' ',' '},
            {'�','�','�','�','�','�','�','�',' ',' '},
            {'�','�','�','�','�','�',' ',' ',' ',' '},
            {'�','�','�','�','�','�','�','�',' ',' '},
            {'�','�','�','�','�','�','�',' ',' ',' '},
            {'�','�','�','�','�','�',' ',' ',' ',' '},
            {'�','�','�','�','�','�','�',' ',' ',' '},
            {'�','�','�','�','�','�','�','�','�',' '},
            {'�','�','�','�','�',' ',' ',' ',' ',' '},
            {'�','�','�','�','�',' ',' ',' ',' ',' '},
            {'�','�','�','�','�','�','�',' ',' ',' '},
            {'�','�','�','�','�','�','�','�',' ',' '},
            {'�','�','�','�','�','�',' ',' ',' ',' '},
            {'�','�','�','�','�','�','�',' ',' ',' '},
            {'�','�','�','�',' ',' ',' ',' ',' ',' '},
            {'�','�','�','�','�','�','�','�',' ',' '},
            {'�','�','�','�','�','�',' ',' ',' ',' '},
            {'�','�','�','�','�','�','�','�','�',' '},
            {'�','�','�','�','�','�','�','�','�','�'} };
        printf(" %c%c%c%c%c%c%c%c%c%c |", racername[n][0], racername[n][1], racername[n][2], racername[n][3], racername[n][4], racername[n][5], racername[n][6], racername[n][7], racername[n][8], racername[n][9]);
        printf(" % 3d | ", racername[n][i] + 50);

        if ((racername[n][0] + 50) == gold) printf(" 1-�� |\n");
        else if ((racername[n][0] + 50) == silver) printf(" 2-�� |\n");
        else if ((racername[n][0] + 50) == bronse) printf(" 3-�� |\n");
        else printf("      |\n");
    }
    printf("----------------------------------------------------------------------------------------\n");
}
