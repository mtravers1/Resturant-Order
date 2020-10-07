#include "Order.h"
#include <iostream>
#include <string>
using namespace std;

class Drink: public Order{
	private:
		string drinkName;
		int quantityd;
		double priced;
		
	public:
		Drink():Order(){
		
		this->drinkName="";
		this->quantityd=0;
		this->priced=0;
}
	Drink(string drinkName, int quantityd, double priced, int orderNumber, string orderType) :Order(orderNumber, orderType)
	{
		this->drinkName=drinkName;
		this->quantityd=quantityd;
		this->priced=priced;
	}
	void setdrinkName(string drinkName)
	{
		this->drinkName=drinkName;
		
	}
	string getdrinkName()
	{
		return this->drinkName;
	}
	
	void setquantityd(int quantityd)
	{
		this->quantityd=quantityd;
	}
	
	int getquantityd()
	{
		return this->quantityd;
	}
	void setpriced(double priced)
	{
		this->priced=priced;
	}
	double getpriced()
	{
		return this->priced;
	}
	double subtotal(){
		return this->priced * this->quantityd;
	}
	};

