import sys
from ctypes import cdll

sys.stdout.write("Python wrapper test\n\r")

testlib = cdll.LoadLibrary("./libtest.so")

mult = testlib.mult
result = mult(4,5)
sys.stdout.write(str(result))
sys.stdout.write("\n\r")

soma = testlib.sum
result = soma(4,5)
sys.stdout.write(str(result))
sys.stdout.write("\n\r")

