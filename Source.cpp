//Sleepyti.me program. Mk3.5

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
	cout << "\t This Program Determines the Time You Should Wake Up and Feel Fresh.\n" << endl<< "\t\tInspired by Darkcode's Sleepyti.me.\n\n"<<"\t\t\tpratyush997 signing off\n";
		{
			Options: cout << "\n1 - If you go to sleep Now!\n" << endl << "2 - When to wake up if you sleep at a given time.\n" << endl << "3 - When to sleep if you want to wake up at a given time." << endl <<"\nValue:\t";
			int a=0;
			cin >> a;
			cout << "\n";
			switch (a)
			{
					case 1://Sleep now, 14 Mins Offset. 
					{
						time_t now = time(0);
						char time[20];
					#pragma warning(disable : 4996) // To avoid CRT Secure Warnings.
						struct tm now_tm = *localtime(&now);
						now_tm.tm_min += 90 + 14;   // add a+14 minutes to the time

						for (int i = 0; i < 6; i++)
						{
							mktime(&now_tm);
							strftime(time, 100, "%I:%M %p", (&now_tm));
							cout << time << endl << endl;
							now_tm.tm_min += 90;
						}
						break;
					}

					case 2://When to Wake up if slept at a given time. No offset
					{

						time_t now = time(0);
						char time[20];

						struct tm now_tm = *localtime(&now);
						cout << "Please, enter the time(HH:MM): ";
						cin >> get_time(&now_tm, "%R");

						if (cin.fail()) cout << "\nSeriously? Enter The Time in HH:MM Format.\n";
						else
						{
							cout << "\nYou should Try Waking up at these times:\n" << endl;
							for (int i = 0; i < 7; i++)
							{
								if (i == 0)
								{
									continue;
									i++;
								}
								else
								{
									now_tm.tm_min += 90;
									mktime(&now_tm);
									strftime(time, 100, "%I:%M %p", (&now_tm));
									cout << time << endl << endl;
								}
							}
						}
						break;
					}

					case 3: // When to sleep to wake up at a given time.
					{
						time_t now = time(NULL);
						char time[20];
						struct tm now_tm = *localtime(&now);
						cout << "Please, enter the time(HH:MM): ";
						cin >> get_time(&now_tm, "%R");   			//Wake up time.

						if (cin.fail()) cout << "Seriously? Enter The Time in HH:MM Format.\n";
						else
						{
							cout << "\nYou should try sleeping at these times:\n" << endl;
							now_tm.tm_min -= 630;
							for (int i = 0; i < 6; i++)
							{
								if (i == 0)
								{
									continue;
									i++;
								}
								else
								{
									now_tm.tm_min += 90;
									mktime(&now_tm);
									strftime(time, 100, "%I:%M %p", (&now_tm));
									cout << time << endl << endl;
								}
								
							}
						}
									break;
					}

					default:
					{
						cout << "Try Again\n" << endl;
					}
			}
			cout << "\nPress 1 to Repeat Options" << endl << "Press 0 to Quit\n";
			int wat;
			cin >> wat;
			if (wat == 1)
			{
				goto Options;
			}
		}
	//	cin.ignore();
	return 0;
}
