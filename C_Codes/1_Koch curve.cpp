#include <vector>
#include "GLSupport.hpp"
#include <math.h>
#include <stdlib.h>
#define transformNum 5
#define storageSize 10000

using namespace graphics;

Color White = { 1.0f, 1.0f, 1.0f };

float frameWidth = 1024;
float frameHeight = 1024;

int i, j, k, t;

Point2f* transform(Point2f sp, Point2f ep)
{
	Point2f p1(sp.x + (ep.x - sp.x) / 3, sp.y + (ep.y - sp.y) / 3);
	Point2f	p2(sp.x + (ep.x - sp.x) * 2 / 3, sp.y + (ep.y - sp.y) * 2 / 3);
	Point2f pm(sp.x + (3 * (ep.x - sp.x) - sqrtf(3) * (ep.y - sp.y))/ 6 , sp.y + (3 * (ep.y - sp.y) + sqrtf(3) * (ep.x - sp.x)) / 6);
	Point2f pointArr[] = { sp, p1, pm, p2, ep };
	return pointArr;
}

typedef struct result_
{
	Point2f ptptr_[storageSize];
	int pointNum_;
}result_;

result_ transform_transformNum(Point2f sp, Point2f ep)
{
	result_ result;
	int pointNum = 2;
	Point2f ptptr[storageSize], tmp[storageSize];

	for (i = 0; i < storageSize; i++)
	{
		ptptr[i] = Point2f(frameWidth, frameHeight);
		tmp[i] = Point2f(frameWidth, frameHeight);
	}
	ptptr[0] = sp;
	ptptr[1] = ep;

	for (i = 0; i < transformNum; i++)
	{
		t = pointNum;
		for (j = 0; j < storageSize; j++)
			tmp[j] = ptptr[j];
		for (j = 0; j < pointNum - 1; j++)
		{
			for (k = 0; k < 5; k++)
			{
				tmp[j * 5 + k] = transform(ptptr[j], ptptr[j + 1])[k];
				t++;
			}
		}
		for (j = 0; j < storageSize; j++)
			ptptr[j] = tmp[j];
		pointNum = t;
	}
	result.pointNum_ = pointNum;
	for (j = 0; j < storageSize; j++)
		result.ptptr_[j] = ptptr[j];
	return result;
}

void render() 
{
	clear();

	Point2f sp(0.f, frameHeight/4);
	Point2f ep(frameWidth/2, frameHeight/4);
	
	/********************* draw part **************************/

	result_ result = transform_transformNum(sp, ep);

	for (i = 0; i < result.pointNum_ - 1; i++)
	{
		drawLine(result.ptptr_[i], result.ptptr_[i + 1], White);
	}
	
	/**********************************************************/

}

void main(int argc, char* argv[]) 
{
	InitAndCreateWindow(argc, argv, "test", frameWidth, frameHeight, render);
}