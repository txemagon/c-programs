#include <iostream>

using namespace std;

class Gozer
{
    public:

	Gozer();
	~Gozer();
};

Gozer::Gozer()
{
    cout << "Gozer the destructor has been created." << endl;
}

Gozer::~Gozer()
{
    cout << "Gozer the destructor has been destructed." << endl <<
	"Now is more himself than ever" << endl;
}

int 
main(int argc, char **argv)
{
    Gozer objeto;
    return 0;
}
