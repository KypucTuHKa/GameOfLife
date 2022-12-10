#ifndef OceanDefined
#define OceanDefined
#define MaxRows 25
#define MaxCols 70
#include "Constants.h"
#include "Coordinate.h"

class Cell;

class Ocean
{
	friend class Cell;
	unsigned nRows;
	unsigned nCols;
	unsigned size;
	unsigned nPrey;
	unsigned nPredators;
	unsigned nObstacles;
	Cell* cells[MaxRows][MaxCols];

	void InitCells(void);
	void addEmptyCells(void);
	void addObstacles(void); 
	void addPredators(void);
	void addPrey(void);
	Coordinate getEmptyCellCoord(void);

	void displayBorder(void);
	void displayCells(void);
	void displayStats(int iteration);
public:
	unsigned getNPray(void) { return nPrey; } // ���������� ��������� � ���!
	unsigned getNPredators(void) { return nPredators; } // ���������� ��������� � ���!
	void setNPray(unsigned aNum) { nPrey = aNum; } // ���������� ��������� � ���!
	void setNPredators(unsigned aNum) { nPredators = aNum; } // ���������� ��������� � ���!

	void initialize(void);

	void run(void);
};
#endif