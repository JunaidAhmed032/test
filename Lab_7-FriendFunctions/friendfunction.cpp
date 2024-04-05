#include<iostream>
using namespace std;
class Distance
{
private:
int meter;
public:
Distance(): meter(0) { }
//friend function
friend int addFive(Distance);
};
// friend function definition
int addFive(Distance d)
{
//accessing private data from non-member function
cout<< "we are accessing private member 'meter' and its value is : " << d.meter << endl;
d.meter += 5;
cout << "the value after adding '5' to it: " << d.meter << endl;
}
int main()
{
Distance D;
addFive(D);
return 0;
}