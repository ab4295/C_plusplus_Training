#include<iostream>
using namespace std;

struct travel_time {
	int hours;
	int mins;
};
const int Mins_per_hour = 60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main()
{
	travel_time day1 = {3,50};
	travel_time day2 = {1,25};

	travel_time travel = sum(day1, day2);

	cout << "이틀간 소요시간 : ";
	show_time(travel);

	travel_time day3 = {4,32};
	cout << "사흘간 소요시간 : ";
	show_time(sum(day3,travel));

	return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
	travel_time total;

	total.mins = (t1.mins + t2.mins) % Mins_per_hour;
	total.hours = (t1.hours + t2.hours) + (t1.mins + t2.mins) / Mins_per_hour;

	return total;
}

void show_time(travel_time t)
{
	cout << t.hours << "시간";
	cout << t.mins << "분" << endl;
}

