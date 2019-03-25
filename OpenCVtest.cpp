#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main(int argc,char **argv)
{
    Mat image = imread("test.jpg");
    namedWindow("test",WINDOW_AUTOSIZE);
    imshow("test",image);
    waitKey(0);
    return 0;
}
