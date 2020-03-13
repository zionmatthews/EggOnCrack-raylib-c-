#pragma once
class Matrix3
{
public:
	Matrix3();
	~Matrix3();

	Matrix3 GetTransposed();
	void SetScaled(float x, float y, float z);
	void SetScaled(Vector3 v);
	void Scale(Vector3 v);
	void setRotateX(double radians);
	void RotateX(double radians);
	void SetRotateY(double radians);
	void RotateY(double radians);

private: 
	//Each value stored in Matrix3
	float m11, m12, m13, m21, m22, m23, m31, m32, m33;
};

