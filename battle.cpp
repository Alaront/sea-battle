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
	cout << "Когда корабли расставлены, игроки по очереди производят «выстрелы», называя \n квадраты по их «координатам»: «К2», «К9» и т. д. вводить следует кириллицей и \n заглавными буквами. Если выстрел пришёлся в  клетку, не занятую ни одним \n кораблём противника, то в точке появиться знак определяющий пробитую точку. \n Право хода переходит к сопернику. Если выстрел пришёлся в клетку, где находится многопалубный  корабль (размером больше чем 1 клетка), то в точке \n появиться знак определяющий ранение коробля.  Стрелявший игрок получает \n право на ещё один выстрел. Игра ведётся до полной победы одного из игроков, то есть, пока не будут потоплены все корабли." << endl;

	system("pause");

	return  0;

}


int menu()
{

	//загрузка
	for (int i = 10; i < 110; i += 10)
	{
		cout << "\n\n\n\n\n\n\n\n\n" << endl;
		for (int j = 0; j < i / 1.32; j++)
		{
			cout << "|";
		}

		cout << i << "%" << endl;
		Sleep(300);//Задержка
		system("cls");//чистка 

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

//генераци поля, 
int generator(string mass_1[12][12], string mass_2[12][12])
{
	//4 палубы
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

	//3 палубы, кста их двое 
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



	//2 палубы, их 3
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

	//1 палуба, четверо

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

	//4 палубы
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

	//3 палубы, кста их двое 
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



	//2 палубы, их 3
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

	//1 палуба, четверо

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



	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);

	cout << "Поле врага :" << endl;
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



	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
	cout << "Ваше поле :" << endl;
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
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY);

	int axis_x = 0;
	int axis_y = 0;
	string axis_y_s = " ";
	string axis_x_s = " ";

	for (int i = 2; i > 1; i++)
	{
		//на всякий случай 
		if (yuo_hp == 0)break;
		if (pk_hp == 0)break;

		//Координаты для стрельбы
		SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY);
		cout << "По оси Х: "; cin >> axis_y_s;
		cout << "По оси Y: "; cin >> axis_x_s;

		//для букв
		for (int r = 2; r > 1; r++)
		{
			if ((axis_y_s == "А") || (axis_y_s == "Б") || (axis_y_s == "В") || (axis_y_s == "Г") || (axis_y_s == "Д") || (axis_y_s == "Е") || (axis_y_s == "Ж") || (axis_y_s == "З") || (axis_y_s == "И") || (axis_y_s == "К"))
			{
				r = 0;
			}
			else {

				SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY);
				cout << "Ну что это такое..." << endl;
				cout << "По оси Х: "; cin >> axis_y_s;
			}
		}

		//для чисел 
		for (int r = 2; r > 1; r++)
		{
			if ((axis_x_s == "1") || (axis_x_s == "2") || (axis_x_s == "3") || (axis_x_s == "4") || (axis_x_s == "5") || (axis_x_s == "6") || (axis_x_s == "7") || (axis_x_s == "8") || (axis_x_s == "9") || (axis_x_s == "10"))
			{
				r = 0;
			}
			else {

				SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY);
				cout << "Ну что это такое..." << endl;
				cout << "По оси Y: "; cin >> axis_x_s;
			}
		}

		//конвертируем
		if (axis_y_s == "А") axis_y = 1;
		if (axis_y_s == "Б") axis_y = 2;
		if (axis_y_s == "В") axis_y = 3;
		if (axis_y_s == "Г") axis_y = 4;
		if (axis_y_s == "Д") axis_y = 5;
		if (axis_y_s == "Е") axis_y = 6;
		if (axis_y_s == "Ж") axis_y = 7;
		if (axis_y_s == "З") axis_y = 8;
		if (axis_y_s == "И") axis_y = 9;
		if (axis_y_s == "К") axis_y = 10;

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


		//Проверка координат букв
		for (int j = 5; j > 3; j++)
		{
			if (mass_1[axis_x][axis_y] == " ** " || mass_1[axis_x][axis_y] == " X  " || axis_y == 0 || axis_x == 0)
			{

				SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY);
				cout << "Эти координты уже всё..." << endl;
				cout << "Тупа огонь" << endl;
				cout << "По оси Х: "; cin >> axis_y_s;
				cout << "По оси Y: "; cin >> axis_x;
				//конвертируем
				if (axis_y_s == "А") axis_y = 1;
				if (axis_y_s == "Б") axis_y = 2;
				if (axis_y_s == "В") axis_y = 3;
				if (axis_y_s == "Г") axis_y = 4;
				if (axis_y_s == "Д") axis_y = 5;
				if (axis_y_s == "Е") axis_y = 6;
				if (axis_y_s == "Ж") axis_y = 7;
				if (axis_y_s == "З") axis_y = 8;
				if (axis_y_s == "И") axis_y = 9;
				if (axis_y_s == "К") axis_y = 10;

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
			//проверка на пробитые точки и координты
			mass_1[axis_x][axis_y] = " X  ";

			if (mass_1[axis_x - 1][axis_y - 1] != " X  " && mass_1[axis_x - 1][axis_y - 1] != " [] " && mass_1[axis_x - 1][axis_y - 1] != " А " && mass_1[axis_x - 1][axis_y - 1] != "  Б " && mass_1[axis_x - 1][axis_y - 1] != "  В " && mass_1[axis_x - 1][axis_y - 1] != "  Г " && mass_1[axis_x - 1][axis_y - 1] != "  Д " && mass_1[axis_x - 1][axis_y - 1] != "  Е " && mass_1[axis_x - 1][axis_y - 1] != "  Ж " && mass_1[axis_x - 1][axis_y - 1] != "  З " && mass_1[axis_x - 1][axis_y - 1] != "  И " && mass_1[axis_x - 1][axis_y - 1] != "  К " && mass_1[axis_x - 1][axis_y - 1] != " || " && mass_1[axis_x - 1][axis_y - 1] != "  1 " && mass_1[axis_x - 1][axis_y - 1] != "  2 " && mass_1[axis_x - 1][axis_y - 1] != "  3 " && mass_1[axis_x - 1][axis_y - 1] != "  4 " && mass_1[axis_x - 1][axis_y - 1] != "  5 " && mass_1[axis_x - 1][axis_y - 1] != "  6 " && mass_1[axis_x - 1][axis_y - 1] != "  7 " && mass_1[axis_x - 1][axis_y - 1] != "  8 " && mass_1[axis_x - 1][axis_y - 1] != "  9 " && mass_1[axis_x - 1][axis_y - 1] != " 10 ")
			{
				mass_1[axis_x - 1][axis_y - 1] = " ** ";
			}

			if (mass_1[axis_x - 1][axis_y + 1] != " X  " && mass_1[axis_x - 1][axis_y + 1] != " [] " && mass_1[axis_x - 1][axis_y + 1] != " А " && mass_1[axis_x - 1][axis_y + 1] != "  Б " && mass_1[axis_x - 1][axis_y + 1] != "  В " && mass_1[axis_x - 1][axis_y + 1] != "  Г " && mass_1[axis_x - 1][axis_y + 1] != "  Д " && mass_1[axis_x - 1][axis_y + 1] != "  Е " && mass_1[axis_x - 1][axis_y + 1] != "  Ж " && mass_1[axis_x - 1][axis_y + 1] != "  З " && mass_1[axis_x - 1][axis_y + 1] != "  И " && mass_1[axis_x - 1][axis_y + 1] != "  К " && mass_1[axis_x - 1][axis_y + 1] != " || " && mass_1[axis_x - 1][axis_y + 1] != "  1 " && mass_1[axis_x - 1][axis_y + 1] != "  2 " && mass_1[axis_x - 1][axis_y + 1] != "  3 " && mass_1[axis_x - 1][axis_y + 1] != "  4 " && mass_1[axis_x - 1][axis_y + 1] != "  5 " && mass_1[axis_x - 1][axis_y + 1] != "  6 " && mass_1[axis_x - 1][axis_y + 1] != "  7 " && mass_1[axis_x - 1][axis_y + 1] != "  8 " && mass_1[axis_x - 1][axis_y + 1] != "  9 " && mass_1[axis_x - 1][axis_y + 1] != " 10 ")
			{
				mass_1[axis_x - 1][axis_y + 1] = " ** ";
			}

			if (mass_1[axis_x + 1][axis_y - 1] != " X  " && mass_1[axis_x + 1][axis_y - 1] != " [] " && mass_1[axis_x + 1][axis_y - 1] != " А " && mass_1[axis_x + 1][axis_y - 1] != "  Б " && mass_1[axis_x + 1][axis_y - 1] != "  В " && mass_1[axis_x + 1][axis_y - 1] != "  Г " && mass_1[axis_x + 1][axis_y - 1] != "  Д " && mass_1[axis_x + 1][axis_y - 1] != "  Е " && mass_1[axis_x + 1][axis_y - 1] != "  Ж " && mass_1[axis_x + 1][axis_y - 1] != "  З " && mass_1[axis_x + 1][axis_y - 1] != "  И " && mass_1[axis_x + 1][axis_y - 1] != "  К " && mass_1[axis_x + 1][axis_y - 1] != " || " && mass_1[axis_x + 1][axis_y - 1] != "  1 " && mass_1[axis_x + 1][axis_y - 1] != "  2 " && mass_1[axis_x + 1][axis_y - 1] != "  3 " && mass_1[axis_x + 1][axis_y - 1] != "  4 " && mass_1[axis_x + 1][axis_y - 1] != "  5 " && mass_1[axis_x + 1][axis_y - 1] != "  6 " && mass_1[axis_x + 1][axis_y - 1] != "  7 " && mass_1[axis_x + 1][axis_y - 1] != "  8 " && mass_1[axis_x + 1][axis_y - 1] != "  9 " && mass_1[axis_x + 1][axis_y - 1] != " 10 ")
			{
				mass_1[axis_x + 1][axis_y - 1] = " ** ";
			}

			if (mass_1[axis_x + 1][axis_y + 1] != " X  " && mass_1[axis_x + 1][axis_y + 1] != " [] " && mass_1[axis_x + 1][axis_y + 1] != " А " && mass_1[axis_x + 1][axis_y + 1] != "  Б " && mass_1[axis_x + 1][axis_y + 1] != "  В " && mass_1[axis_x + 1][axis_y + 1] != "  Г " && mass_1[axis_x + 1][axis_y + 1] != "  Д " && mass_1[axis_x + 1][axis_y + 1] != "  Е " && mass_1[axis_x + 1][axis_y + 1] != "  Ж " && mass_1[axis_x + 1][axis_y + 1] != "  З " && mass_1[axis_x + 1][axis_y + 1] != "  И " && mass_1[axis_x + 1][axis_y + 1] != "  К " && mass_1[axis_x + 1][axis_y + 1] != " || " && mass_1[axis_x + 1][axis_y + 1] != "  1 " && mass_1[axis_x + 1][axis_y + 1] != "  2 " && mass_1[axis_x + 1][axis_y + 1] != "  3 " && mass_1[axis_x + 1][axis_y + 1] != "  4 " && mass_1[axis_x + 1][axis_y + 1] != "  5 " && mass_1[axis_x + 1][axis_y + 1] != "  6 " && mass_1[axis_x + 1][axis_y + 1] != "  7 " && mass_1[axis_x + 1][axis_y + 1] != "  8 " && mass_1[axis_x + 1][axis_y + 1] != "  9 " && mass_1[axis_x + 1][axis_y + 1] != " 10 ")
			{
				mass_1[axis_x + 1][axis_y + 1] = " ** ";
			}

			//отнимем жизу у пк
			pk_hp--;
		}

		system("cls");

		//уничтожение соседних клеток
		//4 палубы горизонт
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_1[k][t] == " X  ") && (mass_1[k][t + 1] == " X  ") && (mass_1[k][t + 2] == " X  ") && (mass_1[k][t + 3] == " X  "))
				{
					//провeрека на наличие букв и цифр
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
		//4 палубы вертикаль
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_1[k][t] == " X  ") && (mass_1[k + 1][t] == " X  ") && (mass_1[k + 2][t] == " X  ") && (mass_1[k + 3][t] == " X  "))
				{
					//провeрека на наличие букв и цифр
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

		// 1 палуба
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_1[k][t] == " X  ") && (mass_1[k - 1][t] != " [] ") && (mass_1[k + 1][t] != " [] ") && (mass_1[k][t - 1] != " [] ") && (mass_1[k][t + 1] != " [] ") && (mass_1[k - 1][t] != " X  ") && (mass_1[k + 1][t] != " X  ") && (mass_1[k][t - 1] != " X  ") && (mass_1[k][t + 1] != " X  "))
				{
					if ((k + 1 != 0) && (t != 0))
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


		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
		//ещё вывод поля
		cout << "Поле врага :" << endl;
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



		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
		cout << "Ваше поле :" << endl;
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				cout << mass_2[i][j];
			}
			cout << endl;
		}
		SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY);
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

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	int axis_x_pk = 0;
	int axis_y_pk = 0;


	for (int i = 2; i > 1; i++)
	{
		if (yuo_hp == 0)break;

		axis_x_pk = rand() % 10 + 1;
		axis_y_pk = rand() % 10 + 1;

		//Проверка координат
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

		//логика стрельбы по соседним клеткам
		int temp_shoot = 0;//будем решать куда стрелять
		for (int k = 0; k < 11; k++)//С помощью циклов определяем пробитую точку
		{
			for (int t = 0; t < 11; t++)
			{
				if (mass_2[k][t] == " X  ")//как только нашли пробитую точку, решаем как дальше стрелять 
				{

					//проверка на случай если все точки вокруг корабля уже были проверены ПК 
					if ((mass_2[k + 1][t] == " ** ") && (mass_2[k - 1][t] == " ** ") && (mass_2[k][t + 1] == " ** ") && mass_2[k][t - 1] == " ** ")
					{
						axis_x_pk = rand() % 10 + 1;
						axis_y_pk = rand() % 10 + 1;
					}
					else {
						temp_shoot = rand() % 4 + 1;

						//если выпало число n выполниться соответствующее условие
						if (temp_shoot == 1) { axis_x_pk = k; axis_y_pk = t + 1; }
						if (temp_shoot == 2) { axis_x_pk = k + 1; axis_y_pk = t; }
						if (temp_shoot == 3) { axis_x_pk = k; axis_y_pk = t - 1; }
						if (temp_shoot == 4) { axis_x_pk = k - 1; axis_y_pk = t; }
						break;
					}
				}
			}
		}

		//Проверка координат
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

			//проверка на пробитые точки и координты
			mass_2[axis_x_pk][axis_y_pk] = " X  ";

			yuo_hp--;

			if (mass_2[axis_x_pk - 1][axis_y_pk - 1] != " X  " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != " [] " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != " А " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  Б " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  В " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  Г " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  Д " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  Е " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  Ж " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  З " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  И " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  К " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != " || " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  1 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  2 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  3 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  4 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  5 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  6 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  7 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  8 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  9 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != " 10 ")
			{
				mass_2[axis_x_pk - 1][axis_y_pk - 1] = " ** ";
			}

			if (mass_1[axis_x_pk - 1][axis_y_pk + 1] != " X  " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != " [] " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != " А " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  Б " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  В " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  Г " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  Д " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  Е " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  Ж " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  З " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  И " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  К " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != " || " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  1 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  2 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  3 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  4 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  5 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  6 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  7 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  8 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  9 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != " 10 ")
			{
				mass_2[axis_x_pk - 1][axis_y_pk + 1] = " ** ";
			}

			if (mass_2[axis_x_pk + 1][axis_y_pk - 1] != " X  " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != " [] " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != " А " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  Б " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  В " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  Г " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  Д " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  Е " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  Ж " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  З " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  И " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  К " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != " || " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  1 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  2 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  3 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  4 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  5 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  6 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  7 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  8 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  9 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != " 10 ")
			{
				mass_2[axis_x_pk + 1][axis_y_pk - 1] = " ** ";
			}

			if (mass_2[axis_x_pk + 1][axis_y_pk + 1] != " X  " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != " [] " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != " А " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  Б " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  В " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  Г " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  Д " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  Е " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  Ж " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  З " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  И " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  К " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != " || " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  1 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  2 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  3 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  4 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  5 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  6 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  7 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  8 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  9 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != " 10 ")
			{
				mass_2[axis_x_pk + 1][axis_y_pk + 1] = " ** ";
			}
		}

		//уничтожение соседних клеток
		//4 палубы горизонт
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_2[k][t] == " X  ") && (mass_2[k][t + 1] == " X  ") && (mass_2[k][t + 2] == " X  ") && (mass_2[k][t + 3] == " X  "))
				{
					//провeрека на наличие букв и цифр
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
		//4 палубы вертикаль
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_2[k][t] == " X  ") && (mass_2[k + 1][t] == " X  ") && (mass_2[k + 2][t] == " X  ") && (mass_2[k + 3][t] == " X  "))
				{
					//провeрека на наличие букв и цифр
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

		// 1 палуба
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


		system("cls");//чистка

		//ещё вывод поля


		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);

		cout << "Поле врага :" << endl;

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


		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);

		cout << "Ваше поле :" << endl;
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



	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY);

	//если будет рекурсия вернуть значения на старте
	pk_hp = 20;
	yuo_hp = 20;

	//меню игры
	menu();

	string choice = "";
	cout << "\n\t\t Ваш выбор? ";
	cin >> choice;

	while ("NULL") {
		if ((choice == "1"))
		{
			break;
		}
		else if (choice == "2")
		{
			cout << "Из-за не хвати времени, сил, денег, еды.... Вообщем проект временно заморожен. Но мы надеемся на перезапуск после 2019 года. Спасибо за понимание";
			Sleep(5000);
			break;
		}
		else {
			cout << "\t\tДавайте по новой, ваш выбор? ";
			cin >> choice;
		}
	}

	if (choice == "1" || choice == "2") {

		system("cls");//чистка

		//Sleep(5000);//Задержка

		string you_name = " ";
		cout << "Ваше имя адмирал? ";
		cin >> you_name;

		//vrag

		string mass_1[12][12] = {
			{" || ", " А ",  "  Б ", "  В ", "  Г ", "  Д ", "  Е ", "  Ж ", "  З ", "  И ", "  К "},
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
			{" || ", " А ",  "  Б ", "  В ", "  Г ", "  Д ", "  Е ", "  Ж ", "  З ", "  И ", "  К "},
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


		//функция на генерацию поля
		generator(mass_1, mass_2);
		int choice2 = 0;
		string choice_S2 = "";


		SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY);

		//а если поле не понравиться 
		for (int t = 4; t > 2; t++)
		{

			SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY);

			cout << "Как вам поле? \n Подходит или нет? \n 1 - Это был настоящий classic,я бы даже сказал pleasantly \n 2 - Давай по новой Миша, ВСЁ ПЛОХО" << endl;

			cin >> choice_S2;


			for (int i = 4; i > 2; i++)
			{
				if ((choice_S2 == "1") || (choice_S2 == "2"))
				{
					i = 0;
				}
				else {
					if (i >= 8)
					{
						cout << "Ясно, желаю автору закончить 3 класс \n Сударь " << you_name << ", такого варианта выбора нет. Пожалуйста, подумайте снова." << endl;
						cin >> choice_S2;
					}
					else {
						cout << "Сударь " << you_name << ", такого варианта выбора нет. Пожалуйста, подумайте снова." << endl;
						cin >> choice_S2;
					}
				}

				system("cls");//чистка
			}

			if (choice_S2 == "1")
			{
				t = 0;
				system("cls");//чистка
			}
			else if (choice_S2 == "2") {

				//генерируем поля, как было раньше, а раньше было лучше
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

				//вернём забагованую точку
				mass_1[9][10] = " ** ";
				mass_2[2][10] = " ** ";

				generator(mass_1, mass_2);

			}
		}


		SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY);

		instruction();

		SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY);

		system("cls");//чистка

		//вывод поля
		//ещё вывод поля


		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
		cout << "Поле врага :" << endl;
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


		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
		cout << "Ваше поле :" << endl;
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				cout << mass_2[i][j];
			}
			cout << endl;
		}


		//стреляете

		while ("NULL")
		{

			SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY);
			shooting(mass_1, you_name, mass_2);

			cout << pk_hp << endl;

			if (pk_hp == 0)break;

			//shooting_pk(mass_2, mass_1);

			//Стреляет бот надо на отдельную функцию

			shooting_pk(mass_1, mass_2);

			if (yuo_hp == 0)break;
		}

		string over_text[5] = { "Ммм, да вы просто гений", "Неплохо, но встречали и лучше", "Без комментариев", "Просто в голос", "Вы либо идиот, либо гений, но я склонен к первому" };

		if (yuo_hp == 0)
		{
			cout << "PK победил";
		}

		if (pk_hp == 0)
		{
			cout << "Адмирал флота " << you_name << " победил";
		}

		cout << endl;

		//ачивки
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
	cout << "ещё раз? 1 - да, любое другое - нет" << endl;
	cin >> reset_game;

	//рекурсия  
	if (reset_game == "1") { main(); }

}





