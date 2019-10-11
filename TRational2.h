#ifndef _CLASS_H_
#define _CLASS_H_
#include <iostream>
#include <cstdlib>
#include <math.h>

class TRational {
private:
	int a;
	int b;
public:
	TRational() {}
	TRational(int m_a, int m_b);
	friend TRational operator + (const TRational& , const TRational& );
	friend TRational operator - (const TRational& , const TRational& );
	friend TRational operator / (const TRational& , const TRational& );
	friend TRational operator * (const TRational& , const TRational& );
	friend bool operator > (const TRational& , const TRational& );
	friend bool operator == (const TRational& , const TRational& );
	void Add(const TRational &d1, const TRational &d2);
	void Div(const TRational &d1, const TRational &d2);
	void Sub(const TRational &d1, const TRational &d2);
	void Mul(const TRational &d1, const TRational &d2);
	void Compare(const TRational &d1);
	void Reduce();
	

};

#endif