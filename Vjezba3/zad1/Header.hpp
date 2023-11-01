using namespace std;

class Position {
public:
	double x = 0, y = 0, z = 0;
	void setValue(int x1, int y1, int z1);
	void setValue_random(double min, double max);
	void getValue(Position& p);
	void distance2D(Position &p1,Position &p2);
	void distance3D(Position& p1, Position& p2);
};

class Weapon {
public:
	Position p;
	int ammo=6;
	int magazine=6;

	void shoot();
	void reload();
};

class Target {
public:
	Position p[2];
	int state = 0;
};

void shootTargets(Target* t, Weapon w, int n);