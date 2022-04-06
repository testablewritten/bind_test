#include "iostream"
#include "boost/bind.hpp"

struct infostruct{
	float a =10;
	float b = 32;
};

class testClass{
public:
	void memberftn(float a, float b){
		printf("%f \n", 2*a+3*b);
	}
	
	void memberftn(infostruct stru){
		printf("%f \n", stru.a+stru.b);
	}

private:
	infostruct memberinfostruct;

};


int main(){

	testClass testobj;
	infostruct infoinstance;

	float alpha = 1;
	float beta = 2;
	
	infoinstance.a = 10;
	infoinstance.b = 20;
	
	// showing how to hand over the argument in the member function of the class with boost::bind

	boost::bind<void>(&testClass::memberftn, &testobj, _1, _2)(alpha, beta);
	boost::bind(&testClass::memberftn, &testobj, _1)(infoinstance);
	boost::bind(&testClass::memberftn, &testobj, _1, _2)(infoinstance.a, infoinstance.b);
	

	//printf("%d\n", 10);
	return 1;
}
