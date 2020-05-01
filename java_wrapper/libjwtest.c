#include <jni.h>

int mult(int a, int b)
{
  return (a*b);
}

int sum(int a, int b)
{
  return (a+b);
}

/*
 * Class:     javawtest
 * Method:    mult
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_javawtest_mult
  (JNIEnv *env, jobject jobj, jint a, jint b){
    return mult(a, b);
}

/*
 * Class:     javawtest
 * Method:    sum
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_javawtest_sum
  (JNIEnv *env, jobject jobj, jint a, jint b){
    return sum(a, b);
}
