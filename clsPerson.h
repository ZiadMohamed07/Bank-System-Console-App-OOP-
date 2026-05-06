#pragma once
#include <iostream>
#include <string>
using namespace std;
class clsPerson
{
private:
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;
public:
	clsPerson(string firstname,string lastname,string email,string phone)
		:_FirstName(firstname),_LastName(lastname),_Email(email),_Phone(phone)
	{

	}
	void setFirstName(string name)
	{
		_FirstName = name;
	}
	string GetFirstName()
	{
		return _FirstName;
	}
	__declspec(property(get = GetFirstName, put = setFirstName)) string FirstName;

	void setLastName(string name)
	{
		_LastName = name;
	}
	string GetLastName()
	{
		return _LastName;
	}
	__declspec(property(get = GetLastName, put = setLastName)) string LastName;

	void setEmail(string email)
	{
		_Email = email;
	}
	string GetEmail()
	{
		return _Email;
	}
	__declspec(property(get = GetEmail, put = setEmail)) string Email;

	void setPhone(string phone)
	{
		_Phone = phone;
	}
	string GetPhone()
	{
		return _Phone;
	}
	__declspec(property(get = GetPhone, put = setPhone)) string Phone;

	string FullName()
	{
		return _FirstName + " " + _LastName;
	}
	
};

