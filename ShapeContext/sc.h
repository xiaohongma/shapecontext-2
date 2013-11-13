#ifndef SC_H
#define SC_H

#include <vector>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using cv::Mat;
using cv::Point;
using std::vector;

#define DLL_EXPORT __declspec(dllexport)

extern "C"
{
	DLL_EXPORT void    getContour(Mat &img, vector<Point> &contour);
	DLL_EXPORT int**   calcShapeContext(vector<Point> &contour);
	DLL_EXPORT double  matchShapeContext(int **hist1, int sz1, int **hist2, int sz2);
	DLL_EXPORT char    simpleShapeContextMatch(Mat &img, vector<Mat> &samples, 
		vector<char> &labels, bool watch=false);
}

//get shape contour
//void getContour(Mat &img, vector<Point> &contour);
void showMatch(vector<Point> &pt1, vector<Point> &pt2, int *rowsol, int *colsol);
//watch: watch match result in image
//char simpleShapeContextMatch(Mat &img, vector<Mat> &samples, vector<char> &labels, bool watch=false);
//double matchShapeContext(int **hist1, int sz1, int **hist2, int sz2);
//int** calcShapeContext(vector<Point> &contour);
void testShapeContext();

#endif