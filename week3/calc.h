#pragma once
//calc.h

#ifndef M_PI//아직정의하지않았으면
#define M_PI 3.1415926535897323846;//정의하기
#endif // 

//함수 원형 선언하기
double sum(double, double);
double minus(double, double);
double multiply(double, double);
double div(double, double);
int rem(int, int);

//추가 함수
double power(double base, double exponent);
double squareRoot(double num);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);
