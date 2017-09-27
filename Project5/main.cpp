#include<iostream>  
#include<stdio.h>
#include <math.h>
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
#include<opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

Mat LoadImg(char* fileName);

int main()
{
	char* imageName = "E:\\OpenCVProject\\OpenCV_Project1\\Project5\\Project5\\pic\\1.jpg";
	Mat img_src = LoadImg(imageName);
	imshow("иотьм╪ф╛", img_src);

	waitKey(0);
}

/*╪стьм╪оЯ*/
Mat LoadImg(char* fileName)
{
	Mat dstImg;
	dstImg = imread(fileName, 1);
	if (dstImg.empty())
	{
		cout << "ERROR! Cannot load the image" << endl;
	}
	return dstImg;
}