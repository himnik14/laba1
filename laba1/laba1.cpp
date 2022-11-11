#include <conio.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
class Worker {
	float weight = 1;
	int mood = 10;
public:
	int age;
	string name;
	void print();
	void EatSmt(float value);
	float Get_Weight();
	void Walking();
	void Dancing();
	void working();
	int Get_Mood();
};
void Worker::print() {
	cout << name << " " << "Возраст: " << age << endl;
}
void Worker::EatSmt(float value) {
	if (value > 10) {
		age += 1;
		weight += value / 2;
	}
	else weight += value;
	for (int i = 0; i < 3; i++)
	{
		Dancing();
		if (i < 2) {
			Walking();
		}
	}
}
float Worker::Get_Weight() {
	return weight;
}
void Worker::Walking() {
	mood += 1;
}
void Worker::Dancing() {
	mood += 2;
}
void Worker::working() {
	if (mood >= 2) {
		mood -= 2;
	}
	else if (mood < 2) {
		mood = 0;
	}
}
int Worker::Get_Mood() {
	return mood;
}
void Ves(float qwe) {
	cout << "Вес рабочего, после съеденного: " << qwe << endl;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Worker wrk;
	cout << "Введите имя рабочего: ";
	getline(cin, wrk.name);
	cout << "Введите возраст рабочего: ";
	cin >> wrk.age;
	//wrk.age = 34;
	//wrk.name = "Иванов";
	//wrk.print();
	//wrk.EatSmt(2);
	//wrk.EatSmt(3);
	wrk.EatSmt(7);
	float ves = wrk.Get_Weight();
	Ves(ves);
	wrk.print();
	for (int i = 0; i < 9; i++)
	{
		wrk.working();
	}
	cout << "Настроение рабочего: " << wrk.Get_Mood();
}

