#include "Order.h"

using namespace std;

class Food : public Order{
	private:
	string foodType;
	string foodName;
	int quantity;
	double priced;
	
	public:
	Food():Order(){
		
	this-> foodType="";
	this-> foodName="";
	this-> quantity=0;
	this-> priced=0;
}
	Food(int orderNumber, string orderType, string foodType, string foodName, int quantity, double priced)	:Order(orderNumber, orderType)
	{
	this-> foodType=foodType;
	this-> foodName=foodName;
	this-> quantity=quantity;
	this-> priced=priced;
	}
	
	void setfoodType(string foodType)
	{
	this-> foodType=foodType;	 
	}
	
	string getfoodType()
	{
		return this->foodType;
	}
	
	void setfoodName(string foodName)
	{
	this-> foodType=foodType;	 
	}
	
	string getfoodName()
	{
		return this->foodName;
	}
	void setquantity(int quantity)
	{
	this-> quantity=quantity;	 
	}
	
	int getquantity()
	{
		return this->quantity;
	}
	
	void setprice(double priced)
	{
	this-> priced=priced;	 
	}
	
	double getprice()
	{
		return this->priced;
	}
	double subtotal(){
		return this->priced * this ->quantity;
	}
	
};
