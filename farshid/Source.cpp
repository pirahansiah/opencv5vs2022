#include <iostream>
#include <opencv2/core.hpp>
#include "opencv2/opencv.hpp"

int main(void)
{
	std::cout << "farshid\n";
	cv::Mat src = cv::imread("a.png");
	cv::imshow("farshid", src);
	cv::waitKey(1000);
	return 0;

}