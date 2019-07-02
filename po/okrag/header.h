#ifndef _header_h_
#define _header_h_

struct Centre{
	
	float x;
	float y;
	
	};

class Circle{
	
public:
	float radius;
	Centre centre;


	
	Circle(){

	this->radius = 0;
	this->centre = {0,0};
	
	}

	
	};
	

#endif 
