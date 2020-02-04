#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
#include <Windows.h>

using namespace std;

//hp
int pk_hp = 20;
int yuo_hp = 20;   

int instruction() {
	cout << "����� ������� �����������, ������ �� ������� ���������� ����������, ������� \n �������� �� �� ������������: ��2�, ��9� � �. �. ������� ������� ���������� � \n ���������� �������. ���� ������� �������� �  ������, �� ������� �� ����� \n ������� ����������, �� � ����� ��������� ���� ������������ �������� �����. \n ����� ���� ��������� � ���������. ���� ������� �������� � ������, ��� ��������� �������������  ������� (�������� ������ ��� 1 ������), �� � ����� \n ��������� ���� ������������ ������� �������.  ���������� ����� �������� \n ����� �� ��� ���� �������. ���� ������ �� ������ ������ ������ �� �������, �� ����, ���� �� ����� ��������� ��� �������." << endl;

	system("pause");

	return  0;

}


int menu()
{

	//��������
	for (int i = 10; i < 110; i += 10)
	{
		cout << "\n\n\n\n\n\n\n\n\n" << endl;
		for (int j = 0; j < i/1.32; j++)
		{
			cout << "|";
		}

		cout << i << "%" << endl;
		Sleep(300);//��������
		system("cls");//������ 

	}

	string mass_openi[9][17] = {
		{" - ", " - ",  " - ",  " - ", " - ",  " - ",  " - ",  " - ",  " - ", " - ",  " - ",  " - ", " - ", " - ", " - ", " - "},
		{" | ", " - ",  " - ",  "   ", "   ",  "   ",  " M ", " E ", " N "," U ",  "   ",  "   ", "   ", " - ", " - ", " | "},
		{" | ", " | ",  " - ",  "   ", "   ",  "   ",  "   ",  "   ",  "   ", "   ",  "   ",  "   ",  "   ", " - ", " | ", " | "},
		{" | ", " | ",  " | ",  "   ", " 1.",  "C l ", "A S ", "S I ", "C A ","L ",  "  ",  "  ",  "  ", " | ", " | ", " | "},
		{" | ", " | ",  " | ",  "   ", "   ",  "   ",  "   ",  "   ",  "   ", "   ",  "   ",  "   ",  "   ", " | ", " | ", " | "},
		{" | ", " | ",  " | ",  "   ", " 2.",  "C ",  " O ",  " M ",  " P ", " A ",  " N ",  " Y ",  "    ", " | ", " | ", " | "},
		{" | ", " | ",  " - ",  "   ", "   ",  "   ",  "   ",  "   ",  "   ", "   ",  "   ",  "   ",  "   ", " - ", " | ", " | "},
		{" | ", " - ",  " - ",  "   ", "   ",  "   ",  "   ",  "   ",  "   ", "   ",  "   ",  "   ",  "   ", " - ", " - ", " | "},
		{" - ", " - ",  " - ",  " - ", " - ",  " - ",  " - ",  " - ",  " - ", " - ",  " - ",  " - ",  " - ", " - ", " - ", " - "}
	};

	cout << "\n\n\n\n\n\n" << endl;
	for (int i = 0; i < 9; i++) 
	{
		cout << "\t\t";
		for (int j = 0; j < 16; j++)
		{
			cout << mass_openi[i][j];
		}
		cout << endl;
	}


	return 0;
}

//�������� ����, 
int generator(string mass_1[12][12], string mass_2[12][12])
{
	//4 ������
	for (int i = 4; i > 2; i++)
	{
		int rand_mass1_x = rand() % 10 + 1;
		int rand_mass1_y = rand() % 10 + 1;

		if (mass_1[rand_mass1_x][rand_mass1_y] == " ~~ ")
		{
			int rand_axi = rand() % 2 + 1;

			if (rand_axi == 1)
			{
				if (rand_mass1_x + 3 < 11)
				{
					if ((mass_1[rand_mass1_x + 1][rand_mass1_y] == " ~~ ") && (mass_1[rand_mass1_x + 2][rand_mass1_y] == " ~~ ") && (mass_1[rand_mass1_x + 3][rand_mass1_y] == " ~~ ") && (mass_1[rand_mass1_x - 1][rand_mass1_y] != " [] ") && (mass_1[rand_mass1_x + 4][rand_mass1_y] != " [] ") && (mass_1[rand_mass1_x][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x + 2][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x + 3][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x + 4][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x + 2][rand_mass1_y + 1] != " [] "))
					{
						mass_1[rand_mass1_x][rand_mass1_y] = " [] ";
						mass_1[rand_mass1_x + 1][rand_mass1_y] = " [] ";
						mass_1[rand_mass1_x + 2][rand_mass1_y] = " [] ";
						mass_1[rand_mass1_x + 3][rand_mass1_y] = " [] ";

						i = 0;
					}
				}
			}
			else {
				if (rand_mass1_y + 3 < 11) {
					if ((mass_1[rand_mass1_x - 1][rand_mass1_y] == " ~~ ") && (mass_1[rand_mass1_x - 1][rand_mass1_y - 1] == " ~~ ") && (mass_1[rand_mass1_x + 1][rand_mass1_y] == " ~~ ") && (mass_1[rand_mass1_x + 1][rand_mass1_y - 1] == " ~~ ") && (mass_1[rand_mass1_x][rand_mass1_y - 1] == " ~~ ") && (mass_1[rand_mass1_x + 1][rand_mass1_y + 2] == " ~~ ") && (mass_1[rand_mass1_x - 1][rand_mass1_y + 2] == " ~~ ") && (mass_1[rand_mass1_x + 1][rand_mass1_y + 1] == " ~~ ") && (mass_1[rand_mass1_x - 1][rand_mass1_y + 1] == " ~~ ") && (mass_1[rand_mass1_x - 1][rand_mass1_y + 3] == " ~~ ") && (mass_1[rand_mass1_x + 1][rand_mass1_y + 3] == " ~~ ") && (mass_1[rand_mass1_x + 1][rand_mass1_y + 4] == " ~~ ") && (mass_1[rand_mass1_x][rand_mass1_y + 4] == " ~~ "))
					{
						mass_1[rand_mass1_x][rand_mass1_y] = " [] ";
						mass_1[rand_mass1_x][rand_mass1_y + 1] = " [] ";
						mass_1[rand_mass1_x][rand_mass1_y + 2] = " [] ";
						mass_1[rand_mass1_x][rand_mass1_y + 3] = " [] ";

						i = 0;
					}
				}
			}
		}
	}

	//3 ������, ���� �� ���� 
	for (int t = 0; t < 2; t++)
	{
		for (int i = 4; i > 2; i++)
		{
			int rand_mass1_x = rand() % 10 + 1;
			int rand_mass1_y = rand() % 10 + 1;

			if (mass_1[rand_mass1_x][rand_mass1_y] == " ~~ ")
			{
				int rand_axi = rand() % 2 + 1;

				if (rand_axi == 1)
				{
					if (rand_mass1_x + 2 < 11)
					{
						if ((mass_1[rand_mass1_x + 1][rand_mass1_y] == " ~~ ") && (mass_1[rand_mass1_x + 2][rand_mass1_y] == " ~~ ") && (mass_1[rand_mass1_x - 1][rand_mass1_y] != " [] ") && (mass_1[rand_mass1_x + 3][rand_mass1_y] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x + 3][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x + 3][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x + 2][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x + 2][rand_mass1_y - 1] != " [] "))
						{

							mass_1[rand_mass1_x][rand_mass1_y] = " [] ";
							mass_1[rand_mass1_x + 1][rand_mass1_y] = " [] ";
							mass_1[rand_mass1_x + 2][rand_mass1_y] = " [] ";

							i = 0;
						}
					}
				}
				else {
					if (rand_mass1_y + 2 < 11)
					{
						if ((mass_1[rand_mass1_x][rand_mass1_y + 1] == " ~~ ") && (mass_1[rand_mass1_x][rand_mass1_y + 2] == " ~~ ") && (mass_1[rand_mass1_x][rand_mass1_y + 3] != " [] ") && (mass_1[rand_mass1_x][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y + 2] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y + 2] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y + 3] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y + 3] != " [] "))
						{
							mass_1[rand_mass1_x][rand_mass1_y] = " [] ";
							mass_1[rand_mass1_x][rand_mass1_y + 1] = " [] ";
							mass_1[rand_mass1_x][rand_mass1_y + 2] = " [] ";

							i = 0;
						}
					}
				}
			}
		}
	}



	//2 ������, �� 3
	for (int t = 0; t < 3; t++)
	{
		for (int i = 4; i > 2; i++)
		{
			int rand_mass1_x = rand() % 10 + 1;
			int rand_mass1_y = rand() % 10 + 1;

			if (mass_1[rand_mass1_x][rand_mass1_y] == " ~~ ")
			{
				int rand_axi = rand() % 2 + 1;

				if (rand_axi == 1)
				{
					if (rand_mass1_y + 1 < 11) {
						if ((mass_1[rand_mass1_x][rand_mass1_y + 1] == " ~~ ") && (mass_1[rand_mass1_x + 1][rand_mass1_y] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y + 2] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y + 2] != " [] ") && (mass_1[rand_mass1_x][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x][rand_mass1_y + 2] != " [] "))
						{

							mass_1[rand_mass1_x][rand_mass1_y] = " [] ";
							mass_1[rand_mass1_x][rand_mass1_y + 1] = " [] ";

							i = 0;
						}
					}
				}
				else {
					if (rand_mass1_x + 1 < 11) {
						if ((mass_1[rand_mass1_x + 1][rand_mass1_y] == " ~~ ") && (mass_1[rand_mass1_x - 1][rand_mass1_y] != " [] ") && (mass_1[rand_mass1_x + 2][rand_mass1_y] != " [] ") && (mass_1[rand_mass1_x + 2][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x + 2][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y - 1] != " [] "))
						{
							mass_1[rand_mass1_x][rand_mass1_y] = " [] ";
							mass_1[rand_mass1_x + 1][rand_mass1_y] = " [] ";

							i = 0;
						}
					}
				}
			}
		}
	}

	//1 ������, �������

	for (int t = 0; t < 4; t++)
	{
		for (int i = 4; i > 2; i++)
		{
			int rand_mass1_x = rand() % 10 + 1;
			int rand_mass1_y = rand() % 10 + 1;

			if (mass_1[rand_mass1_x][rand_mass1_y] == " ~~ ")
			{
				int rand_axi = rand() % 2 + 1;

				if ((mass_1[rand_mass1_x + 1][rand_mass1_y] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x + 1][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x - 1][rand_mass1_y - 1] != " [] ") && (mass_1[rand_mass1_x][rand_mass1_y + 1] != " [] ") && (mass_1[rand_mass1_x][rand_mass1_y - 1] != " [] "))
				{

					mass_1[rand_mass1_x][rand_mass1_y] = " [] ";

					i = 0;
				}
			}
		}
	}

	//yuo

	//4 ������
	for (int i = 4; i > 2; i++)
	{
		int rand_mass1_x = rand() % 10 + 1;
		int rand_mass1_y = rand() % 10 + 1;

		if (mass_1[rand_mass1_x][rand_mass1_y] == " ~~ ")
		{
			int rand_axi = rand() % 2 + 1;

			if (rand_axi == 1)
			{
				if (rand_mass1_x + 3 < 11)
				{
					if ((mass_2[rand_mass1_x + 1][rand_mass1_y] == " ~~ ") && (mass_2[rand_mass1_x + 2][rand_mass1_y] == " ~~ ") && (mass_2[rand_mass1_x + 3][rand_mass1_y] == " ~~ ") && (mass_2[rand_mass1_x - 1][rand_mass1_y] != " [] ") && (mass_2[rand_mass1_x + 4][rand_mass1_y] != " [] ") && (mass_2[rand_mass1_x][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x + 2][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x + 3][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x + 4][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x + 2][rand_mass1_y + 1] != " [] "))
					{
						mass_2[rand_mass1_x][rand_mass1_y] = " [] ";
						mass_2[rand_mass1_x + 1][rand_mass1_y] = " [] ";
						mass_2[rand_mass1_x + 2][rand_mass1_y] = " [] ";
						mass_2[rand_mass1_x + 3][rand_mass1_y] = " [] ";

						i = 0;
					}
				}
			}
			else {
				if (rand_mass1_y + 3 < 11) {
					if ((mass_2[rand_mass1_x - 1][rand_mass1_y] == " ~~ ") && (mass_2[rand_mass1_x - 1][rand_mass1_y - 1] == " ~~ ") && (mass_1[rand_mass1_x + 1][rand_mass1_y] == " ~~ ") && (mass_1[rand_mass1_x + 1][rand_mass1_y - 1] == " ~~ ") && (mass_2[rand_mass1_x][rand_mass1_y - 1] == " ~~ ") && (mass_2[rand_mass1_x + 1][rand_mass1_y + 2] == " ~~ ") && (mass_2[rand_mass1_x - 1][rand_mass1_y + 2] == " ~~ ") && (mass_2[rand_mass1_x + 1][rand_mass1_y + 1] == " ~~ ") && (mass_2[rand_mass1_x - 1][rand_mass1_y + 1] == " ~~ ") && (mass_2[rand_mass1_x - 1][rand_mass1_y + 3] == " ~~ ") && (mass_2[rand_mass1_x + 1][rand_mass1_y + 3] == " ~~ ") && (mass_2[rand_mass1_x + 1][rand_mass1_y + 4] == " ~~ ") && (mass_2[rand_mass1_x][rand_mass1_y + 4] == " ~~ "))
					{
						mass_2[rand_mass1_x][rand_mass1_y] = " [] ";
						mass_2[rand_mass1_x][rand_mass1_y + 1] = " [] ";
						mass_2[rand_mass1_x][rand_mass1_y + 2] = " [] ";
						mass_2[rand_mass1_x][rand_mass1_y + 3] = " [] ";

						i = 0;
					}
				}
			}
		}
	}

	//3 ������, ���� �� ���� 
	for (int t = 0; t < 2; t++)
	{
		for (int i = 4; i > 2; i++)
		{
			int rand_mass1_x = rand() % 10 + 1;
			int rand_mass1_y = rand() % 10 + 1;

			if (mass_1[rand_mass1_x][rand_mass1_y] == " ~~ ")
			{
				int rand_axi = rand() % 2 + 1;

				if (rand_axi == 1)
				{
					if (rand_mass1_x + 2 < 11)
					{
						if ((mass_2[rand_mass1_x + 1][rand_mass1_y] == " ~~ ") && (mass_2[rand_mass1_x + 2][rand_mass1_y] == " ~~ ") && (mass_2[rand_mass1_x - 1][rand_mass1_y] != " [] ") && (mass_2[rand_mass1_x + 3][rand_mass1_y] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x + 3][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x + 3][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x + 2][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x + 2][rand_mass1_y - 1] != " [] "))
						{

							mass_2[rand_mass1_x][rand_mass1_y] = " [] ";
							mass_2[rand_mass1_x + 1][rand_mass1_y] = " [] ";
							mass_2[rand_mass1_x + 2][rand_mass1_y] = " [] ";

							i = 0;
						}
					}
				}
				else {
					if (rand_mass1_y + 2 < 11)
					{
						if ((mass_2[rand_mass1_x][rand_mass1_y + 1] == " ~~ ") && (mass_2[rand_mass1_x][rand_mass1_y + 2] == " ~~ ") && (mass_2[rand_mass1_x][rand_mass1_y + 3] != " [] ") && (mass_2[rand_mass1_x][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y + 2] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y + 2] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y + 3] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y + 3] != " [] "))
						{
							mass_2[rand_mass1_x][rand_mass1_y] = " [] ";
							mass_2[rand_mass1_x][rand_mass1_y + 1] = " [] ";
							mass_2[rand_mass1_x][rand_mass1_y + 2] = " [] ";

							i = 0;
						}
					}
				}
			}
		}
	}



	//2 ������, �� 3
	for (int t = 0; t < 3; t++)
	{
		for (int i = 4; i > 2; i++)
		{
			int rand_mass1_x = rand() % 10 + 1;
			int rand_mass1_y = rand() % 10 + 1;

			if (mass_1[rand_mass1_x][rand_mass1_y] == " ~~ ")
			{
				int rand_axi = rand() % 2 + 1;

				if (rand_axi == 1)
				{
					if (rand_mass1_y + 1 < 11) {
						if ((mass_2[rand_mass1_x][rand_mass1_y + 1] == " ~~ ") && (mass_2[rand_mass1_x + 1][rand_mass1_y] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y + 2] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y + 2] != " [] ") && (mass_2[rand_mass1_x][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x][rand_mass1_y + 2] != " [] "))
						{

							mass_2[rand_mass1_x][rand_mass1_y] = " [] ";
							mass_2[rand_mass1_x][rand_mass1_y + 1] = " [] ";

							i = 0;
						}
					}
				}
				else {
					if (rand_mass1_x + 1 < 11) {
						if ((mass_2[rand_mass1_x + 1][rand_mass1_y] == " ~~ ") && (mass_2[rand_mass1_x - 1][rand_mass1_y] != " [] ") && (mass_2[rand_mass1_x + 2][rand_mass1_y] != " [] ") && (mass_2[rand_mass1_x + 2][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x + 2][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y - 1] != " [] "))
						{
							mass_2[rand_mass1_x][rand_mass1_y] = " [] ";
							mass_2[rand_mass1_x + 1][rand_mass1_y] = " [] ";

							i = 0;
						}
					}
				}
			}
		}
	}

	//1 ������, �������

	for (int t = 0; t < 4; t++)
	{
		for (int i = 4; i > 2; i++)
		{
			int rand_mass1_x = rand() % 10 + 1;
			int rand_mass1_y = rand() % 10 + 1;

			if (mass_2[rand_mass1_x][rand_mass1_y] == " ~~ ")
			{
				int rand_axi = rand() % 2 + 1;

				if ((mass_2[rand_mass1_x + 1][rand_mass1_y] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x + 1][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x - 1][rand_mass1_y - 1] != " [] ") && (mass_2[rand_mass1_x][rand_mass1_y + 1] != " [] ") && (mass_2[rand_mass1_x][rand_mass1_y - 1] != " [] "))
				{

					mass_2[rand_mass1_x][rand_mass1_y] = " [] ";

					i = 0;
				}
			}
		}
	}

	cout << "���� ����� :" << endl;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (mass_1[i][j] == " [] ")
			{
				cout << " ~~ ";
			}
			else {
				cout << mass_1[i][j];
			}
		}
		cout << endl;
	}


	cout << "���� ���� :" << endl;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			cout << mass_2[i][j];
		}
		cout << endl;
	}

	return 0;
}





int shooting(string mass_1[12][12], string you_name, string mass_2[12][12])
{
	int axis_x = 0;
	int axis_y = 0;
	string axis_y_s = " ";
	string axis_x_s = " ";

	for (int i = 2; i > 1; i++)
	{
		//�� ������ ������ 
		if (yuo_hp == 0)break;
		if (pk_hp == 0)break;

		//���������� ��� ��������
		cout << "�� ��� �: "; cin >> axis_y_s;
		cout << "�� ��� Y: "; cin >> axis_x_s;

		//��� ����
		for (int r = 2; r > 1; r++)
		{
			if ((axis_y_s == "�") || (axis_y_s == "�") || (axis_y_s == "�") || (axis_y_s == "�") || (axis_y_s == "�") || (axis_y_s == "�") || (axis_y_s == "�") || (axis_y_s == "�") || (axis_y_s == "�") || (axis_y_s == "�"))
			{
				r = 0;
			}
			else {
				cout << "�� ��� ��� �����..." << endl;
				cout << "�� ��� �: "; cin >> axis_y_s;
			}
		}

		//��� ����� 
		for (int r = 2; r > 1; r++)
		{
			if ((axis_x_s == "1") || (axis_x_s == "2") || (axis_x_s == "3") || (axis_x_s == "4") || (axis_x_s == "5") || (axis_x_s == "6") || (axis_x_s == "7") || (axis_x_s == "8") || (axis_x_s == "9") || (axis_x_s == "10"))
			{
				r = 0;
			}
			else {
				cout << "�� ��� ��� �����..." << endl;
				cout << "�� ��� Y: "; cin >> axis_x_s;
			}
		}

		//������������
		if (axis_y_s == "�") axis_y = 1;
		if (axis_y_s == "�") axis_y = 2;
		if (axis_y_s == "�") axis_y = 3;
		if (axis_y_s == "�") axis_y = 4;
		if (axis_y_s == "�") axis_y = 5;
		if (axis_y_s == "�") axis_y = 6;
		if (axis_y_s == "�") axis_y = 7;
		if (axis_y_s == "�") axis_y = 8;
		if (axis_y_s == "�") axis_y = 9;
		if (axis_y_s == "�") axis_y = 10;

		if (axis_x_s == "1") axis_x = 1;
		if (axis_x_s == "2") axis_x = 2;
		if (axis_x_s == "3") axis_x = 3;
		if (axis_x_s == "4") axis_x = 4;
		if (axis_x_s == "5") axis_x = 5;
		if (axis_x_s == "6") axis_x = 6;
		if (axis_x_s == "7") axis_x = 7;
		if (axis_x_s == "8") axis_x = 8;
		if (axis_x_s == "9") axis_x = 9;
		if (axis_x_s == "10") axis_x = 10;


		//�������� ��������� ����
		for (int j = 5; j > 3; j++)
		{
			if (mass_1[axis_x][axis_y] == " ** " || mass_1[axis_x][axis_y] == " X  " || axis_y == 0 || axis_x == 0)
			{
				cout << "��� ��������� ��� ��..." << endl;
				cout << "���� �����" << endl;
				cout << "�� ��� �: "; cin >> axis_y_s;
				cout << "�� ��� Y: "; cin >> axis_x;
				//������������
				if (axis_y_s == "�") axis_y = 1;
				if (axis_y_s == "�") axis_y = 2;
				if (axis_y_s == "�") axis_y = 3;
				if (axis_y_s == "�") axis_y = 4;
				if (axis_y_s == "�") axis_y = 5;
				if (axis_y_s == "�") axis_y = 6;
				if (axis_y_s == "�") axis_y = 7;
				if (axis_y_s == "�") axis_y = 8;
				if (axis_y_s == "�") axis_y = 9;
				if (axis_y_s == "�") axis_y = 10;

			}
			else {
				j = 1;
			}

		}
		if (mass_1[axis_x][axis_y] == " ~~ ")
		{
			mass_1[axis_x][axis_y] = " ** ";
			i = 0;
		}
		else {
			//�������� �� �������� ����� � ���������
			mass_1[axis_x][axis_y] = " X  ";

			if (mass_1[axis_x - 1][axis_y - 1] != " X  " && mass_1[axis_x - 1][axis_y - 1] != " [] " && mass_1[axis_x - 1][axis_y - 1] != " � " && mass_1[axis_x - 1][axis_y - 1] != "  � " && mass_1[axis_x - 1][axis_y - 1] != "  � " && mass_1[axis_x - 1][axis_y - 1] != "  � " && mass_1[axis_x - 1][axis_y - 1] != "  � " && mass_1[axis_x - 1][axis_y - 1] != "  � " && mass_1[axis_x - 1][axis_y - 1] != "  � " && mass_1[axis_x - 1][axis_y - 1] != "  � " && mass_1[axis_x - 1][axis_y - 1] != "  � " && mass_1[axis_x - 1][axis_y - 1] != "  � " && mass_1[axis_x - 1][axis_y - 1] != " || " && mass_1[axis_x - 1][axis_y - 1] != "  1 " && mass_1[axis_x - 1][axis_y - 1] != "  2 " && mass_1[axis_x - 1][axis_y - 1] != "  3 " && mass_1[axis_x - 1][axis_y - 1] != "  4 " && mass_1[axis_x - 1][axis_y - 1] != "  5 " && mass_1[axis_x - 1][axis_y - 1] != "  6 " && mass_1[axis_x - 1][axis_y - 1] != "  7 " && mass_1[axis_x - 1][axis_y - 1] != "  8 " && mass_1[axis_x - 1][axis_y - 1] != "  9 " && mass_1[axis_x - 1][axis_y - 1] != " 10 ")
			{
				mass_1[axis_x - 1][axis_y - 1] = " ** ";
			}

			if (mass_1[axis_x - 1][axis_y + 1] != " X  " && mass_1[axis_x - 1][axis_y + 1] != " [] " && mass_1[axis_x - 1][axis_y + 1] != " � " && mass_1[axis_x - 1][axis_y + 1] != "  � " && mass_1[axis_x - 1][axis_y + 1] != "  � " && mass_1[axis_x - 1][axis_y + 1] != "  � " && mass_1[axis_x - 1][axis_y + 1] != "  � " && mass_1[axis_x - 1][axis_y + 1] != "  � " && mass_1[axis_x - 1][axis_y + 1] != "  � " && mass_1[axis_x - 1][axis_y + 1] != "  � " && mass_1[axis_x - 1][axis_y + 1] != "  � " && mass_1[axis_x - 1][axis_y + 1] != "  � " && mass_1[axis_x - 1][axis_y + 1] != " || " && mass_1[axis_x - 1][axis_y + 1] != "  1 " && mass_1[axis_x - 1][axis_y + 1] != "  2 " && mass_1[axis_x - 1][axis_y + 1] != "  3 " && mass_1[axis_x - 1][axis_y + 1] != "  4 " && mass_1[axis_x - 1][axis_y + 1] != "  5 " && mass_1[axis_x - 1][axis_y + 1] != "  6 " && mass_1[axis_x - 1][axis_y + 1] != "  7 " && mass_1[axis_x - 1][axis_y + 1] != "  8 " && mass_1[axis_x - 1][axis_y + 1] != "  9 " && mass_1[axis_x - 1][axis_y + 1] != " 10 ")
			{
				mass_1[axis_x - 1][axis_y + 1] = " ** ";
			}

			if (mass_1[axis_x + 1][axis_y - 1] != " X  " && mass_1[axis_x + 1][axis_y - 1] != " [] " && mass_1[axis_x + 1][axis_y - 1] != " � " && mass_1[axis_x + 1][axis_y - 1] != "  � " && mass_1[axis_x + 1][axis_y - 1] != "  � " && mass_1[axis_x + 1][axis_y - 1] != "  � " && mass_1[axis_x + 1][axis_y - 1] != "  � " && mass_1[axis_x + 1][axis_y - 1] != "  � " && mass_1[axis_x + 1][axis_y - 1] != "  � " && mass_1[axis_x + 1][axis_y - 1] != "  � " && mass_1[axis_x + 1][axis_y - 1] != "  � " && mass_1[axis_x + 1][axis_y - 1] != "  � " && mass_1[axis_x + 1][axis_y - 1] != " || " && mass_1[axis_x + 1][axis_y - 1] != "  1 " && mass_1[axis_x + 1][axis_y - 1] != "  2 " && mass_1[axis_x + 1][axis_y - 1] != "  3 " && mass_1[axis_x + 1][axis_y - 1] != "  4 " && mass_1[axis_x + 1][axis_y - 1] != "  5 " && mass_1[axis_x + 1][axis_y - 1] != "  6 " && mass_1[axis_x + 1][axis_y - 1] != "  7 " && mass_1[axis_x + 1][axis_y - 1] != "  8 " && mass_1[axis_x + 1][axis_y - 1] != "  9 " && mass_1[axis_x + 1][axis_y - 1] != " 10 ")
			{
				mass_1[axis_x + 1][axis_y - 1] = " ** ";
			}

			if (mass_1[axis_x + 1][axis_y + 1] != " X  " && mass_1[axis_x + 1][axis_y + 1] != " [] " && mass_1[axis_x + 1][axis_y + 1] != " � " && mass_1[axis_x + 1][axis_y + 1] != "  � " && mass_1[axis_x + 1][axis_y + 1] != "  � " && mass_1[axis_x + 1][axis_y + 1] != "  � " && mass_1[axis_x + 1][axis_y + 1] != "  � " && mass_1[axis_x + 1][axis_y + 1] != "  � " && mass_1[axis_x + 1][axis_y + 1] != "  � " && mass_1[axis_x + 1][axis_y + 1] != "  � " && mass_1[axis_x + 1][axis_y + 1] != "  � " && mass_1[axis_x + 1][axis_y + 1] != "  � " && mass_1[axis_x + 1][axis_y + 1] != " || " && mass_1[axis_x + 1][axis_y + 1] != "  1 " && mass_1[axis_x + 1][axis_y + 1] != "  2 " && mass_1[axis_x + 1][axis_y + 1] != "  3 " && mass_1[axis_x + 1][axis_y + 1] != "  4 " && mass_1[axis_x + 1][axis_y + 1] != "  5 " && mass_1[axis_x + 1][axis_y + 1] != "  6 " && mass_1[axis_x + 1][axis_y + 1] != "  7 " && mass_1[axis_x + 1][axis_y + 1] != "  8 " && mass_1[axis_x + 1][axis_y + 1] != "  9 " && mass_1[axis_x + 1][axis_y + 1] != " 10 ")
			{
				mass_1[axis_x + 1][axis_y + 1] = " ** ";
			}

			//������� ���� � ��
			pk_hp--;
		}

		system("cls");

		//����������� �������� ������
		//4 ������ ��������
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_1[k][t] == " X  ") && (mass_1[k][t + 1] == " X  ") && (mass_1[k][t + 2] == " X  ") && (mass_1[k][t + 3] == " X  "))
				{
					//����e���� �� ������� ���� � ����
					if ((k + 1 != 0) && (t + 4 != 0))
					{
						mass_1[k][t + 4] = " ** ";
					}
					if ((k + 1 != 0) && (t - 1 != 0))
					{
						mass_1[k][t - 1] = " ** ";
					}
				}
			}
		}
		//4 ������ ���������
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_1[k][t] == " X  ") && (mass_1[k + 1][t] == " X  ") && (mass_1[k + 2][t] == " X  ") && (mass_1[k + 3][t] == " X  "))
				{
					//����e���� �� ������� ���� � ����
					if ((k - 1 != 0) && (t != 0))
					{
						mass_1[k - 1][t] = " ** ";
					}
					if ((k + 4 != 0) && (t != 0))
					{
						mass_1[k + 4][t] = " ** ";
					}
				}
			}
		}

		// 1 ������
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_1[k][t] == " X  ") && (mass_1[k - 1][t] != " [] ") && (mass_1[k + 1][t] != " [] ") && (mass_1[k][t - 1] != " [] ") && (mass_1[k][t + 1] != " [] ") && (mass_1[k - 1][t] != " X  ") && (mass_1[k + 1][t] != " X  ") && (mass_1[k][t - 1] != " X  ") && (mass_1[k][t + 1] != " X  "))
				{
					if ((k+1 != 0) && (t != 0))
					{
						mass_1[k + 1][t] = " ** ";
					}

					if ((k - 1 != 0) && (t != 0))
					{
						mass_1[k - 1][t] = " ** ";
					}

					if ((k != 0) && (t + 1 != 0))
					{
						mass_1[k][t + 1] = " ** ";
					}

					if ((k != 0) && (t - 1 != 0))
					{
						mass_1[k][t - 1] = " ** ";
					}
				}
			}
		}

		//��� ����� ����
		cout << "���� ����� :" << endl;
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				if (mass_1[i][j] == " [] ")
				{
					cout << " ~~ ";
				}
				else {
					cout << mass_1[i][j];
				}
			}
			cout << endl;
		}

		cout << "���� ���� :" << endl;
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				cout << mass_2[i][j];
			}
			cout << endl;
		}

		if (pk_hp == 0)
		{
			break;
		}

		axis_x = 0;
		axis_y = 0;
	}

	return 0;
}

int shooting_pk(string mass_1[12][12], string mass_2[12][12])
{

	int axis_x_pk = 0;
	int axis_y_pk = 0;


	for (int i = 2; i > 1; i++)
	{
		if (yuo_hp == 0)break;

		axis_x_pk = rand() % 10 + 1;
		axis_y_pk = rand() % 10 + 1;

		//�������� ���������
		for (int j = 5; j > 3; j++)
		{
			if (mass_2[axis_x_pk][axis_y_pk] == " ** " || mass_2[axis_x_pk][axis_y_pk] == " X  " || axis_y_pk == 0 || axis_x_pk == 0)
			{
				axis_x_pk = rand() % 10 + 1;
				axis_y_pk = rand() % 10 + 1;
			}
			else {
				j = 1;
			}

		}

		//������ �������� �� �������� �������
		int temp_shoot = 0;//����� ������ ���� ��������
		for (int k = 0; k < 11; k++)//� ������� ������ ���������� �������� �����
		{
			for (int t = 0; t < 11; t++)
			{
				if (mass_2[k][t] == " X  ")//��� ������ ����� �������� �����, ������ ��� ������ �������� 
				{

					//�������� �� ������ ���� ��� ����� ������ ������� ��� ���� ��������� �� 
					if ((mass_2[k + 1][t] == " ** ") && (mass_2[k - 1][t] == " ** ") && (mass_2[k][t + 1] == " ** ") && mass_2[k][t - 1] == " ** ")
					{
						axis_x_pk = rand() % 10 + 1;
						axis_y_pk = rand() % 10 + 1;
					}
					else {
						temp_shoot = rand() % 4 + 1;

						//���� ������ ����� n ����������� ��������������� �������
						if (temp_shoot == 1) { axis_x_pk = k; axis_y_pk = t + 1; }
						if (temp_shoot == 2) { axis_x_pk = k + 1; axis_y_pk = t; }
						if (temp_shoot == 3) { axis_x_pk = k; axis_y_pk = t - 1; }
						if (temp_shoot == 4) { axis_x_pk = k - 1; axis_y_pk = t; }
						break;
					}
				}
			}
		}

		//�������� ���������
		for (int j = 5; j > 3; j++)
		{
			if (mass_2[axis_x_pk][axis_y_pk] == " ** " || mass_2[axis_x_pk][axis_y_pk] == " X  " || axis_y_pk == 0 || axis_x_pk == 0)
			{
				axis_x_pk = rand() % 10 + 1;
				axis_y_pk = rand() % 10 + 1;
			}
			else {
				j = 1;
			}
		}

		if (mass_2[axis_x_pk][axis_y_pk] == " ~~ ")
		{
			mass_2[axis_x_pk][axis_y_pk] = " ** ";
			i = 0;
		}
		else if (mass_2[axis_x_pk][axis_y_pk] == " [] ") {

			//�������� �� �������� ����� � ���������
			mass_2[axis_x_pk][axis_y_pk] = " X  ";

			yuo_hp--;

			if (mass_2[axis_x_pk - 1][axis_y_pk - 1] != " X  " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != " [] " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != " � " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != " || " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  1 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  2 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  3 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  4 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  5 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  6 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  7 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  8 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  9 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != " 10 ")
			{
				mass_2[axis_x_pk - 1][axis_y_pk - 1] = " ** ";
			}

			if (mass_1[axis_x_pk - 1][axis_y_pk + 1] != " X  " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != " [] " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != " � " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != " || " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  1 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  2 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  3 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  4 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  5 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  6 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  7 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  8 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  9 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != " 10 ")
			{
				mass_2[axis_x_pk - 1][axis_y_pk + 1] = " ** ";
			}

			if (mass_2[axis_x_pk + 1][axis_y_pk - 1] != " X  " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != " [] " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != " � " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != " || " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  1 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  2 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  3 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  4 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  5 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  6 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  7 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  8 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  9 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != " 10 ")
			{
				mass_2[axis_x_pk + 1][axis_y_pk - 1] = " ** ";
			}

			if (mass_2[axis_x_pk + 1][axis_y_pk + 1] != " X  " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != " [] " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != " � " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  � " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != " || " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  1 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  2 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  3 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  4 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  5 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  6 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  7 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  8 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  9 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != " 10 ")
			{
				mass_2[axis_x_pk + 1][axis_y_pk + 1] = " ** ";
			}
		}

		//����������� �������� ������
		//4 ������ ��������
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_2[k][t] == " X  ") && (mass_2[k][t + 1] == " X  ") && (mass_2[k][t + 2] == " X  ") && (mass_2[k][t + 3] == " X  "))
				{
					//����e���� �� ������� ���� � ����
					if ((k + 1 != 0) && (t + 4 != 0))
					{
						mass_2[k][t + 4] = " ** ";
					}
					if ((k + 1 != 0) && (t - 1 != 0))
					{
						mass_2[k][t - 1] = " ** ";
					}
				}
			}
		}
		//4 ������ ���������
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_2[k][t] == " X  ") && (mass_2[k + 1][t] == " X  ") && (mass_2[k + 2][t] == " X  ") && (mass_2[k + 3][t] == " X  "))
				{
					//����e���� �� ������� ���� � ����
					if ((k - 1 != 0) && (t != 0))
					{
						mass_2[k - 1][t] = " ** ";
					}
					if ((k + 4 != 0) && (t != 0))
					{
						mass_2[k + 4][t] = " ** ";
					}
				}
			}
		}

		// 1 ������
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_2[k][t] == " X  ") && (mass_2[k - 1][t] != " [] ") && (mass_2[k + 1][t] != " [] ") && (mass_2[k][t - 1] != " [] ") && (mass_2[k][t + 1] != " [] ") && (mass_2[k - 1][t] != " X  ") && (mass_2[k + 1][t] != " X  ") && (mass_2[k][t - 1] != " X  ") && (mass_2[k][t + 1] != " X  "))
				{
					if ((k + 1 != 0) && (t != 0))
					{
						mass_2[k + 1][t] = " ** ";
					}

					if ((k - 1 != 0) && (t != 0))
					{
						mass_2[k - 1][t] = " ** ";
					}

					if ((k != 0) && (t + 1 != 0))
					{
						mass_2[k][t + 1] = " ** ";
					}

					if ((k != 0) && (t - 1 != 0))
					{
						mass_2[k][t - 1] = " ** ";
					}
				}
			}
		}


		system("cls");//������

		//��� ����� ����
		cout << "���� ����� :" << endl;
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				if (mass_1[i][j] == " [] ")
				{
					cout << " ~~ ";
				}
				else {
					cout << mass_1[i][j];
				}
			}
			cout << endl;
		}

		cout << "���� ���� :" << endl;
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				cout << mass_2[i][j];
			}
			cout << endl;
		}

		

		cout << axis_x_pk << "  " << axis_y_pk;

		axis_x_pk = 0;
		axis_y_pk = 0;


		if (yuo_hp == 0)break;
	}
	cout << yuo_hp << endl;

	return 0;
}



int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//���� ����� �������� ������� �������� �� ������
	pk_hp = 20;
	yuo_hp = 20;
	 
	//���� ����
	menu();

	string choice = "";
	cout << "\n\t\t ��� �����? ";
	cin >> choice;

	while ("NULL") {
		if ((choice == "1"))
		{
			break;
		}else if (choice == "2")
		{
			cout << "��-�� �� ����� �������, ���, �����, ���.... ������� ������ �������� ���������. �� �� �������� �� ���������� ����� 2019 ����. ������� �� ���������";
			Sleep(5000);
			break;
		}
		else {
			cout << "\t\t������� �� �����, ��� �����? ";
			cin >> choice;
		}
	}

	if (choice == "1" || choice == "2") {

		system("cls");//������

		//Sleep(5000);//��������

		string you_name = " ";
		cout << "���� ��� �������? ";
		cin >> you_name; 

		//vrag
		 
		string mass_1[12][12] = {
			{" || ", " � ",  "  � ", "  � ", "  � ", "  � ", "  � ", "  � ", "  � ", "  � ", "  � "},
			{"  1 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  2 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  3 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  4 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  5 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  6 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  7 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  8 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  9 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ** "},
			{" 10 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ",  " ~~ ", " ~~ ", " ~~ "," ~~ "}
		};

		//vashe
		string mass_2[12][12] = {
			{" || ", " � ",  "  � ", "  � ", "  � ", "  � ", "  � ", "  � ", "  � ", "  � ", "  � "},
			{"  1 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  2 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ** "},
			{"  3 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  4 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  5 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  6 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  7 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  8 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{"  9 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ "},
			{" 10 ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ", " ~~ ",  " ~~ ", " ~~ ", " ~~ "," ~~ "}
		};

		//������� �� ��������� ����
		generator(mass_1, mass_2);
		int choice2 = 0;
		string choice_S2 = ""; 

		//� ���� ���� �� ����������� 
		for(int t = 4; t > 2; t++)
		{
			cout << "��� ��� ����? \n �������� ��� ���? \n 1 - ��� ��� ��������� classic,� �� ���� ������ pleasantly \n 2 - ����� �� ����� ����, �Ѩ �����" << endl;

			cin >> choice_S2;


			for (int i = 4; i > 2; i++)
			{
				if ((choice_S2 == "1") || (choice_S2 == "2"))
				{
					i = 0;
				}else{
					if (i >= 8)
					{
						cout << "����, ����� ������ ��������� 3 ����� \n ������ " << you_name << ", ������ �������� ������ ���. ����������, ��������� �����." << endl;
						cin >> choice_S2;
					}
					else {
						cout << "������ " << you_name << ", ������ �������� ������ ���. ����������, ��������� �����." << endl;
						cin >> choice_S2;
					}
				}

				system("cls");//������
			}

			if (choice_S2 == "1")
			{
				t = 0; 
				system("cls");//������
			} else if(choice_S2 == "2"){

				//���������� ����, ��� ���� ������, � ������ ���� �����
				for (int i = 1; i < 11; i++)
				{
					for (int j = 1; j < 11; j++)
					{
						mass_1[i][j] = " ~~ ";
					}
				}

				for (int i = 1; i < 11; i++)
				{
					for (int j = 1; j < 11; j++)
					{
						mass_2[i][j] = " ~~ ";
					}
				}

				//����� ����������� �����
				mass_1[9][10] = " ** ";
				mass_2[2][10] = " ** ";

				generator(mass_1, mass_2);
			}
		}

		instruction();
		system("cls");//������

		//����� ����
		//��� ����� ����
		cout << "���� ����� :" << endl;
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				if (mass_1[i][j] == " [] ")
				{
					cout << " ~~ ";
				}
				else {
					cout << mass_1[i][j];
				}
			}
			cout << endl;
		}

		cout << "���� ���� :" << endl;
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				cout << mass_2[i][j];
			}
			cout << endl;
		}


		//���������

		while ("NULL")
		{
			shooting(mass_1, you_name, mass_2);

			cout << pk_hp << endl;

			if (pk_hp == 0)break;

			//shooting_pk(mass_2, mass_1);

			//�������� ��� ���� �� ��������� �������

			shooting_pk(mass_1, mass_2);

			if (yuo_hp == 0)break;
		}

		string over_text[5] = { "���, �� �� ������ �����", "�������, �� ��������� � �����", "��� ������������", "������ � �����", "�� ���� �����, ���� �����, �� � ������� � �������" }; 

		if (yuo_hp == 0)
		{
			cout << "PK �������";
		}  

		if (pk_hp == 0)
		{
			cout << "������� ����� " << you_name << " �������";
		}

		cout << endl;

		//������
		if ((yuo_hp == 20) && (pk_hp == 0))
		{
			cout << over_text[0] << endl;
		}

		if ((yuo_hp >= 15) && (yuo_hp < 20) && (pk_hp == 0))
		{
			cout << over_text[1] << endl;
		}

		if ((yuo_hp <= 14) && (yuo_hp >= 5) && (pk_hp == 0))
		{
			cout << over_text[2] << endl;
		}

		if ((yuo_hp < 5) && (yuo_hp > 0) && (pk_hp == 0))
		{
			cout << over_text[3] << endl;
		}

		if ((yuo_hp == 0) && (pk_hp != 0))
		{
			cout << over_text[4] << endl;
		}

	}

	string reset_game = " ";
	cout << "��� ���? 1 - ��, ����� ������ - ���" << endl;
	cin >> reset_game;

	//��������  
	if (reset_game == "1") { main();}

}





