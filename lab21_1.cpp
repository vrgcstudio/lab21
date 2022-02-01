#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A, Rect B){
	float l_XAxis, l_YAxis, Area, a, b, c, d;

		if(A.x + A.w > B.x + B.w) a = B.x + B.w;
		else a = A.x + A.w;
		if(A.x > B.x) b = A.x;
		else b = B.x;
		l_XAxis = a - b;

		if(A.y - A.h < B.y - B.h) c = B.y - B.h;
		else c = A.y - A.h;
		if(A.y < B.y) d = A.y;
		else d = B.y;
		l_YAxis = d - c;

		Area = l_XAxis * l_YAxis;

		if(a - b <= 0 || d - c <= 0){
			return 0;
		}
		else{
			return Area;
		}
}
