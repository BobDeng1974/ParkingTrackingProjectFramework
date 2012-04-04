// open_cv_interoperating - interoperating functions for OpenCV
// This dll maintenance a series of function used for interoperating 
// between many environments
//
// Copyright 2012 Yanxiang Wu. All right reserved
// Private Property
//
// Author: cosmobserver@gmail.com (Yanxiang Wu)
//         <Please add your name by the format above
//
// Head file for OpenCV interoperating
// ����Ŀ��������еĻ�������
#ifndef OPEN_CV_INTEROPERATING_H_   // define protection
#define OPEN_CV_INTEROPERATING_H_

// trick to automatic import and export at both client and dll
#ifdef _EXPORTINGLISO
  #define LISO_CLASS_DECLSPEC    __declspec(dllexport)
#else
  #define LISO_CLASS_DECLSPEC    __declspec(dllimport)
#endif

#include "opencv2\core\types_c.h"
// replaced include by forward declaration
//#include "opencv2\core\core.hpp"
namespace cv{
  class Mat;
};

namespace lib_parking_tracking{
  
  class LISO_CLASS_DECLSPEC OpenCVInteroperator {
  public:

    // ��ʾһ��ͼ�����������Ӧ���ǻ��Զ����ŵ�
    static void ShowImage(
        const cv::Mat& image2show, 
        const char* window_title);

    //��Matת��Ϊ�ɰ��IplImage
    static IplImage* Mat2IplImage(
        cv::Mat& image2transform);

    // ��IplImageת��ΪMat
    static cv::Mat& IplImage2Mat(
        IplImage* image2transform);
  };


} //ns lib_parking_tracking


#endif //OPEN_CV_INTEROPERATING_H_