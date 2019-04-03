#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main()
{
    cv::Mat src = cv::imread("../../../../../../datas/f4.jpg");
    if(src.empty()){
        std::cerr << "cannot open image" << std::endl;
        return -1;
    }
    cv::Mat dst_x,dst_y;
    cv::cvtColor(src,src,cv::COLOR_RGB2GRAY);
    cv::spatialGradient(src,dst_x,dst_y);


    cv::imshow("src",src);
    cv::imshow("dst_x",dst_x);
    cv::imshow("dst_y",dst_y);

    cv::waitKey();
    cv::destroyAllWindows();
    return 0;
}