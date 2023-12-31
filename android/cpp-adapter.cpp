#include <jni.h>
#include "../cpp/react-native-quick-base64.h"

extern "C"
JNIEXPORT void JNICALL
Java_com_quickbase46_QuickBase64Module_initialize(JNIEnv* env, jclass clazz, jlong jsiPtr) {
  installBase64(*reinterpret_cast<facebook::jsi::Runtime*>(jsiPtr));
}

extern "C"
JNIEXPORT void JNICALL
Java_com_quickbase46_QuickBase64Module_destruct(JNIEnv* env, jclass clazz) {
  cleanupBase64();
}
