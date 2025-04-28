#pragma once
#include <iostream>
namespace mathlib {
	template <typename T>
	class Fraction {
	public:
		T numerator;
		T denominator;
		Fraction() {
			numerator = 0;
			denominator = 1;
		}
		Fraction(T num, T denom) : numerator(num), denominator(denom) {
			if (denominator == 0) {
				throw std::invalid_argument("Denominator cannot be zero.");
			}
		}
		Fraction<T> operator + (const Fraction& other) const {
			T numer = numerator * other.denominator + other.numerator * denominator;
			T denom = denominator * other.denominator;
			return Fraction(numer, denom);
		}
		Fraction<T> operator - (const Fraction& other) const {
			T numer = numerator * other.denominator - other.numerator * denominator;
			T denom = denominator * other.denominator;
			return Fraction(numer, denom);
		}
		Fraction<T> operator * (const Fraction& other) const {
			T numer = numerator * other.numerator;
			T denom = denominator * other.denominator;
			return Fraction<T>(numer, denom);
		}
		Fraction<T> operator / (const Fraction& other) const {
			if (other.numerator == 0) {
				throw std::invalid_argument("Cannot divide by zero.");
			}
			T numer = numerator * other.denominator;
			T denom = denominator * other.numerator;
			return Fraction(numer, denom);
		}
		bool operator == (const Fraction& other) const {
			return (ToFloat() == other.ToFloat());
		}
		bool operator != (const Fraction& other) const {
			return !(*this == other);
		}
		bool operator < (const Fraction& other) const {
			return ToFloat() < other.ToFloat();
		}
		bool operator > (const Fraction& other) const {
			return ToFloat() > other.ToFloat();
		}
		bool operator <= (const Fraction& other) const {
			return ToFloat() <= other.ToFloat();
		}

		bool operator >= (const Fraction& other) const {
			return ToFloat() >= other.ToFloat();
		}

		friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
			os << fraction.numerator << "/" << fraction.denominator;
			return os;
		}

		friend std::istream& operator>>(std::istream& is, Fraction& fraction) {
			char slash;
			is >> fraction.numerator >> slash >> fraction.denominator;
			if (fraction.denominator == 0) {
				throw std::invalid_argument("Denominator cannot be zero.");
			}
			return is;
		}

			Fraction Simplify() {
			//# Find the greatest common divisor(GCD)
			T gcd = findGCD(abs(numerator), abs(denominator));

			//# Divide both numerator and denominator by the GCD
			T simplifiedNumerator = numerator / gcd;
			T simplifiedDenominator = denominator / gcd;

			//# Handle sign(keep sign in numerator)
			if (denominator < 0) {

				simplifiedNumerator = -simplifiedNumerator;
				simplifiedDenominator = -simplifiedDenominator;\
					return Fraction(simplifiedNumerator, simplifiedDenominator);
			}
		}

			T findGCD(T a, T b) {
			//# Euclidean algorithm to find GCD
			while (b != 0) {
				T temp = b;
				b = a % b;
				a = temp;
			}
				return a;
		}

			float ToFloat() const {
				return static_cast<float>(numerator) / denominator;
			}
		
	};

}
