#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	char key;
	cout << "\t ============================================================== \n";
	cout << "\t| ________                                                     |\n";
	cout << "\t|| Escape |                                                    |\n";
	cout << "\t|| выход  |                                                    |\n";
	cout << "\t|                                                              |\n";
	cout << "\t|                      Управление персонажем:                  |\n";
	cout << "\t|                                                              |\n";
	cout << "\t|               ________                                       |\n";
	cout << "\t|              |   w    |                                      |\n";
	cout << "\t|              | Вперед |                                 ____ |\n";
	cout << "\t|                                                        |    ||\n";
	cout << "\t| ________      ________       _________              ___|    ||\n";
	cout << "\t||   a    |    |   s    |     |   d     |            | Enter  ||\n";
	cout << "\t|| Влево  |    | Назад  |     |  Вправо |            | огонь  ||\n";
	cout << "\t|                                                              |\n";
	cout << "\t|           _________________________________________          |\n";
	cout << "\t|          |                  Space                  |         |\n";
	cout << "\t|          |                  прыжок                 |         |\n";
	cout << "\t|                                                              |\n";
	cout << "\t ============================================================== \n";
	cout << "\t   Нажимайте клавишу действия персонажа\n";
	cout << "\t   Игра начинается!\n" << endl;

	do
	{
		key = _getch();
		if (key == 'w' || key == 'W')
		{
			cout << "Вперед" << endl;
		}
		else if (key == 's' || key == 'S')
		{
			cout << "Назад" << endl;
		}
		else if (key == 'a' || key == 'A')
		{
			cout << "Влево" << endl;
		}
		else if (key == 'd' || key == 'D')
		{
			cout << "Вправо" << endl;
		}
		else if (key == 32)
		{
			cout << "Прыжок" << endl;
		}
		else if (key == 13)
		{
			cout << "Огонь!\n" << endl;
		}
		else
		{
			cout << "Используйте корректные клаваши,указанные выше!\t" << endl;
		}
	} while (key != 27);
}


