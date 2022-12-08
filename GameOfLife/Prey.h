#ifndef PreyDefine
#define PreyDefine
#define DefaultPrayImage 'p'
#define TimeToReproduce 6

#include "Cell.h"

class Prey : public Cell
{
protected:

	int timeToReproduce;

	void moveFrom(Coordinate from, Coordinate to);
	virtual Cell* reproduce(Coordinate aOffset);

public:
	Prey(Coordinate& aCord) : Cell(aCord) { timeToReproduce = TimeToReproduce; Image = DefaultPrayImage; }
	virtual ~Prey() {}

	virtual void process() { Coordinate toCord; toCord = getEmptyNeighborCord(); moveFrom(offset, toCord); }
};

#endif