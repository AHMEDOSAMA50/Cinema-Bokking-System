#include <iostream>
#include <string>
using namespace std;

struct Time
{
	string day;
	int hour, minute;
};
struct Theater
{
	int ID, capacity, Reservation_seat;
};

struct ScreeingInfo {
	Theater theater;
	Time time;
};

struct Movies {
	string Titel;
	string dirctor;
	string Actors;
	ScreeingInfo screening_info[2];
	float rate;
};

void calling_rate();

Movies mov[16];

void view_option();

void view_movies();

void daily_movies();

void view_movie_time(Movies time);

void booking_movies(Movies movie, ScreeingInfo IS);

void booking_ticket(Movies movie, ScreeingInfo, char);

bool check_theatre_capicty(Theater theater);

void initial_data();

void view_ticket(ScreeingInfo Si, Movies movies, int age, int price, int seat);

void print_data(int i);


int main()
{
	cout << "\t______________\n\n";
	cout << "\t \t WELCOM IN OUR CINEMA " << endl;
	cout << "\t______________\n\n";
	initial_data();
	view_option();
	return 0;
}

void view_option() {
	char selection;


	cout << "  1) View all movie " << endl;
	cout << "  2)Movies avaliable every single day " << endl;
	cout << "Please make a selection " << endl;
	cin >> selection;

	if (selection == '1')
		view_movies();
	else if (selection == '2')
		daily_movies();
	else
	{
		system("cls");
		cout << "invalid input \n";
		cout << "Please enter valid number \n";
		view_option();
	}

}

void daily_movies()
{
	int q, j;

	cout << " 1) Saturday" << endl;
	cout << " 2) Sunday" << endl;
	cout << " 3) Monday" << endl;
	cout << " 4) Tuesday" << endl;
	cout << " 5) Wednesday" << endl;
	cout << " 6) Thursday" << endl;
	cout << " 7) Friday" << endl;
	cout << " \n Choose the day you want to watch a movie \n ";
	cin >> q;

	if (q == 1)
	{
		cout << "These movies are avaliable for today\n";
		for (int i = 0; i < 4; i++)
		{
			cout << "_______________\n";
			cout << i + 1 << ") " << mov[i].Titel;
			cout << "_______________\n";

		}
		cout << "Enter the number of the movie you want \n";
		cin >> j;
		print_data(j - 1);
	}
	else if (q == 2)
	{
		cout << "These movies are avaliable for today\n";
		for (int i = 4; i < 8; i++)
		{
			cout << "_______________\n";
			cout << i + 1 << ") " << mov[i].Titel;
			cout << "_______________\n";

		}
		cout << "Enter the number of the movie you want \n";
		cin >> j;
		print_data(j - 1);
	}
	else if (q == 3)
	{
		cout << "These movies are avaliable for today\n";
		for (int i = 8; i < 12; i++)
		{
			cout << "_______________\n";
			cout << i + 1 << ") " << mov[i].Titel;
			cout << "_______________\n";

		}
		cout << "Enter the number of the movie you want \n";
		cin >> j;
		print_data(j - 1);
	}
	else if (q == 4)
	{
		cout << "These movies are avaliable for today\n";
		for (int i = 12; i < 16; i++)
		{
			cout << "_______________\n";
			cout << i + 1 << ") " << mov[i].Titel;
			cout << "_______________\n";

		}
		cout << "Enter the number of the movie you want \n";
		cin >> j;
		print_data(j - 1);
	}

	else if (q == 5)
	{
		cout << "These movies are avaliable for today\n";
		for (int i = 0; i < 4; i++)
		{
			cout << "_______________\n";
			cout << i + 1 << ") " << mov[i].Titel;
			cout << "_______________\n";

		}
		cout << "Enter the number of the movie you want \n";
		cin >> j;
		print_data(j - 1);
	}
	else if (q == 6)
	{
		cout << "These movies are avaliable for today\n";
		for (int i = 4; i < 10; i++)
		{
			cout << "_______________\n";
			cout << i + 1 << ") " << mov[i].Titel;
			cout << "_______________\n";

		}
		cout << "Enter the number of the movie you want \n";
		cin >> j;
		print_data(j - 1);
	}

	else if (q == 7)
	{
		cout << "These movies are avaliable for today\n";
		for (int i = 10; i < 16; i++)
		{
			cout << "_______________\n";
			cout << i + 1 << ") " << mov[i].Titel;
			cout << "_______________\n";

		}
		cout << "Enter the number of the movie you want \n";
		cin >> j;
		print_data(j - 1);
	}
}

void view_movies() {
	int i = 0;

	system("cls"); //clean the consle 

	for (int i = 0; i < 15; i++) {
		cout << "__________ \n\n";
		cout << i + 1 << ") " << mov[i].Titel << endl;
		cout << "__________\n";
	}
	cout << "ENter The number of the movie you want \n  ";
	cin >> i;

	if (i <= 16 && i > 0)
	{
		system("cls");
		cout << "\n\n******************\n";
		cout << mov[i - 1].Titel << endl; // because movie number 1 equals movie number 0 in the array movies [10]
		cout << mov[i - 1].Actors << endl;
		cout << mov[i - 1].dirctor << endl;
		cout << mov[i - 1].rate << endl;
		cout << "******************\n";

		view_movie_time(mov[i - 1]);
	}
	else {
		cout << "Enter valid number" << endl;
		view_movies();
	}
}

void view_movie_time(Movies time)
{
	int c;
	cout << "What time do you want " << endl;
	cout << " 1) Theater number :" << time.screening_info[0].theater.ID << "\t"; // The ID will be called from intial array 
	cout << "Movie time : " << time.screening_info[0].time.day << time.screening_info[0].time.hour << ":" << time.screening_info[0].time.minute << endl;

	cout << " 2) Theater number :" << time.screening_info[1].theater.ID << "\t";
	cout << "Movie time : " << time.screening_info[1].time.day << time.screening_info[1].time.hour << ":" << time.screening_info[1].time.minute << endl;


	cout << "_______ \n";

	cout << "Choose the date you want : ";
	cin >> c;
	if (c == 1 || c == 2)
	{
		cout << "\n\n______________\n\n" << time.Titel;
		cout << "Theater ID : " << time.screening_info[c - 1].theater.ID << endl;
		cout << "Movie time : " << time.screening_info[c - 1].time.day << " " << time.screening_info[c - 1].time.hour << ":" << time.screening_info[c - 1].time.minute;
		cout << "\n________________\n\n\n";


		booking_movies(time, time.screening_info[c - 1]);
	}

	else {
		cout << "Enter valid number" << endl;
	}


}

void booking_movies(Movies movie, ScreeingInfo SI)
{
	char Q;
	cout << "Enter (1) to book a ticket" << endl;
	cout << "Enter (2) to Exit" << endl;
	cin >> Q;


	if (Q == '1')
		booking_ticket(movie, SI, Q);
	else if (Q == '2') {
		view_option();
	}
	else
	{
		cout << "invalid number" << endl;
		booking_movies(movie, SI);
	}
}

void booking_ticket(Movies movie, ScreeingInfo SI, char Q)
{
	char selection;
	const char TAKEN = '#';//seats taken
	const char EMPTY = '*';//seats free
	const int row = 10;//number of rows
	const int col = 10;//number of col
	char map[row][col];//array to hold seat chart
	int number = 0;
	int Age[100];
	char kind = 0;
	double price[100];
	int seat[300];
	int sum = 0;
	int row2 = 0, col2 = 0;

	for (int i = 0; i < row; i++)//initiating array
	{
		for (int j = 0; j < col; j++)
		{
			map[i][j] = EMPTY;
		}
	}

	do
	{


		cout << "\n***" << endl;
		cout << "*" << endl;
		cout << "\t\tWELCOME IN BOOKING TICKET\t\t" << endl;
		cout << "*" << endl;
		cout << "*" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "1) Buy a ticket" << endl;
		cout << "Q) Quit program" << endl;
		cout << "Please make a selection: ";
		cin >> selection;

		if (selection == '1')
		{
			cout << "------------------------------------------------------\n\n\n";
			cout << "What kind of ticket  you want \n \t 1)VIP Halls \n \t 2)Usuall Halls \n";
			cin >> kind;


			if (kind == '1')
			{
				cout << "Ticket price per person = 200 pound \n\n\ ";
				cout << "------------------------------------------------------\n\n\n";

				cout << "How many ticket you want \n ";
				cin >> number;

				SI.theater.Reservation_seat += number;
				bool check = check_theatre_capicty(SI.theater);

				for (int i = 0; i < number; i++)
				{
					cout << "------------------------------------------------------\n\n\n";

					cout << "How old is the owner for a ticket " << i + 1 << endl;
					cin >> Age[i];

					if (Age[i] >= 10 && Age[i] < 15)
					{
						cout << "\t*** \n";
						cout << Age[i] << " years \n He won with us a 10% discount\n ";
						price[i] = 180;
						cout << "The price ticket become " << price[i] << endl;
						// cout << "\t*** \n";

					}

					else if (Age[i] >= 15 && Age[i] < 20)
					{

						cout << "\t** \n";
						cout << Age[i] << " years \n He won with us a 5% discount\n ";
						price[i] = 190;
						cout << "The price ticket become " << price[i] << endl;
						// cout << "\t** \n";

					}

					else if (Age[i] >= 20)
					{


						cout << "\t*** \n";
						price[i] = 200;
						cout << Age[i] << " years \n the price is = 200" << endl;
						// cout << "\t*** \n";

					}
					else
					{

						cout << "\t** \n";
						cout << Age[i] << " years \n He won with us a 50% discount\n ";
						price[i] = 100;
						cout << "The price ticket become " << price[i] << endl;
						// cout << "\t** \n";
					}
					sum += price[i];

				}
				cout << "\n-----------------------------------------------------------\n";
				cout << "The Total price is \n" << sum << endl;


				for (int i = 0; i < number; i++)
				{


					map[row2][col2] = TAKEN;
					col2++;
				}

				for (int i = 1; i <= 10; i++)
					cout << i;
				cout << endl;
				for (int i = 0; i < row; i++)
				{
					for (int j = 0; j < col; j++)
						cout << map[i][j]; //to print the matrix with reserved seats
					cout << i + 1 << " ";
					cout << endl;

				}



				for (int i = 0; i < number; i++) {
					seat[i] = (row2 + 1) * 10 - (10 - (col2 + 1 - number));
					col2++;
					view_ticket(SI, movie, Age[i], price[i], seat[i]);

				}
				col2 -= number;
			}


			else if (kind == '2')
			{
				cout << "Ticket price per person = 100 pound \n\n\ ";
				cout << "------------------------------------------------------\n\n\n";

				cout << "How many ticket you want \n ";
				cin >> number;

				SI.theater.Reservation_seat += number;
				bool check = check_theatre_capicty(SI.theater);

				for (int i = 0; i < number; i++)
				{
					cout << "------------------------------------------------------\n\n\n";

					cout << "How old is the owner for a ticket " << i + 1 << endl;
					cin >> Age[i];


					if (Age[i] >= 10 && Age[i] < 15)
					{
						cout << "\t*** \n";
						price[i] = 90;
						cout << Age[i] << " years \n He won with us a 5% discount\nThe price ticket become ";
						cout << price[i] << "\n";
						cout << "\n----------------------------------------------\n";

					}

					else if (Age[i] >= 15 && Age[i] < 20)
					{
						cout << "\t** \n";
						price[i] = 95;
						cout << Age[i] << " years \n He won with us a 5% discount\nThe price ticket become ";
						cout << price[i] << "\n";
						cout << "\n----------------------------------------------\n";

					}

					else if (Age[i] > 20)
					{
						cout << "\t** \n";
						price[i] = 100;
						cout << Age[i] << " years \n the price is = 100";
						cout << "\n----------------------------------------------\n";
					}

					else
					{
						cout << "\t**\n";
						cout << Age[i] << " years \n He won with us a 50% discount\n ";
						price[i] = 50;
						cout << "The price ticket become " << price[i] << "\n";

						cout << "-----------------------------------------------------------\n";

					}
					sum += price[i];
					cout << "-----------------------------------------------------------\n";
				}
				cout << "------------------------------------------------------\n\n\n";
				cout << "The Total price is \n" << sum << endl;


				for (int i = 0; i < number; i++)
				{


					map[row2][col2] = TAKEN;
					col2++;
				}

				for (int i = 1; i <= 10; i++)
					cout << i;
				cout << endl;
				for (int i = 0; i < row; i++)
				{
					for (int j = 0; j < col; j++)
						cout << map[i][j]; //to print the matrix with reserved seats
					cout << i + 1 << " ";
					cout << endl;

				}



				for (int i = 0; i < number; i++) {
					seat[i] = (row2 + 1) * 10 - (10 - (col2 + 1 - number));
					col2++;
					view_ticket(SI, movie, Age[i], price[i], seat[i]);

				}
				col2 -= number;
				for (int i = 0; i < number; i++)
					view_ticket(SI, movie, Age[i], price[i], seat[i]);


			}
			else
			{
				cout << "invalid input  please try again \n";
			}
			char s;
			cout << "if you want to book a nother ticket  ticket enter 1 \n";
			cout << "if you want to quite a programm \n";
			cin >> s;
			if (s == '1')
				continue;
			else
				break;

		}
		else if (selection == 'q' || selection == 'Q')
		{
			cout << "Thank you for using the program." << endl;
			break;
		}

		cout << "-------------------------------------------------------" << endl;

	} while (selection != 'q' && selection != 'Q');
	cout << "THANK YOU FOR USING OUR APP" << endl;
}

bool check_theatre_capicty(Theater theater)
{
	char s;
	if (theater.Reservation_seat > theater.capacity)
	{
		cout << "No, seats empty" << endl;

		cout << "if you want to see another film Enter 1  \n";
		cout << "Enter Q to Exit programm \n";
		cin >> s;
		if (s == '1')
		{
			view_option();

		}
		else if (s == 'q' || s == 'Q')
		{

			cout << "Thank you for your time ";

		}
	}
	else
		return true;
}

void view_ticket(ScreeingInfo Si, Movies movies, int age, int price, int seat)
{
	cout << "\n|^*_*_*_*_____**_*****__**_*_____***^|\n";
	cout << "|^\n";
	cout << "|^\tMovie title : " << movies.Titel;
	cout << "|^\tSeat number :" << seat << endl;
	cout << "|^\tTheater ID : " << Si.theater.ID << endl;
	cout << "|^\tMovie time : " << Si.time.day << " " << Si.time.hour << ":" << Si.time.minute << endl;
	cout << "|^\tTicket owner age : " << age << endl;
	cout << "|^\tTicket price : " << price << endl;
	cout << "|^\n";
	cout << "|^*_*_*_*_____**_*****__**_*_____***^|\n\n\n";

}
void back()
{
	char selection;

	cout << "The booking was sucessful \n" << endl;
	cout << "Enter '1' to go back to the first page if you want to booking another ticket\n";
	cout << "Enter '2' to exit the programm \n";
	cin >> selection;

	if (selection == '1')
	{
		system("cls");
		view_option();
	}
	else if (selection == '2')
	{
		system("cls");
		cout << "Thank you for your time ";
	}
	else {
		system("cls");
		cout << "please Enter valid number \n";
		back();
	}
}


void initial_data()
{

	mov[0].Titel = "The Titel movie: << The Conjuring : The devil Made me do it  \n";
	mov[0].dirctor = "Directed by <<David Oyelowo>>\n";
	mov[0].Actors = "Actors: David Oyelowo \n";
	mov[0].rate = 5.2;
	mov[0].screening_info[0].theater.ID = 1;
	mov[0].screening_info[0].theater.capacity = 100;
	mov[0].screening_info[0].theater.Reservation_seat = 0;
	mov[0].screening_info[0].time.day = "Saturday";
	mov[0].screening_info[0].time.hour = 12;
	mov[0].screening_info[0].time.minute = 00;
	mov[0].screening_info[1].theater.ID = 5;
	mov[0].screening_info[1].theater.capacity = 100;
	mov[0].screening_info[1].theater.Reservation_seat = 0;
	mov[0].screening_info[1].time.day = "Wednesday";
	mov[0].screening_info[1].time.hour = 19;
	mov[0].screening_info[1].time.minute = 30;


	mov[1].Titel = "Tenet\n";
	mov[1].dirctor = "Directed by < Anthony Russo >< Joe Russo >\n";
	mov[1].Actors = "Starring: < Chris Evans >< Robert Downey Jr. ><Scarlett Johansson> \n";
	mov[1].rate = 8.2;
	mov[1].screening_info[0].theater.ID = 1;
	mov[1].screening_info[0].theater.capacity = 250;
	mov[1].screening_info[0].theater.Reservation_seat = 0;
	mov[1].screening_info[0].time.day = "Saturday";
	mov[1].screening_info[0].time.hour = 02;
	mov[1].screening_info[0].time.minute = 30;
	mov[1].screening_info[1].theater.ID = 10;
	mov[1].screening_info[1].theater.capacity = 250;
	mov[1].screening_info[1].theater.Reservation_seat = 0;
	mov[1].screening_info[1].time.day = "Wednesday";
	mov[1].screening_info[1].time.hour = 17;
	mov[1].screening_info[1].time.minute = 00;


	mov[2].Titel = "The Titel movie: << Prison Cell 7 >>\n";
	mov[2].dirctor = "Directed by < Jake Kasdan >\n";
	mov[2].Actors = "Starring: < Dawyne Johnson > < Karen Gillan > \n";
	mov[2].rate = 6.9;
	mov[2].screening_info[0].theater.ID = 1;
	mov[2].screening_info[0].theater.capacity = 250;
	mov[2].screening_info[0].theater.Reservation_seat = 0;
	mov[2].screening_info[0].time.day = "Saturday";
	mov[2].screening_info[0].time.hour = 05;
	mov[2].screening_info[0].time.minute = 00;
	mov[2].screening_info[1].theater.ID = 10;
	mov[2].screening_info[1].theater.capacity = 250;
	mov[2].screening_info[1].theater.Reservation_seat = 0;
	mov[2].screening_info[1].time.day = "Wednesday";
	mov[2].screening_info[1].time.hour = 14;
	mov[2].screening_info[1].time.minute = 30;





	mov[3].Titel = "The Titel movie: << Tenet >>\n";
	mov[3].dirctor = "Directed by < Christopher Nolan >\n";
	mov[3].Actors = "Starring: < Robert Pattinson > < John David > \n";
	mov[3].rate = 7.4;
	mov[3].screening_info[0].theater.ID = 1;
	mov[3].screening_info[0].theater.capacity = 250;
	mov[3].screening_info[0].theater.Reservation_seat = 0;
	mov[3].screening_info[0].time.day = "Saturday";
	mov[3].screening_info[0].time.hour = 07;
	mov[3].screening_info[0].time.minute = 30;
	mov[3].screening_info[1].theater.ID = 10;
	mov[3].screening_info[1].theater.capacity = 250;
	mov[3].screening_info[1].theater.Reservation_seat = 0;
	mov[3].screening_info[1].time.day = "Wednesday";
	mov[3].screening_info[1].time.hour = 12;
	mov[3].screening_info[1].time.minute = 00;


	mov[4].Titel = "The Titel movie: << Ahmed Noterdame >>\n";
	mov[4].dirctor = "Directed by < Mahmoud Karim >\n";
	mov[4].Actors = "Starring: < Ramez Galal > < Ghada Adel > \n";
	mov[4].rate = 4.2 ;
	mov[4].screening_info[0].theater.ID = 1;
	mov[4].screening_info[0].theater.capacity = 250;
	mov[4].screening_info[0].theater.Reservation_seat = 0;
	mov[4].screening_info[0].time.day = "Sunday";
	mov[4].screening_info[0].time.hour = 12;
	mov[4].screening_info[0].time.minute = 00;
	mov[4].screening_info[1].theater.ID = 10;
	mov[4].screening_info[1].theater.capacity = 250;
	mov[4].screening_info[1].theater.Reservation_seat = 0;
	mov[4].screening_info[1].time.day = "Thursday ";
	mov[4].screening_info[1].time.hour = 22;
	mov[4].screening_info[1].time.minute = 00;


	mov[5].Titel = "The Titel movie: << The Conjuring : The devil Made me do it >>\n";
	mov[5].dirctor = "Directed by < Michael Chaves >\n";
	mov[5].Actors = "Starring: < Patric Wilson > < Vera Farmiga > \n";
	mov[5].rate = 6.5 ;
	mov[5].screening_info[0].theater.ID = 1;
	mov[5].screening_info[0].theater.capacity = 250;
	mov[5].screening_info[0].theater.Reservation_seat = 0;
	mov[5].screening_info[0].time.day = "Sunday";
	mov[5].screening_info[0].time.hour = 02;
	mov[5].screening_info[0].time.minute = 30;
	mov[5].screening_info[1].theater.ID = 10;
	mov[5].screening_info[1].theater.capacity = 250;
	mov[5].screening_info[1].theater.Reservation_seat = 0;
	mov[5].screening_info[1].time.day = "Thursday";
	mov[5].screening_info[1].time.hour = 19;
	mov[5].screening_info[1].time.minute = 30;


	mov[6].Titel = "The Titel movie: << Fast and Furios >>\n";
	mov[6].dirctor = "Directed by < Christopher Nolan >\n";
	mov[6].Actors = "Starring: < Dwayne Johnson > < Jason Statham > \n";
	mov[6].rate = 8.2;
	mov[6].screening_info[0].theater.ID = 1;
	mov[6].screening_info[0].theater.capacity = 250;
	mov[6].screening_info[0].theater.Reservation_seat = 0;
	mov[6].screening_info[0].time.day = "Sunday";
	mov[6].screening_info[0].time.hour = 05;
	mov[6].screening_info[0].time.minute = 00;
	mov[6].screening_info[1].theater.ID = 10;
	mov[6].screening_info[1].theater.capacity = 250;
	mov[6].screening_info[1].theater.Reservation_seat = 0;
	mov[6].screening_info[1].time.day = "Thursday";
	mov[6].screening_info[1].time.hour = 17;
	mov[6].screening_info[1].time.minute = 00;




	mov[7].Titel = "The Titel movie: << The Marksman >>\n";
	mov[7].dirctor = "Directed by < Robert Lorenz >\n";
	mov[7].Actors = "Starring: < Liam Nesson > < Katheryn Winnick > \n";
	mov[7].rate = 5.6 ;
	mov[7].screening_info[0].theater.ID = 1;
	mov[7].screening_info[0].theater.capacity = 250;
	mov[7].screening_info[0].theater.Reservation_seat = 0;
	mov[7].screening_info[0].time.day = "Sunday";
	mov[7].screening_info[0].time.hour = 07;
	mov[7].screening_info[0].time.minute = 30;
	mov[7].screening_info[1].theater.ID = 10;
	mov[7].screening_info[1].theater.capacity = 250;
	mov[7].screening_info[1].theater.Reservation_seat = 0;
	mov[7].screening_info[1].time.day = "Thursday";
	mov[7].screening_info[1].time.hour = 14;
	mov[7].screening_info[1].time.minute = 30;


	mov[8].Titel = "The Titel movie: << Nobody  >>\n";
	mov[8].dirctor = "Directed by < Llya Naishuller >\n";
	mov[8].Actors = "Starring: < Bob Odenkirik > < Connie Nielsen > \n";
	mov[8].rate = 5.5;
	mov[8].screening_info[0].theater.ID = 1;
	mov[8].screening_info[0].theater.capacity = 250;
	mov[8].screening_info[0].theater.Reservation_seat = 0;
	mov[8].screening_info[0].time.day = "Monday";
	mov[8].screening_info[0].time.hour = 12;
	mov[8].screening_info[0].time.minute = 00;
	mov[8].screening_info[1].theater.ID = 10;
	mov[8].screening_info[1].theater.capacity = 250;
	mov[8].screening_info[1].theater.Reservation_seat = 0;
	mov[8].screening_info[1].time.day = "Thursday";
	mov[8].screening_info[1].time.hour = 12;
	mov[8].screening_info[1].time.minute = 00;






	mov[9].Titel = "The Titel movie: << John Wick >>\n";
	mov[9].dirctor = "Directed by < Chad Stahelski >\n";
	mov[9].Actors = "Starring: < Keanu Reeves > < Lan Mcshane > \n";
	mov[9].rate = 6.8;
	mov[9].screening_info[0].theater.ID = 1;
	mov[9].screening_info[0].theater.capacity = 250;
	mov[9].screening_info[0].theater.Reservation_seat = 0;
	mov[9].screening_info[0].time.day = "Monday";
	mov[9].screening_info[0].time.hour = 02;
	mov[9].screening_info[0].time.minute = 30;
	mov[9].screening_info[1].theater.ID = 10;
	mov[9].screening_info[1].theater.capacity = 250;
	mov[9].screening_info[1].theater.Reservation_seat = 0;
	mov[9].screening_info[1].time.day = "Thursday";
	mov[9].screening_info[1].time.hour = 9;
	mov[9].screening_info[1].time.minute = 30;





	mov[10].Titel = "The Titel movie: << A quiet place >>\n";
	mov[10].dirctor = "Directed by < John Krasinski >\n";
	mov[10].Actors = "Starring: < Cillian Murphy > < Emily Blunt > \n";
	mov[10].rate = 7.9;
	mov[10].screening_info[0].theater.ID = 1;
	mov[10].screening_info[0].theater.capacity = 250;
	mov[10].screening_info[0].theater.Reservation_seat = 0;
	mov[10].screening_info[0].time.day = "Monday";
	mov[10].screening_info[0].time.hour = 05;
	mov[10].screening_info[0].time.minute = 00;
	mov[10].screening_info[1].theater.ID = 10;
	mov[10].screening_info[1].theater.capacity = 250;
	mov[10].screening_info[1].theater.Reservation_seat = 0;
	mov[10].screening_info[1].time.day = "Friday";
	mov[10].screening_info[1].time.hour = 22;
	mov[10].screening_info[1].time.minute = 00;




	mov[11].Titel = "The Titel movie: << Dedo >>\n";
	mov[11].dirctor = "Directed by < Amr salah Eldin >\n";
	mov[11].Actors = "Starring: < Karim Fahmy > < Ahmed Fahmy> \n";
	mov[11].rate = 5.6;
	mov[11].screening_info[0].theater.ID = 1;
	mov[11].screening_info[0].theater.capacity = 250;
	mov[11].screening_info[0].theater.Reservation_seat = 0;
	mov[11].screening_info[0].time.day = "Monday";
	mov[11].screening_info[0].time.hour = 07;
	mov[11].screening_info[0].time.minute = 30;
	mov[11].screening_info[1].theater.ID = 10;
	mov[11].screening_info[1].theater.capacity = 250;
	mov[11].screening_info[1].theater.Reservation_seat = 0;
	mov[11].screening_info[1].time.day = "Friday";
	mov[11].screening_info[1].time.hour = 19;
	mov[11].screening_info[1].time.minute = 30;




	mov[12].Titel = "The Titel movie: << Prison Cell 7 >>\n";
	mov[12].dirctor = "Directed by < Ebram Nashaat >\n";
	mov[12].Actors = "Starring: < Ahmed Zaher > < Abeer Sabry > \n";
	mov[12].rate = 2.4;
	mov[12].screening_info[0].theater.ID = 1;
	mov[12].screening_info[0].theater.capacity = 250;
	mov[12].screening_info[0].theater.Reservation_seat = 0;
	mov[12].screening_info[0].time.day = "Tuesday";
	mov[12].screening_info[0].time.hour = 12;
	mov[12].screening_info[0].time.minute = 00;
	mov[12].screening_info[1].theater.ID = 10;
	mov[12].screening_info[1].theater.capacity = 250;
	mov[12].screening_info[1].theater.Reservation_seat = 0;
	mov[12].screening_info[1].time.day = "Friday";
	mov[12].screening_info[1].time.hour = 17;
	mov[12].screening_info[1].time.minute = 00;




	mov[13].Titel = "The Titel movie: << The Black Box >>\n";
	mov[13].dirctor = "Directed by < Mahmoud Kamal >\n";
	mov[13].Actors = "Starring: < Mona Zaki > < Mohamed Farag > \n";
	mov[13].rate = 4.5;
	mov[13].screening_info[0].theater.ID = 1;
	mov[13].screening_info[0].theater.capacity = 250;
	mov[13].screening_info[0].theater.Reservation_seat = 0;
	mov[13].screening_info[0].time.day = "Tuesday";
	mov[13].screening_info[0].time.hour = 02;
	mov[13].screening_info[0].time.minute = 30;
	mov[13].screening_info[1].theater.ID = 10;
	mov[13].screening_info[1].theater.capacity = 250;
	mov[13].screening_info[1].theater.Reservation_seat = 0;
	mov[13].screening_info[1].time.day = "Friday";
	mov[13].screening_info[1].time.hour = 14;
	mov[13].screening_info[1].time.minute = 30;



	mov[14].Titel = "The Titel movie: << Ghost in Transit >>\n";
	mov[14].dirctor = "Directed by < Yasser Howaidy >\n";
	mov[14].Actors = "Starring: < Mohamed Gomma > < Mohamed Havez  > \n";
	mov[14].rate = 4.8;
	mov[14].screening_info[0].theater.ID = 1;
	mov[14].screening_info[0].theater.capacity = 250;
	mov[14].screening_info[0].theater.Reservation_seat = 0;
	mov[14].screening_info[0].time.day = "Tuesday";
	mov[14].screening_info[0].time.hour = 05;
	mov[14].screening_info[0].time.minute = 00;
	mov[14].screening_info[1].theater.ID = 10;
	mov[14].screening_info[1].theater.capacity = 250;
	mov[14].screening_info[1].theater.Reservation_seat = 0;
	mov[14].screening_info[1].time.day = "Friday";
	mov[14].screening_info[1].time.hour = 12;
	mov[14].screening_info[1].time.minute = 00;

	mov[15].Titel = "The Titel movie: << Awake >>\n";
	mov[15].dirctor = "Directed by < Mark Raso >\n";
	mov[15].Actors = "Starring: < Gina Rodriguez > < Ariana Greenblat > \n";
	mov[15].rate = 5.2;
	mov[15].screening_info[0].theater.ID = 1;
	mov[15].screening_info[0].theater.capacity = 250;
	mov[15].screening_info[0].theater.Reservation_seat = 0;
	mov[15].screening_info[0].time.day = "Tuesday";
	mov[15].screening_info[0].time.hour = 07;
	mov[15].screening_info[0].time.minute = 30;
	mov[15].screening_info[1].theater.ID = 10;
	mov[15].screening_info[1].theater.capacity = 250;
	mov[15].screening_info[1].theater.Reservation_seat = 0;
	mov[15].screening_info[1].time.day = "Friday";
	mov[15].screening_info[1].time.hour = 9;
	mov[15].screening_info[1].time.minute = 00;


}
void print_data(int i)
{

	cout << mov[i].Titel;
	cout << mov[i].Actors;
	cout << mov[i].dirctor;
	cout << mov[i].rate;


	view_movie_time(mov[i]);

}

