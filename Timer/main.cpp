#include <iostream>
#include "Timer.h"
#include "stdafx.h"
#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
	char timer1;
	char timer2;
	char timer3;

	Timer t1;

	cout << "Witaj w moim stoperze  ! " << endl << "Aby rozpoczac wcisnij g (GO) : ";
	cin >> timer1;

	if (timer1 == 'g')
	{


		for (;;)
		{
			t1.go();
			cout << "Aby zatrzymac stoper wcisnij klawisz s (STOP):	";
			cin >> timer2;

			if (timer2 == 's')
			{
				system("cls");

				t1.stop1();

				t1.count_difference();

				cout << "Zastopowales po : " << t1.current << " s." << endl;
				cout << "Aby kontynuowac wcisnij g (GO). " << endl;
				cout << "Aby zrezetowac i uruchomic wcisnij r (RESET). " << endl;
				cout << "Aby zakonczyc program wcisnij e(END) : ";

				cin >> timer3;

				if (timer3 == 'g')
				{
					system("cls");
					continue;
				}

				else if (timer3 == 'r')
				{
					system("cls");
					t1.reset();
				}

				else if (timer3 == 'e')
				{
					break;
				}
			}
		}
	}

	system("PAUSE");
	return 0;
}

