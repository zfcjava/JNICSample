/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <stdio.h>
#include <android/log.h>
/* Header for class com_example_zfc_jnisample_MainActivity */

#ifndef _Included_com_example_zfc_jnisample_MainActivity
#define _Included_com_example_zfc_jnisample_MainActivity
#ifdef __cplusplus
extern "C" {
#endif

//宏定义类似java 层的定义,不同级别的Log LOGI, LOGD, LOGW, LOGE, LOGF。 对就Java中的 Log.i log.d
#define LOG_TAG    "hpc -- JNILOG" // 这个是自定义的LOG的标识
//#undef LOG // 取消默认的LOG
#define LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG, __VA_ARGS__)
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG, __VA_ARGS__)
#define LOGW(...)  __android_log_print(ANDROID_LOG_WARN,LOG_TAG, __VA_ARGS__)
#define LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG, __VA_ARGS__)
#define LOGF(...)  __android_log_print(ANDROID_LOG_FATAL,LOG_TAG, __VA_ARGS__)

/*
 * Class:     com_example_zfc_jnisample_MainActivity
 * Method:    getStringFronC
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_zfc_jnisample_MainActivity_getStringFronC
        (JNIEnv*  env, jobject obj){

    return (*env)->NewStringUTF(env, "zhangfengcheng");
};

JNIEXPORT jstring JNICALL Java_com_example_zfc_jnisample_MainActivity_revert
        (JNIEnv * env, jobject thizz, jstring content){
    //1.将java字符串转换为C字符串
    const jbyte *str;
    jboolean isCopy;


    str = (*env)->GetStringUTFChars(env, content, &isCopy);
    if (0 != str) {
        printf("java string : %s", str);
        if (JNI_TRUE == isCopy) {
//            printf("c string is a copy of java string");
            LOGE("c string is a copy of java string");
        } else {
            printf("c points to actual java String");
            LOGE("c points to actual java String");
        }
//        LOGE("")
    }

    return (*env)->NewStringUTF(env, "second");
}
#ifdef __cplusplus
}
#endif
#endif