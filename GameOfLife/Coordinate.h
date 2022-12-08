#ifndef CoordDefine
#define CoordDefine

class Coordinate
{
	unsigned x;
	unsigned y;
public:
	Coordinate(unsigned aX, unsigned aY): x(aX), y(aY) {}
	Coordinate() { x = 0; y = 0; }
	Coordinate(Coordinate& aCord): x(aCord.x), y(aCord.y) {}
	~Coordinate() {}

	unsigned getX() { return x; }
	unsigned getY() { return y; }
	void setX(unsigned aX) { x = aX; }
	void setY(unsigned aY) { y = aY; }

	void operator =(Coordinate& aCord) { x = aCord.x; y = aCord.y; }
	int operator ==(Coordinate& c) { return(x == c.x && y == c.y); }
	int operator !=(Coordinate& c) { return(x != c.x || y != c.y); }
};
#endif // CoordDefine
