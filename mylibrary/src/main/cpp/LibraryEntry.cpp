#include <jni.h>
#include <string>
#include <android/log.h>

#define LOG_TAG "JNI"
#define ALOGV(...) __android_log_print (ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

extern "C" {

JNIEXPORT jstring JNICALL
Java_com_willitwork_mylibrary_LibraryInterface_getNativeText__(JNIEnv *env, jobject instance)
{
    return env->NewStringUTF("Hello C++");
}

jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    ALOGV ("Lib Loaded");
    JNIEnv* env;
    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
        return -1;
    }
    return JNI_VERSION_1_6;
}
}