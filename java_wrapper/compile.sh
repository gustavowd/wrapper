#!/bin/bash

gcc -o libjwtest.so -shared -Wall -Werror -fPIC -I/usr/lib/jvm/java-12-oracle/include -I/usr/lib/jvm/java-12-oracle/include/linux libjwtest.c

javac javawtest.java -h .

