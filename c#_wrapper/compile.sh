#!/bin/bash

gcc -o libtest.so -shared -Wall -Werror -fPIC libtest.c

mcs test.cs

