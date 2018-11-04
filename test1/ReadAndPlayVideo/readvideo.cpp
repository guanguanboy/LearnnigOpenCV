#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
	VideoCapture capture("1.avi");

	while (1)
	{
		Mat frame;
		
		capture >> frame;

		if (frame.empty())
		{
			break;
		}

		imshow("read video", frame);
		waitKey(30);
	}

	return 0;
}