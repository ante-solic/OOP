#include"Header.hpp"
#include<iostream>
#include<cmath>
#include<random>
using namespace std;

void Position::setValue(int x1,int y1,int z1) {
	x = x1;
	y = y1;
	z = z1;
}

void Position::setValue_random(double min, double max) {
	x = (max - min) * ((double)rand() / (double)RAND_MAX) + min;
	y = (max - min) * ((double)rand() / (double)RAND_MAX) + min;
	z = (max - min) * ((double)rand() / (double)RAND_MAX) + min;
}

void Position::getValue(Position &p) {
	cout << "x: " << x;
	cout << " y: " << y;
	cout << " z: " << z;
	cout << endl;
}

void Position::distance2D(Position& p1, Position& p2) {
	double d;
	d = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
	cout << d;
	cout << endl;
}

void Position::distance3D(Position& p1, Position& p2) {
	double d;
	d = sqrt(pow(p2.x - p1.x,2) + pow(p2.y - p1.y,2) + pow(p2.z - p1.z,2));
	cout << d;
	cout << endl;
}

void Weapon::shoot() {
	ammo--;
}

void Weapon::reload() {
	ammo = magazine;
}

void shootTargets(Target* t, Weapon w, int n) {
	int z_min;
	int z_max;
	int targetsShot = 0;
	int reloadCounter = 0;

	for (int i = 0; i < n; i++) {
		if (t[i].p[0].z > t[i].p[1].z) {
			z_min = t[i].p[1].z;
			z_max = t[i].p[0].z;
		}
		else {
			z_max = t[i].p[1].z;
			z_min = t[i].p[0].z;
		}

		if (w.p.z >= z_min && w.p.z <= z_max) {
			w.shoot();
			t[i].state = 1;
			if(w.ammo==0){
				w.reload();
				reloadCounter++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (t[i].state == 1) {
			targetsShot++;
		}
	}

	cout << "Pogodeno je " << targetsShot << " meta" << endl;
	if (targetsShot < 6)
		cout << "Jednim punjenjem pogodeno je " << targetsShot << " meta" << endl;
	else
		cout << "Jednim punjenjem pogodeno je 6 meta" << endl;

	cout << "Pistolj je punjen " << reloadCounter << " puta" << endl;
}