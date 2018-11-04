#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
	VideoCapture capture(1); //����Ϊ1��ʾ������������ͷ��0��ʾ������������ͷ
	Mat edges;

	while (1)
	{
		Mat frame;

		capture >> frame;

		imshow("read video", frame);

		cvtColor(frame, edges, COLOR_BGR2GRAY);

		blur(edges, edges, Size(7, 7));

		Canny(edges, edges, 0, 30, 3);

		imshow("canny video", edges);

		if (waitKey(30)>= 0)
			break;
	}

	return 0;
}