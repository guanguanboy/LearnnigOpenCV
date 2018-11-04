#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
	Mat scrImage = imread("1.jpg");

	imshow("origin image", scrImage);

	Mat edge, grayImage;

	cvtColor(scrImage, grayImage, CV_BGR2GRAY);

	blur(grayImage, edge, Size(3, 3));

	Canny(edge, edge, 3, 9, 3);

	imshow(" canny edge dection", edge);

	waitKey(0);

	return 0;
}