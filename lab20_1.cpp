#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1 ,Rect R2){
		double a = max(R1.x,R2.x);
		double b = min(R1.x+R1.w,R2.x+R2.w);
		double c = min(R1.y,R2.y);
		double d = max(R1.y-R1.h,R2.y-R2.h);
	if(b-a > 0){
		return (b-a)*(c-d);
	}else{
	    return 0;
	    }
}