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
	cout << "\t|| �����  |                                                    |\n";
	cout << "\t|                                                              |\n";
	cout << "\t|                      ���������� ����������:                  |\n";
	cout << "\t|                                                              |\n";
	cout << "\t|               ________                                       |\n";
	cout << "\t|              |   w    |                                      |\n";
	cout << "\t|              | ������ |                                 ____ |\n";
	cout << "\t|                                                        |    ||\n";
	cout << "\t| ________      ________       _________              ___|    ||\n";
	cout << "\t||   a    |    |   s    |     |   d     |            | Enter  ||\n";
	cout << "\t|| �����  |    | �����  |     |  ������ |            | �����  ||\n";
	cout << "\t|                                                              |\n";
	cout << "\t|           _________________________________________          |\n";
	cout << "\t|          |                  Space                  |         |\n";
	cout << "\t|          |                  ������                 |         |\n";
	cout << "\t|                                                              |\n";
	cout << "\t ============================================================== \n";
	cout << "\t   ��������� ������� �������� ���������\n";
	cout << "\t   ���� ����������!\n" << endl;

	do
	{
		key = _getch();
		if (key == 'w' || key == 'W')
		{
			cout << "������" << endl;
		}
		else if (key == 's' || key == 'S')
		{
			cout << "�����" << endl;
		}
		else if (key == 'a' || key == 'A')
		{
			cout << "�����" << endl;
		}
		else if (key == 'd' || key == 'D')
		{
			cout << "������" << endl;
		}
		else if (key == 32)
		{
			cout << "������" << endl;
		}
		else if (key == 13)
		{
			cout << "�����!\n" << endl;
		}
		else
		{
			cout << "����������� ���������� �������,��������� ����!\t" << endl;
		}
	} while (key != 27);
}


