#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;

int main()
{
	Mat scrImage = imread("1.jpg");

	imshow("origin image", scrImage);

	Mat dstImage;

	blur(scrImage, dstImage, Size(7, 7));

	imshow("blurred image", dstImage);

	waitKey(0);

	return 0;
}