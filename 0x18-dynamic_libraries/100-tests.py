import random
import ctypes

# Load the shared library
cops = ctypes.CDLL('./100-operations.so')

# Random test values
a = random.randint(-111, 111)
b = random.randint(-111, 111)

# Call C functions
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))

