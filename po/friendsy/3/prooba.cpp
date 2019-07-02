#include <iostream>
#include <string>

using namespace std;

struct Centre{
	float x;
	float y;
};

class Circle{

public: 
	friend bool TheyCross(Circle *c1, Circle *c2);
	
	Circle(float RADIUS, float X, float Y);

private:
	float radius;
	Centre centre;
	
};

Circle::Circle(float RADIUS, float X, float Y){
	this->radius=RADIUS;
	this->centre= (X, Y);
	}
	
bool TheyCross(Circle *c1, Circle *c2){
	
	float d = 0;
	float XY = (sqrt((c1->centre.x - c2->centre.x)^2 + (c1->centre.y - c2->centre.y)^2));
	
	if (c1->radius > c2->radius)
		d = c1-c2;
	else
		 d = c2 - c1;
		 
		if (d < XY && XY<(c1->radius + c2->radius))
		
		return true;
	
		else return false;
};

int main(){
	
	Circle c1 = new Circle(3, 0, 0);
	Circle c2 = new Circle(4, 3, 3);
	
	if(Cirlce.TheyCross(c1, c2) == true)
		cout<< "true"<< endl;
	else
		cout<< "false"<< endl;
	
	return 0;
	}
