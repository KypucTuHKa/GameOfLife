#ifndef PredatorDefine
#define PredatorDefine
#define DefineImagePredator 'S'
#define TimeToFeed 6
#include "Prey.h"
class Predator : public Prey
{
	virtual Cell* reproduce(Coordinate aOffset);

protected:
	unsigned timeToFeed;

public:
	Predator(Coordinate aCord) : Prey(aCord) { timeToFeed = TimeToFeed; Image = DefineImagePredator; }

	virtual ~Predator() {}

	virtual void process();
};
#endif //PredatorDefine