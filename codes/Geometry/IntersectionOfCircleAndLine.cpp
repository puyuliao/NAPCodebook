// p1, p2 should not be zero vector
bool Inter(const Pt &p1, const Pt &p2 , Circ &cc) {
	Pt dp = p2 - p1;
	double a = dp * dp;
	double b = 2 * ( dp * (p1 - cc.O) );
	double c = cc.O * cc.O + p1 * p1 - 2 * ( cc.O * p1 ) - cc.R * cc.R;
	double bb4ac = b * b - 4 * a * c;
	return !( fabs( a ) < eps || bb4ac < 0 );
}
