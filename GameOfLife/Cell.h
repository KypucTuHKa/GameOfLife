#ifndef CellDefine
#define CellDefine
#define DefaultImage ' '

#include "Ocean.h"

class Cell
{
	friend class Ocean;

protected:
	Ocean* Owner;
	Coordinate offset;
	char Image;

	Cell* getCellAt(Coordinate aCord);
	void assignCellAt(Coordinate aCord, Cell* aCell);
	Cell* getNeighborWhithImage(char aImage);
	Coordinate getEmptyNeighborCord();
	Coordinate getPreyNeighborCord();
	Cell* north();
	Cell* south();
	Cell* east();
	Cell* west();

	virtual Cell* reproduce(Coordinate aOffset);

public:
	Cell(Coordinate& aCord) : offset(aCord) { Image = DefaultImage; }
	Cell();
	virtual ~Cell();

	Coordinate& getOffset() { return offset; }
	void setOffset(Coordinate& aOffset) { offset = aOffset; }
	char getImage() { return Image; }

	void display();
	virtual void process() {}
};

#endif //CellDefine