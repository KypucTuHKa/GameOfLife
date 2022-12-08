#ifndef ObstacleDefine
#define ObstacleDefine
#define DefaultObstacleImage '#'

#include "Cell.h"

class Obstacle : public Cell
{
public:
	Obstacle(Coordinate& aCord) : Cell(aCord) { Image = DefaultObstacleImage; }

	virtual ~Obstacle() {}
};

#endif // ObstacleDefine
