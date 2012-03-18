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

// replaced include by forward declaration
//#include "opencv2\core\core.hpp"
namespace cv{
  class Mat;
};

namespace lib_parking_tracking{
  
  class LISO_CLASS_DECLSPEC OpenCVInteroperator {
  public:
    //��OpenCV2�� cv::Mat matrix ת��Ϊ�����汾����ʾ��ͼƬ
    /*static GrayLevelImage4Byte*
        GetGrayLevelImage4ByteFromMat(const cv::Mat& image_mat);
    
    static cv::Mat* GetMatFromGrayLevelImage4Byte(
        const ::lib_img_spatial_operations::GrayLevelImage4Byte& image);*/

    // ��ʾһ��ͼ�����������Ӧ���ǻ��Զ����ŵ�
    static void ShowImage(
        const cv::Mat& image2show, 
        const char* window_title);
  };


} //ns lib_parking_tracking


#endif //OPEN_CV_INTEROPERATING_H_