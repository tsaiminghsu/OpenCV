#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;

int main() {
	Mat src = imread("lena_gray.gif");
	Mat img1;
	int i, j;
	if (!src.data) {
		cout << "don't open." << endl;
		return -1;
	}
	for (i = 0; i < src.row; i++) {
		for (j = 0; j < src.col; j++) {
			img1.at<uchar>(i, j) = 255 - src.at<uchar>(i, j);
		}
	}
	imshow("output", img1);
}
