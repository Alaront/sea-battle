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
	cout << "$)C,,,`,T,U,Q ,\,`,b,Q,R,],Z ,b,Q,c,c,d,Q,S,],V,_,m, ,Z,T,b,`,\,Z ,a,` ,`,i,V,b,V,U,Z ,a,b,`,Z,Y,S,`,U,q,d ?,S,m,c,d,b,V,],m?, ,_,Q,Y,m,S,Q,q \n ,\,S,Q,U,b,Q,d,m ,a,` ,Z,g ?,\,`,`,b,U,Z,_,Q,d,Q,^?: ?,,2?, ?,,9? ,Z ,d. ,U. ,S,S,`,U,Z,d,n ,c,],V,U,e,V,d ,\,Z,b,Z,],],Z,h,V,[ ,Z \n ,Y,Q,T,],Q,S,_,m,^,Z ,R,e,\,S,Q,^,Z. ,&,c,],Z ,S,m,c,d,b,V,] ,a,b,Z,j,W,],c,q ,S  ,\,],V,d,\,e, ,_,V ,Y,Q,_,q,d,e,p ,_,Z ,`,U,_,Z,^ \n ,\,`,b,Q,R,],W,^ ,a,b,`,d,Z,S,_,Z,\,Q, ,d,` ,S ,d,`,i,\,V ,a,`,q,S,Z,d,n,c,q ,Y,_,Q,\ ,`,a,b,V,U,V,],q,p,k,Z,[ ,a,b,`,R,Z,d,e,p ,d,`,i,\,e. \n ,1,b,Q,S,` ,g,`,U,Q ,a,V,b,V,g,`,U,Z,d ,\ ,c,`,a,V,b,_,Z,\,e. ,&,c,],Z ,S,m,c,d,b,V,] ,a,b,Z,j,W,],c,q ,S ,\,],V,d,\,e, ,T,U,V ,_,Q,g,`,U,Z,d,c,q ,^,_,`,T,`,a,Q,],e,R,_,m,[  ,\,`,b,Q,R,],n (,b,Q,Y,^,V,b,`,^ ,R,`,],n,j,V ,i,V,^ 1 ,\,],V,d,\,Q), ,d,` ,S ,d,`,i,\,V \n ,a,`,q,S,Z,d,n,c,q ,Y,_,Q,\ ,`,a,b,V,U,V,],q,p,k,Z,[ ,b,Q,_,V,_,Z,V ,\,`,b,`,R,],q.  ,3,d,b,V,],q,S,j,Z,[ ,Z,T,b,`,\ ,a,`,],e,i,Q,V,d \n ,a,b,Q,S,` ,_,Q ,V,k,W ,`,U,Z,_ ,S,m,c,d,b,V,]. ,*,T,b,Q ,S,V,U,W,d,c,q ,U,` ,a,`,],_,`,[ ,a,`,R,V,U,m ,`,U,_,`,T,` ,Z,Y ,Z,T,b,`,\,`,S, ,d,` ,V,c,d,n, ,a,`,\,Q ,_,V ,R,e,U,e,d ,a,`,d,`,a,],V,_,m ,S,c,V ,\,`,b,Q,R,],Z." << endl;

	system("pause");

	return  0;

} 


int menu()
{

	//,Y,Q,T,b,e,Y,\,Q
	for (int i = 10; i < 110; i += 10)
	{
		cout << "\n\n\n\n\n\n\n\n\n" << endl;
		for (int j = 0; j < i/1.32; j++)
		{
			cout << "|";
		}

		cout << i << "%" << endl;
		Sleep(300);//,),Q,U,V,b,X,\,Q
		system("cls");//,i,Z,c,d,\,Q 

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

//,T,V,_,V,b,Q,h,Z ,a,`,],q, 
int generator(string mass_1[12][12], string mass_2[12][12])
{
	//4 ,a,Q,],e,R,m
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

	//3 ,a,Q,],e,R,m, ,\,c,d,Q ,Z,g ,U,S,`,V 
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



	//2 ,a,Q,],e,R,m, ,Z,g 3
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

	//1 ,a,Q,],e,R,Q, ,i,V,d,S,V,b,`

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

	//4 ,a,Q,],e,R,m
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

	//3 ,a,Q,],e,R,m, ,\,c,d,Q ,Z,g ,U,S,`,V 
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



	//2 ,a,Q,],e,R,m, ,Z,g 3
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

	//1 ,a,Q,],e,R,Q, ,i,V,d,S,V,b,`

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

	cout << ",1,`,],V ,S,b,Q,T,Q :" << endl;
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


	cout << ",#,Q,j,V ,a,`,],V :" << endl;
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
		//,_,Q ,S,c,q,\,Z,[ ,c,],e,i,Q,[ 
		if (yuo_hp == 0)break;
		if (pk_hp == 0)break;

		//,,,`,`,b,U,Z,_,Q,d,m ,U,],q ,c,d,b,V,],n,R,m
		cout << ",1,` ,`,c,Z ,7: "; cin >> axis_y_s;
		cout << ",1,` ,`,c,Z Y: "; cin >> axis_x_s;

		//,U,],q ,R,e,\,S
		for (int r = 2; r > 1; r++)
		{
			if ((axis_y_s == ",!") || (axis_y_s == ","") || (axis_y_s == ",#") || (axis_y_s == ",$") || (axis_y_s == ",%") || (axis_y_s == ",&") || (axis_y_s == ",(") || (axis_y_s == ",)") || (axis_y_s == ",*") || (axis_y_s == ",,"))
			{
				r = 0;
			}
			else {
				cout << ",/,e ,i,d,` ,o,d,` ,d,Q,\,`,V..." << endl;
				cout << ",1,` ,`,c,Z ,7: "; cin >> axis_y_s;
			}
		}

		//,U,],q ,i,Z,c,V,] 
		for (int r = 2; r > 1; r++)
		{
			if ((axis_x_s == "1") || (axis_x_s == "2") || (axis_x_s == "3") || (axis_x_s == "4") || (axis_x_s == "5") || (axis_x_s == "6") || (axis_x_s == "7") || (axis_x_s == "8") || (axis_x_s == "9") || (axis_x_s == "10"))
			{
				r = 0;
			}
			else {
				cout << ",/,e ,i,d,` ,o,d,` ,d,Q,\,`,V..." << endl;
				cout << ",1,` ,`,c,Z Y: "; cin >> axis_x_s;
			}
		}

		//,\,`,_,S,V,b,d,Z,b,e,V,^
		if (axis_y_s == ",!") axis_y = 1;
		if (axis_y_s == ","") axis_y = 2;
		if (axis_y_s == ",#") axis_y = 3;
		if (axis_y_s == ",$") axis_y = 4;
		if (axis_y_s == ",%") axis_y = 5;
		if (axis_y_s == ",&") axis_y = 6;
		if (axis_y_s == ",(") axis_y = 7;
		if (axis_y_s == ",)") axis_y = 8;
		if (axis_y_s == ",*") axis_y = 9;
		if (axis_y_s == ",,") axis_y = 10;

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


		//,1,b,`,S,V,b,\,Q ,\,`,`,b,U,Z,_,Q,d ,R,e,\,S
		for (int j = 5; j > 3; j++)
		{
			if (mass_1[axis_x][axis_y] == " ** " || mass_1[axis_x][axis_y] == " X  " || axis_y == 0 || axis_x == 0)
			{
				cout << ",?,d,Z ,\,`,`,b,U,Z,_,d,m ,e,X,V ,S,c,W..." << endl;
				cout << ",4,e,a,Q ,`,T,`,_,n" << endl;
				cout << ",1,` ,`,c,Z ,7: "; cin >> axis_y_s;
				cout << ",1,` ,`,c,Z Y: "; cin >> axis_x;
				//,\,`,_,S,V,b,d,Z,b,e,V,^
				if (axis_y_s == ",!") axis_y = 1;
				if (axis_y_s == ","") axis_y = 2;
				if (axis_y_s == ",#") axis_y = 3;
				if (axis_y_s == ",$") axis_y = 4;
				if (axis_y_s == ",%") axis_y = 5;
				if (axis_y_s == ",&") axis_y = 6;
				if (axis_y_s == ",(") axis_y = 7;
				if (axis_y_s == ",)") axis_y = 8;
				if (axis_y_s == ",*") axis_y = 9;
				if (axis_y_s == ",,") axis_y = 10;

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
			//,a,b,`,S,V,b,\,Q ,_,Q ,a,b,`,R,Z,d,m,V ,d,`,i,\,Z ,Z ,\,`,`,b,U,Z,_,d,m
			mass_1[axis_x][axis_y] = " X  ";

			if (mass_1[axis_x - 1][axis_y - 1] != " X  " && mass_1[axis_x - 1][axis_y - 1] != " [] " && mass_1[axis_x - 1][axis_y - 1] != " ,! " && mass_1[axis_x - 1][axis_y - 1] != "  ," " && mass_1[axis_x - 1][axis_y - 1] != "  ,# " && mass_1[axis_x - 1][axis_y - 1] != "  ,$ " && mass_1[axis_x - 1][axis_y - 1] != "  ,% " && mass_1[axis_x - 1][axis_y - 1] != "  ,& " && mass_1[axis_x - 1][axis_y - 1] != "  ,( " && mass_1[axis_x - 1][axis_y - 1] != "  ,) " && mass_1[axis_x - 1][axis_y - 1] != "  ,* " && mass_1[axis_x - 1][axis_y - 1] != "  ,, " && mass_1[axis_x - 1][axis_y - 1] != " || " && mass_1[axis_x - 1][axis_y - 1] != "  1 " && mass_1[axis_x - 1][axis_y - 1] != "  2 " && mass_1[axis_x - 1][axis_y - 1] != "  3 " && mass_1[axis_x - 1][axis_y - 1] != "  4 " && mass_1[axis_x - 1][axis_y - 1] != "  5 " && mass_1[axis_x - 1][axis_y - 1] != "  6 " && mass_1[axis_x - 1][axis_y - 1] != "  7 " && mass_1[axis_x - 1][axis_y - 1] != "  8 " && mass_1[axis_x - 1][axis_y - 1] != "  9 " && mass_1[axis_x - 1][axis_y - 1] != " 10 ")
			{
				mass_1[axis_x - 1][axis_y - 1] = " ** ";
			}

			if (mass_1[axis_x - 1][axis_y + 1] != " X  " && mass_1[axis_x - 1][axis_y + 1] != " [] " && mass_1[axis_x - 1][axis_y + 1] != " ,! " && mass_1[axis_x - 1][axis_y + 1] != "  ," " && mass_1[axis_x - 1][axis_y + 1] != "  ,# " && mass_1[axis_x - 1][axis_y + 1] != "  ,$ " && mass_1[axis_x - 1][axis_y + 1] != "  ,% " && mass_1[axis_x - 1][axis_y + 1] != "  ,& " && mass_1[axis_x - 1][axis_y + 1] != "  ,( " && mass_1[axis_x - 1][axis_y + 1] != "  ,) " && mass_1[axis_x - 1][axis_y + 1] != "  ,* " && mass_1[axis_x - 1][axis_y + 1] != "  ,, " && mass_1[axis_x - 1][axis_y + 1] != " || " && mass_1[axis_x - 1][axis_y + 1] != "  1 " && mass_1[axis_x - 1][axis_y + 1] != "  2 " && mass_1[axis_x - 1][axis_y + 1] != "  3 " && mass_1[axis_x - 1][axis_y + 1] != "  4 " && mass_1[axis_x - 1][axis_y + 1] != "  5 " && mass_1[axis_x - 1][axis_y + 1] != "  6 " && mass_1[axis_x - 1][axis_y + 1] != "  7 " && mass_1[axis_x - 1][axis_y + 1] != "  8 " && mass_1[axis_x - 1][axis_y + 1] != "  9 " && mass_1[axis_x - 1][axis_y + 1] != " 10 ")
			{
				mass_1[axis_x - 1][axis_y + 1] = " ** ";
			}

			if (mass_1[axis_x + 1][axis_y - 1] != " X  " && mass_1[axis_x + 1][axis_y - 1] != " [] " && mass_1[axis_x + 1][axis_y - 1] != " ,! " && mass_1[axis_x + 1][axis_y - 1] != "  ," " && mass_1[axis_x + 1][axis_y - 1] != "  ,# " && mass_1[axis_x + 1][axis_y - 1] != "  ,$ " && mass_1[axis_x + 1][axis_y - 1] != "  ,% " && mass_1[axis_x + 1][axis_y - 1] != "  ,& " && mass_1[axis_x + 1][axis_y - 1] != "  ,( " && mass_1[axis_x + 1][axis_y - 1] != "  ,) " && mass_1[axis_x + 1][axis_y - 1] != "  ,* " && mass_1[axis_x + 1][axis_y - 1] != "  ,, " && mass_1[axis_x + 1][axis_y - 1] != " || " && mass_1[axis_x + 1][axis_y - 1] != "  1 " && mass_1[axis_x + 1][axis_y - 1] != "  2 " && mass_1[axis_x + 1][axis_y - 1] != "  3 " && mass_1[axis_x + 1][axis_y - 1] != "  4 " && mass_1[axis_x + 1][axis_y - 1] != "  5 " && mass_1[axis_x + 1][axis_y - 1] != "  6 " && mass_1[axis_x + 1][axis_y - 1] != "  7 " && mass_1[axis_x + 1][axis_y - 1] != "  8 " && mass_1[axis_x + 1][axis_y - 1] != "  9 " && mass_1[axis_x + 1][axis_y - 1] != " 10 ")
			{
				mass_1[axis_x + 1][axis_y - 1] = " ** ";
			}

			if (mass_1[axis_x + 1][axis_y + 1] != " X  " && mass_1[axis_x + 1][axis_y + 1] != " [] " && mass_1[axis_x + 1][axis_y + 1] != " ,! " && mass_1[axis_x + 1][axis_y + 1] != "  ," " && mass_1[axis_x + 1][axis_y + 1] != "  ,# " && mass_1[axis_x + 1][axis_y + 1] != "  ,$ " && mass_1[axis_x + 1][axis_y + 1] != "  ,% " && mass_1[axis_x + 1][axis_y + 1] != "  ,& " && mass_1[axis_x + 1][axis_y + 1] != "  ,( " && mass_1[axis_x + 1][axis_y + 1] != "  ,) " && mass_1[axis_x + 1][axis_y + 1] != "  ,* " && mass_1[axis_x + 1][axis_y + 1] != "  ,, " && mass_1[axis_x + 1][axis_y + 1] != " || " && mass_1[axis_x + 1][axis_y + 1] != "  1 " && mass_1[axis_x + 1][axis_y + 1] != "  2 " && mass_1[axis_x + 1][axis_y + 1] != "  3 " && mass_1[axis_x + 1][axis_y + 1] != "  4 " && mass_1[axis_x + 1][axis_y + 1] != "  5 " && mass_1[axis_x + 1][axis_y + 1] != "  6 " && mass_1[axis_x + 1][axis_y + 1] != "  7 " && mass_1[axis_x + 1][axis_y + 1] != "  8 " && mass_1[axis_x + 1][axis_y + 1] != "  9 " && mass_1[axis_x + 1][axis_y + 1] != " 10 ")
			{
				mass_1[axis_x + 1][axis_y + 1] = " ** ";
			}

			//,`,d,_,Z,^,V,^ ,X,Z,Y,e ,e ,a,\
			pk_hp--;
		}

		system("cls");

		//,e,_,Z,i,d,`,X,V,_,Z,V ,c,`,c,V,U,_,Z,g ,\,],V,d,`,\
		//4 ,a,Q,],e,R,m ,T,`,b,Z,Y,`,_,d
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_1[k][t] == " X  ") && (mass_1[k][t + 1] == " X  ") && (mass_1[k][t + 2] == " X  ") && (mass_1[k][t + 3] == " X  "))
				{
					//,a,b,`,Se,b,V,\,Q ,_,Q ,_,Q,],Z,i,Z,V ,R,e,\,S ,Z ,h,Z,f,b
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
		//4 ,a,Q,],e,R,m ,S,V,b,d,Z,\,Q,],n
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_1[k][t] == " X  ") && (mass_1[k + 1][t] == " X  ") && (mass_1[k + 2][t] == " X  ") && (mass_1[k + 3][t] == " X  "))
				{
					//,a,b,`,Se,b,V,\,Q ,_,Q ,_,Q,],Z,i,Z,V ,R,e,\,S ,Z ,h,Z,f,b
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

		// 1 ,a,Q,],e,R,Q
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

		//,V,k,W ,S,m,S,`,U ,a,`,],q
		cout << ",1,`,],V ,S,b,Q,T,Q :" << endl;
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

		cout << ",#,Q,j,V ,a,`,],V :" << endl;
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

		//,1,b,`,S,V,b,\,Q ,\,`,`,b,U,Z,_,Q,d
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

		//,],`,T,Z,\,Q ,c,d,b,V,],n,R,m ,a,` ,c,`,c,V,U,_,Z,^ ,\,],V,d,\,Q,^
		int temp_shoot = 0;//,R,e,U,V,^ ,b,V,j,Q,d,n ,\,e,U,Q ,c,d,b,V,],q,d,n
		for (int k = 0; k < 11; k++)//,3 ,a,`,^,`,k,n,p ,h,Z,\,],`,S ,`,a,b,V,U,V,],q,V,^ ,a,b,`,R,Z,d,e,p ,d,`,i,\,e
		{
			for (int t = 0; t < 11; t++)
			{
				if (mass_2[k][t] == " X  ")//,\,Q,\ ,d,`,],n,\,` ,_,Q,j,],Z ,a,b,`,R,Z,d,e,p ,d,`,i,\,e, ,b,V,j,Q,V,^ ,\,Q,\ ,U,Q,],n,j,V ,c,d,b,V,],q,d,n 
				{

					//,a,b,`,S,V,b,\,Q ,_,Q ,c,],e,i,Q,[ ,V,c,],Z ,S,c,V ,d,`,i,\,Z ,S,`,\,b,e,T ,\,`,b,Q,R,],q ,e,X,V ,R,m,],Z ,a,b,`,S,V,b,V,_,m ,1,, 
					if ((mass_2[k + 1][t] == " ** ") && (mass_2[k - 1][t] == " ** ") && (mass_2[k][t + 1] == " ** ") && mass_2[k][t - 1] == " ** ")
					{
						axis_x_pk = rand() % 10 + 1;
						axis_y_pk = rand() % 10 + 1;
					}
					else {
						temp_shoot = rand() % 4 + 1;

						//,V,c,],Z ,S,m,a,Q,],` ,i,Z,c,],` n ,S,m,a,`,],_,Z,d,n,c,q ,c,`,`,d,S,V,d,c,d,S,e,p,k,V,V ,e,c,],`,S,Z,V
						if (temp_shoot == 1) { axis_x_pk = k; axis_y_pk = t + 1; }
						if (temp_shoot == 2) { axis_x_pk = k + 1; axis_y_pk = t; }
						if (temp_shoot == 3) { axis_x_pk = k; axis_y_pk = t - 1; }
						if (temp_shoot == 4) { axis_x_pk = k - 1; axis_y_pk = t; }
						break;
					}
				}
			}
		}

		//,1,b,`,S,V,b,\,Q ,\,`,`,b,U,Z,_,Q,d
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

			//,a,b,`,S,V,b,\,Q ,_,Q ,a,b,`,R,Z,d,m,V ,d,`,i,\,Z ,Z ,\,`,`,b,U,Z,_,d,m
			mass_2[axis_x_pk][axis_y_pk] = " X  ";

			yuo_hp--;

			if (mass_2[axis_x_pk - 1][axis_y_pk - 1] != " X  " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != " [] " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != " ,! " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  ," " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  ,# " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  ,$ " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  ,% " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  ,& " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  ,( " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  ,) " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  ,* " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  ,, " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != " || " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  1 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  2 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  3 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  4 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  5 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  6 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  7 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  8 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != "  9 " && mass_2[axis_x_pk - 1][axis_y_pk - 1] != " 10 ")
			{
				mass_2[axis_x_pk - 1][axis_y_pk - 1] = " ** ";
			}

			if (mass_1[axis_x_pk - 1][axis_y_pk + 1] != " X  " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != " [] " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != " ,! " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  ," " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  ,# " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  ,$ " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  ,% " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  ,& " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  ,( " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  ,) " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  ,* " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  ,, " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != " || " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  1 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  2 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  3 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  4 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  5 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  6 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  7 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  8 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != "  9 " && mass_2[axis_x_pk - 1][axis_y_pk + 1] != " 10 ")
			{
				mass_2[axis_x_pk - 1][axis_y_pk + 1] = " ** ";
			}

			if (mass_2[axis_x_pk + 1][axis_y_pk - 1] != " X  " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != " [] " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != " ,! " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  ," " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  ,# " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  ,$ " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  ,% " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  ,& " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  ,( " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  ,) " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  ,* " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  ,, " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != " || " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  1 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  2 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  3 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  4 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  5 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  6 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  7 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  8 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != "  9 " && mass_2[axis_x_pk + 1][axis_y_pk - 1] != " 10 ")
			{
				mass_2[axis_x_pk + 1][axis_y_pk - 1] = " ** ";
			}

			if (mass_2[axis_x_pk + 1][axis_y_pk + 1] != " X  " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != " [] " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != " ,! " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  ," " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  ,# " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  ,$ " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  ,% " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  ,& " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  ,( " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  ,) " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  ,* " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  ,, " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != " || " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  1 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  2 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  3 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  4 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  5 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  6 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  7 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  8 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != "  9 " && mass_2[axis_x_pk + 1][axis_y_pk + 1] != " 10 ")
			{
				mass_2[axis_x_pk + 1][axis_y_pk + 1] = " ** ";
			}
		}

		//,e,_,Z,i,d,`,X,V,_,Z,V ,c,`,c,V,U,_,Z,g ,\,],V,d,`,\
		//4 ,a,Q,],e,R,m ,T,`,b,Z,Y,`,_,d
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_2[k][t] == " X  ") && (mass_2[k][t + 1] == " X  ") && (mass_2[k][t + 2] == " X  ") && (mass_2[k][t + 3] == " X  "))
				{
					//,a,b,`,Se,b,V,\,Q ,_,Q ,_,Q,],Z,i,Z,V ,R,e,\,S ,Z ,h,Z,f,b
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
		//4 ,a,Q,],e,R,m ,S,V,b,d,Z,\,Q,],n
		for (int k = 0; k < 11; k++)
		{
			for (int t = 0; t < 11; t++)
			{
				if ((mass_2[k][t] == " X  ") && (mass_2[k + 1][t] == " X  ") && (mass_2[k + 2][t] == " X  ") && (mass_2[k + 3][t] == " X  "))
				{
					//,a,b,`,Se,b,V,\,Q ,_,Q ,_,Q,],Z,i,Z,V ,R,e,\,S ,Z ,h,Z,f,b
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

		// 1 ,a,Q,],e,R,Q
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


		system("cls");//,i,Z,c,d,\,Q

		//,V,k,W ,S,m,S,`,U ,a,`,],q
		cout << ",1,`,],V ,S,b,Q,T,Q :" << endl;
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

		cout << ",#,Q,j,V ,a,`,],V :" << endl;
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

	//,V,c,],Z ,R,e,U,V,d ,b,V,\,e,b,c,Z,q ,S,V,b,_,e,d,n ,Y,_,Q,i,V,_,Z,q ,_,Q ,c,d,Q,b,d,V
	pk_hp = 20;
	yuo_hp = 20;
	 
	//,^,V,_,p ,Z,T,b,m
	menu();

	string choice = "";
	cout << "\n\t\t ,#,Q,j ,S,m,R,`,b? ";
	cin >> choice;

	while ("NULL") {
		if ((choice == "1"))
		{
			break;
		}else if (choice == "2")
		{
			cout << ",*,Y-,Y,Q ,_,V ,g,S,Q,d,Z ,S,b,V,^,V,_,Z, ,c,Z,], ,U,V,_,V,T, ,V,U,m.... ,#,`,`,R,k,V,^ ,a,b,`,V,\,d ,S,b,V,^,V,_,_,` ,Y,Q,^,`,b,`,X,V,_. ,/,` ,^,m ,_,Q,U,V,V,^,c,q ,_,Q ,a,V,b,V,Y,Q,a,e,c,\ ,a,`,c,],V 2019 ,T,`,U,Q. ,3,a,Q,c,Z,R,` ,Y,Q ,a,`,_,Z,^,Q,_,Z,V";
			Sleep(5000);
			break;
		}
		else {
			cout << "\t\t,%,Q,S,Q,[,d,V ,a,` ,_,`,S,`,[, ,S,Q,j ,S,m,R,`,b? ";
			cin >> choice;
		}
	}

	if (choice == "1" || choice == "2") {

		system("cls");//,i,Z,c,d,\,Q

		//Sleep(5000);//,),Q,U,V,b,X,\,Q

		string you_name = " ";
		cout << ",#,Q,j,V ,Z,^,q ,Q,U,^,Z,b,Q,]? ";
		cin >> you_name; 

		//vrag
		 
		string mass_1[12][12] = {
			{" || ", " ,! ",  "  ," ", "  ,# ", "  ,$ ", "  ,% ", "  ,& ", "  ,( ", "  ,) ", "  ,* ", "  ,, "},
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
			{" || ", " ,! ",  "  ," ", "  ,# ", "  ,$ ", "  ,% ", "  ,& ", "  ,( ", "  ,) ", "  ,* ", "  ,, "},
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

		//,f,e,_,\,h,Z,q ,_,Q ,T,V,_,V,b,Q,h,Z,p ,a,`,],q
		generator(mass_1, mass_2);
		int choice2 = 0;
		string choice_S2 = ""; 

		//,Q ,V,c,],Z ,a,`,],V ,_,V ,a,`,_,b,Q,S,Z,d,n,c,q 
		for(int t = 4; t > 2; t++)
		{
			cout << ",,,Q,\ ,S,Q,^ ,a,`,],V? \n ,1,`,U,g,`,U,Z,d ,Z,],Z ,_,V,d? \n 1 - ,?,d,` ,R,m,] ,_,Q,c,d,`,q,k,Z,[ classic,,q ,R,m ,U,Q,X,V ,c,\,Q,Y,Q,] pleasantly \n 2 - ,%,Q,S,Q,[ ,a,` ,_,`,S,`,[ ,.,Z,j,Q, ,#,3,' ,1,-,0,7,0" << endl;

			cin >> choice_S2;


			for (int i = 4; i > 2; i++)
			{
				if ((choice_S2 == "1") || (choice_S2 == "2"))
				{
					i = 0;
				}else{
					if (i >= 8)
					{
						cout << ",A,c,_,`, ,X,V,],Q,p ,Q,S,d,`,b,e ,Y,Q,\,`,_,i,Z,d,n 3 ,\,],Q,c,c \n ,3,e,U,Q,b,n " << you_name << ", ,d,Q,\,`,T,` ,S,Q,b,Z,Q,_,d,Q ,S,m,R,`,b,Q ,_,V,d. ,1,`,X,Q,],e,[,c,d,Q, ,a,`,U,e,^,Q,[,d,V ,c,_,`,S,Q." << endl;
						cin >> choice_S2;
					}
					else {
						cout << ",3,e,U,Q,b,n " << you_name << ", ,d,Q,\,`,T,` ,S,Q,b,Z,Q,_,d,Q ,S,m,R,`,b,Q ,_,V,d. ,1,`,X,Q,],e,[,c,d,Q, ,a,`,U,e,^,Q,[,d,V ,c,_,`,S,Q." << endl;
						cin >> choice_S2;
					}
				}

				system("cls");//,i,Z,c,d,\,Q
			}

			if (choice_S2 == "1")
			{
				t = 0; 
				system("cls");//,i,Z,c,d,\,Q
			} else if(choice_S2 == "2"){

				//,T,V,_,V,b,Z,b,e,V,^ ,a,`,],q, ,\,Q,\ ,R,m,],` ,b,Q,_,n,j,V, ,Q ,b,Q,_,n,j,V ,R,m,],` ,],e,i,j,V
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

				//,S,V,b,_,W,^ ,Y,Q,R,Q,T,`,S,Q,_,e,p ,d,`,i,\,e
				mass_1[9][10] = " ** ";
				mass_2[2][10] = " ** ";

				generator(mass_1, mass_2);
			}
		}

		instruction();
		system("cls");//,i,Z,c,d,\,Q

		//,S,m,S,`,U ,a,`,],q
		//,V,k,W ,S,m,S,`,U ,a,`,],q
		cout << ",1,`,],V ,S,b,Q,T,Q :" << endl;
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

		cout << ",#,Q,j,V ,a,`,],V :" << endl;
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				cout << mass_2[i][j];
			}
			cout << endl;
		}


		//,c,d,b,V,],q,V,d,V

		while ("NULL")
		{
			shooting(mass_1, you_name, mass_2);

			cout << pk_hp << endl;

			if (pk_hp == 0)break;

			//shooting_pk(mass_2, mass_1);

			//,3,d,b,V,],q,V,d ,R,`,d ,_,Q,U,` ,_,Q ,`,d,U,V,],n,_,e,p ,f,e,_,\,h,Z,p

			shooting_pk(mass_1, mass_2);

			if (yuo_hp == 0)break;
		}

		string over_text[5] = { ",.,^,^, ,U,Q ,S,m ,a,b,`,c,d,` ,T,V,_,Z,[", ",/,V,a,],`,g,`, ,_,` ,S,c,d,b,V,i,Q,],Z ,Z ,],e,i,j,V", ",",V,Y ,\,`,^,^,V,_,d,Q,b,Z,V,S", ",1,b,`,c,d,` ,S ,T,`,],`,c", ",#,m ,],Z,R,` ,Z,U,Z,`,d, ,],Z,R,` ,T,V,_,Z,[, ,_,` ,q ,c,\,],`,_,V,_ ,\ ,a,V,b,S,`,^,e" }; 

		if (yuo_hp == 0)
		{
			cout << "PK ,a,`,R,V,U,Z,]";
		}  

		if (pk_hp == 0)
		{
			cout << ",!,U,^,Z,b,Q,] ,f,],`,d,Q " << you_name << " ,a,`,R,V,U,Z,]";
		}

		cout << endl;

		//,Q,i,Z,S,\,Z
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
	cout << ",V,k,W ,b,Q,Y? 1 - ,U,Q, ,],p,R,`,V ,U,b,e,T,`,V - ,_,V,d" << endl;
	cin >> reset_game;

	//,b,V,\,e,b,c,Z,q  
	if (reset_game == "1") { main();}

}





