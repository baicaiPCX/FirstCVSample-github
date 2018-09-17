// FirstCVSample.cpp : �������̨Ӧ�ó������ڵ㡣
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

	 //���ڴ����һ��ͼ��
	matAli = imread("C:\\Users\\Ying\\Desktop\\FirstCVSample\\image\\1.jpg");

	//ͼ����ǿ;
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

	 //����ͼ����ʾ���½��Ĵ�����
	imshow("matAli", matAli);
	imshow("imAli", imAli);

	 //��Զ�ȴ���ť
	waitKey(0);

	return 0;
}

