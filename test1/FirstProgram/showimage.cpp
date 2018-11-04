#include <opencv2/opencv.hpp>
using namespace cv;

void main()
{
	Mat srcImage = imread("1.jpg");

	imshow("origin image", srcImage);

	waitKey(0);
}