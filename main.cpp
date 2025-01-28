#include "opencv2/opencv.hpp"
#include <iostream>

int main()
{
    cv::Mat img = cv::imread("image.jpg");
    if (img.empty())
    {
        std::cerr << "Error: Image not found" << std::endl;
        return 1;
    }

    cv::imshow("Image", img);
    cv::waitKey(0);
    return 0;
}