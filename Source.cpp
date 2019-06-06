#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;

int main() {
	namedWindow("input", WINDOW_AUTOSIZE);
	namedWindow("output", WINDOW_AUTOSIZE);
	Mat src = imread("lena.jpg", 0);//grayscale
	//Mat img1;
	int i, j;
	if (!src.data) {
		cout << "don't open." << endl;
		return -1;
	}
	imshow("input", src);
	for (i = 0; i < src.rows; i++) {
		for (j = 0; j < src.cols; j++) {
			src.at<uchar>(i, j) = 255 - src.at<uchar>(i, j);
		}
	}
	imshow("output", src);
	waitKey(0);
	return 0;
}
