#include <iostream>
#include <vector>
#include "box.h" 

using namespace std;

int main( )
{
	vector <Box*> d1;// = new vector<Box>();
	vector <Box> d2;// = new vector<Box>();

	Box box1;        // Declare Box1 of type Box
	box1.i = 5;
	cout << "Volume of box1 : " << box1.i<<endl;

	Box *box2 = new Box();
	box2->i = 4;
	cout << "Volume of box2 : " << box2->i<<endl;


	//d.push_back(box1);
	d1.push_back(box2);

	cout << "vect: " << d1[0]->i << endl;
	//cout << "vect: " << d[1].i << endl;

	//d.push_back(box1);
	d2.push_back(box1);

	cout << "vect: " << d2[0].i << endl;
	//cout << "vect: " << d[1].i << endl;



	delete(box2);

	return 0;
}
