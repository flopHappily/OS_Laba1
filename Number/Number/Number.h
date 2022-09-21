#pragma once

#include <iostream>
#include "pch.h"
#include <cmath>

class Number {
	double val;
public:
	Number() {
		this->val = 0;
	}

	Number(double value) {
		this->val = value;
	}

	static Number getSqrt(Number a) {
		return Number(sqrt(a.val));
	};

	static Number getArctan(Number a, Number b) {
		return Number(atan2(b.val , a.val));
	}

	Number operator +(Number a) {
		return Number(this->val + a.val);
	}
	Number operator -(Number a) {
		return Number(this->val - a.val);
	}
	Number operator *(Number a) {
		return Number(this->val * a.val);
	}
	Number operator /(Number a) {
		return Number(this->val / a.val);
	}
	friend std::ostream& operator << (std::ostream& os, const Number& a) {
		os << a.val;
		return os;
	}
};

Number ZERO(0);
Number ONE(1);

static Number Create(double value) {
	return Number(value);
}