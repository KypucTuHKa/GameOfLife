#include <iostream>
#include "Ocean.h"

using namespace std;

main()
{
	Ocean* myOcean = new Ocean;
	myOcean->initialize();
	myOcean->run();
}