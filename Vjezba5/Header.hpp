#include <iostream>
using namespace std;
#pragma once
namespace OOP{
	class Vec3 {
		int x, y, z;
	public:
		Vec3() {
			x = 0;
			y = 0;
			z = 0;
		}
		Vec3(int x, int y, int z) {
			this->x = x;
			this->y = y;
			this->z = z;
		}

		friend istream& operator>>(istream& input, Vec3& v) {
			input >> v.x >> v.y >> v.z;
			return input;
		}

		friend ostream& operator<<(ostream& output, const Vec3& v) {
			output << "x: " << v.x << " y: " << v.y << " z: " << v.z;
			return output;
		}

		Vec3 operator+(const Vec3& v) {
			Vec3 vec;
			vec.x = this->x + v.x;
			vec.y = this->y + v.y;
			vec.z = this->z + v.z;
			return vec;
		}

		Vec3 operator-(const Vec3& v) {
			Vec3 vec;
			vec.x = this->x - v.x;
			vec.y = this->y - v.y;
			vec.z = this->z - v.z;
			return vec;
		}

		Vec3& operator +=(const Vec3& other) {
			this->x += other.x;
			this->y += other.y;
			this->z += other.z;

			return *this;
		}

		Vec3& operator -=(const Vec3& other) {
			this->x -= other.x;
			this->y -= other.y;
			this->z -= other.z;

			return *this;
		}

		Vec3& operator *=(const Vec3& other) {
			this->x *= other.x;
			this->y *= other.y;
			this->z *= other.z;

			return *this;
		}

		Vec3& operator /=(const Vec3& other) {
			this->x /= other.x;
			this->y /= other.y;
			this->z /= other.z;

			return *this;
		}

		Vec3 operator*(int n) {
			this->x *= n;
			this->y *= n;
			this->z *= n;

			return *this;
		}

		Vec3 operator/(int n) {
			this->x /= n;
			this->y /= n;
			this->z /= n;

			return *this;
		}

		bool operator==(const Vec3& v) {
			if (v.x == this->x&&v.y == this->y&&v.z == this->z)
				return true;
			return false;
		}

		int &operator[](int i) {
			if (i > 2) {
				cout << "Mora biti manji od 3" << endl;
				return this->x;
			}
			if (i == 0)
				return this->x;
			else if (i == 1)
				return this->y;
			else
				return this->z;
		}

		void normalize(Vec3* norm) {
			float n = sqrt(norm->x * norm->x + norm->y * norm->y + norm->z * norm->z);
			norm->x /= n;
			norm->y /= n;
			norm->z /= n;
		}
	};


}
