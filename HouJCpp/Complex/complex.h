#ifndef __COMPLEX__
#define __COMPLEX__

#include <cmath>
#include <iostream>

class ostream;
class complex;

complex&
__doapl(complex* ths, const complex& r);

/**
 * Define class
*/
class complex {

public:
    complex(double r = 0, double i = 0)
        : re(r), im(i)
    {}
    
    complex& operator += (const complex&);
    double real() const { return re; }
    double imag() const { return im; }

private:
    double re, im;

    friend complex& __doapl(complex*, const complex&);
};


/**
 * 2 - 1 NILine funcs
*/
inline complex&
__doapl(complex* ths, const complex& r) {
    ths->re += r.re;
    ths->im += r.im;
    return *ths;
}

// here actually we can use void as the return type for single assigned plus
// however if we have c1 += c2 += c3; it cannot pass, so we have to make complex& type
inline complex&
complex::operator += (const complex& r) {
    return __doapl(this, r);
}

/**
 * 2 - 2 global funcs
*/
inline double
real(const complex& x) {
    return x.real();
}

inline double
imag(const complex& x) {
    return x.imag();
}

/**
 * 2 - 3: client may add in different ways
*/
inline complex
operator + (const complex& x, const complex& y) {
    return complex(real(x) + real(y), imag(x) + imag(y));
}

inline complex
operator + (const complex& x, double y) {
    return complex(real(x) + y, imag(x));
}

inline complex
operator + (double x, const complex& y) {
    return complex(x + real(y), imag(y));
}

/**
 * 2 - 4: positive/negative
*/
inline complex
operator + (const complex& x) {
    return x;
}

inline complex
operator - (const complex& x) {
    return complex(-real(x), -imag(x));
}

/**
 * 2 - 5
*/
inline bool
operator == (const complex& x, const complex& y) {
    return real(x) == real(y) && imag(x) == imag(y);
}

inline bool
operator == (const complex& x, double y) {
    return real(x) == y && imag(x) == 0;
}

inline bool
operator == (double x, const complex& y) {
    return x == real(y) && imag(y) == 0;
}

/**
 * 2 - 6
*/
inline complex
conj(const complex& x) {
    return complex(real(x), -imag(x));
}

ostream&
operator << (ostream& os, const complex& x) {
    return os << '(' << real(x) << ',' << imag(x) << ')';
}

#endif
