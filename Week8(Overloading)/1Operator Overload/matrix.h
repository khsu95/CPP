class Matrix {
	int a, b, c, d;
public:
	Matrix(int a, int b, int c, int d);
	Matrix();
	friend Matrix operator+(Matrix op1, Matrix op2);
	friend Matrix& operator+=(Matrix& op1, Matrix op2);
	friend bool operator==(Matrix op1, Matrix op2);
	bool show();
};