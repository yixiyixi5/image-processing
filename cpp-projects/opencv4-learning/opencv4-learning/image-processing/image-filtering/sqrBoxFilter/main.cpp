#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main()
{
    cv::Mat src = cv::imread("../../../../../../datas/char.jpg");
    if(src.empty()){
        std::cerr << "cannot open image" << std::endl;
        return -1;
    }
    cv::Mat dst;

    cv::sqrBoxFilter(src,dst,-1,cv::Size(7,7));

    cv::imshow("src",src);
    cv::imshow("dst",dst);

    cv::waitKey();
    cv::destroyAllWindows();
    return 0;
}