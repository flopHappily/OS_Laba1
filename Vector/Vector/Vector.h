#pragma once
#include "Number.h"
#include "pch.h"
#include <iostream>

#ifdef VECTOR_EXPORTS
#define VECTOR_API _declspec(dllexport)
#else
#define VECTOR_API _declspec(dllimport)
#endif

extern "C" VECTOR_API class Vector {
	Number x, y;
public:
	Vector(Number a, Number b) {
		x = a;
		y = b;
	}
	Vector operator +(Vector b) {
		return Vector(this->x + b.x, this->y + b.y);
	}
	Number polarR() {
		return Number().getSqrt(x * x + y * y);
	}
	Number polarF() {
		return Number().getArctan(x, y);
	}
	Number getX() { return x; }
	Number getY() { return y; }
	friend std::ostream& operator <<(std::ostream& os, Vector& const vec) {
		os << "{ " << vec.getX() << "; " << vec.getY() << "}";
		return os;
	}
};

extern "C" VECTOR_API Vector ZERO_VECTOR;
extern "C" VECTOR_API Vector ONE_VECTOR;