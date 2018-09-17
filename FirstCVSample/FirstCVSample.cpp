// FirstCVSample.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<opencv2\opencv.hpp>
//#include<opencv2\core\core.hpp>
//#include<opencv2\highgui\highgui.hpp>


using namespace std;
using namespace cv;


int _tmain(int argc, _TCHAR* argv[])
{
	Mat matAli;
	Mat imAli;
	int weith, height, channels;

	 //从内存读入一张图像
	matAli = imread("C:\\Users\\Ying\\Desktop\\FirstCVSample\\image\\1.jpg");

	//图像争强;
	imAli = Mat(matAli.size(),CV_32S);
	imAli = Scalar::all(0);// matAli.clone();
	weith = imAli.cols;
	height = imAli.rows;
	channels = imAli.channels();
	/*for (int i = 0; i < height; ++i)
	{ 
		for (int j = 0; j < weith; ++j)
		{
			for (int k = 0; k < channels; ++k)
			{
				imAli.at<Vec3b>(i, j)[k] = 0.8 *imAli.at<Vec3b>(i, j)[k] + 80;
			}
		}
	}*/
	//cvtColor(matAli, matAli, COLOR_BGR2GRAY);
	//equalizeHist(matAli, imAli);
	watershed(matAli, imAli);

	 //将该图像显示在新建的窗口内
	imshow("matAli", matAli);
	imshow("imAli", imAli);

	 //永远等待按钮
	waitKey(0);

	return 0;
}

