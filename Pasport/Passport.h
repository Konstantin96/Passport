#pragma once
#include "Libery.h"
#include "Date.h"

class Passport
{
protected:
	string surname;
	string name;
	string patronymic;
	Date birthday;
	string adress;
	string registration;


public:

	void SetSurname(string surname)
	{
		this->surname = surname;
	}

	void SetName(string name)
	{
		this->name = name;
	}


	void SetPatronymic(string patronymic)
	{
		this->patronymic = patronymic;
	}


	void SetBirthday(int day, int month, int year)
	{
		birthday.SetDay(day);
		birthday.SetMonth(month);
		birthday.SetYear(year);
	}

	void SetAdress(string adress)
	{
		this->registration = registration;
	}

	void SetRegistration(string registration)
	{
		this->registration = registration;
	}


	string const GetSurname() const
	{
		return surname;
	}

	string const GetName() const
	{
		return name;
	}

	string const GetPatronymic() const
	{
		return patronymic;
	}

	Date GetBirthday() const
	{
		return birthday;
	}


	string const GetAdress() const
	{
		return  adress;
	}

	string const GetRegistration() const
	{
		return  registration;
	}

	virtual void Print()
	{

		cout << "Фамилия: " << surname << "\n";
		cout << "Имя: " << name << "\n";
		cout << "Отчество: " << patronymic << "\n";
		cout << "Дата рождения: " << birthday.GetDay() << "." << birthday.GetMonth() << "." << birthday.GetYear() << "\n";
		cout << "Фактичный адресс: " << "ул. " << adress << "\n";
		cout << "Адресс прописки: " << registration << "\n";
		cout << "\n";
	}

	Passport() :surname(""), name(""), patronymic(""), birthday(Date(1, 1, 2000)), adress(""), registration("")
	{

	}

	Passport(string _Surname, string _Name, string _Patronymic, Date Birthday) :
		surname(_Surname), name(_Name), patronymic(_Patronymic), birthday(Birthday),
		adress("г.Темиртау Карагандинская обл. ул.Металлургов 21/2б"), registration("г.Алматы Алматинская обл.ул.Навои 310 ")
	{

	}

	Passport(string _Surname, string _Name, string _Patronymic, Date _Birthday, string _Adress) :
		surname(_Surname), name(_Name), patronymic(_Patronymic), birthday(_Birthday),
		adress(_Adress), registration("г.Астана Акмолинская обл.ул.Назарбаева 12")
	{

	}


	Passport(string _Surname, string _Name, string _Patronymic, Date _Birthday, string _Adress, string _Registration) :
		surname(_Surname), name(_Name), patronymic(_Patronymic), birthday(_Birthday), adress(_Adress), registration(_Registration)
	{

	}

	~Passport()
	{

	}

};

class ForeignPassport : public Passport
{
	string nationality;
	string become;
	int age;
public:

	void Setnationality(string nationality)
	{
		this->nationality = nationality;
	}
	void Setbecome(string become)
	{
		this->become = become;
	}
	void Setage(int age)
	{
		this->age = age;
	}

	const string Getnationality() const
	{
		return nationality;
	}

	const string Getbecome() const
	{
		return become;
	}

	int Getage() const
	{
		return age;
	}


	void Print()
	{
		Passport::Print();
		cout << "Национальность: " << nationality << "\n";
		cout << "Пол: " << become << "\n";
		cout << "Возраст: " << age << " лет" << "\n";
		cout << "\n";
	}

	ForeignPassport() : nationality(""), become(""), age()
	{

	}

	ForeignPassport(string nationality) : become(become)
	{

	}
	ForeignPassport(string nationality, string become) : nationality(nationality), become(become)
	{
	}

	ForeignPassport(string N, string B, int _A) : nationality(N), become(B), age(_A)
	{
	}

	ForeignPassport(string _Surname, string _Name, string _Patronymic, Date _Birthday, string _Adress, string _Registration,
		string nationality, string become, int _A) :
		Passport(_Surname, _Name, _Patronymic, _Birthday, _Adress, _Registration),
		nationality(nationality), become(become), age(_A)
	{

	}

	~ForeignPassport()
	{

	}

};