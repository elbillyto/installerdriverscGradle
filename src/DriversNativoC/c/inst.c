#include <stdlib.h>
#include "inst.h"


JNIEXPORT jstring JNICALL Java_proyectoJava_Programa_getString (JNIEnv* env, jobject thiz)
{
  return (*env)->NewStringUTF(env,"String desde codigo nativo");
}

JNIEXPORT int JNICALL Java_proyectoJava_Programa_addAtoB (JNIEnv* env, jobject thiz, jint a, jint b)
{
  return (a+b);
}
