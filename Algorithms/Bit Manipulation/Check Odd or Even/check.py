#Checks for Odd or Even in Python
def OddOrEven(n):
  binary_value = n & 1 #even if 0 and odd if 1
  if binary_value == 0:
    return "Even"
  else:
    return "Odd"
  
