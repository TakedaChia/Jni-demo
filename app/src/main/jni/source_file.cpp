//
// Created by Video on 2017/2/21.
//

#include "source_file.h"
#include <jni.h>

#include <android/log.h>



#ifndef LOG_TAG

#define LOG_TAG"ANDROID_LAB"

#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

#endif



/* Header for class lab_sodino_jnitest_MainActivity */



#ifndef _Included_com_example_video_android_c_object_MainActivity

#define _Included_com_example_video_android_c_object_MainActivity

#ifdef __cplusplus

extern "C" {

#endif

/*

 * Class:lab_sodino_jnitest_MainActivity

 * Method: getStringFromNative

 * Signature: ()Ljava/lang/String;

 */

JNIEXPORT jstring; JNICALL Java_com_example_video_android_1c_1object_MainActivity_getStringFromNative

        (JNIEnv *env, jobject jObj){

    LOGE("log string from ndk.");

    return env->NewStringUTF("HelloFrom JNI!");

}



#ifdef __cplusplus

}

#endif

#endif
