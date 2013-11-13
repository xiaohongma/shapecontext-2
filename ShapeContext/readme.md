Shape Context algorithm implemented in OpenCV
============================================

-----

# Interface

	void    getContour(Mat &img, vector<Point> &contour);
	int**   calcShapeContext(vector<Point> &contour);
	double  matchShapeContext(int **hist1, int sz1, int **hist2, int sz2);
	char    simpleShapeContextMatch(Mat &img, vector<Mat> &samples, 
		vector<char> &labels, bool watch=false);

# Note

The dynamic library is compiled in Win7, VS11.0/VS2012, 32bits. If you want other version library or other platform's or issue the bug of the library, please contact me and my email is <purkylin@gmail.com>