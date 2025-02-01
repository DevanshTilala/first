import MyFunctions as D
import numpy as np

a1=float(input("a1= "))
b1=float(input("b1= "))
c1=float(input("c1= "))
d1=float(input("d1= "))
a2=float(input("a2= "))
b2=float(input("b2= "))
c2=float(input("c2= "))
d2=float(input("d2= "))
a3=float(input("a3= "))
b3=float(input("b3= "))
c3=float(input("c3= "))
d3=float(input("d3= "))

# Coefficient matrix
A = np.array([[a1, b1, c1], [a2, b2, c2], [a3, b3, c3]])
# Constant matrix
B = np.array([d1, d2, d3])

# Solving for x, y, z
try:
    solution = np.linalg.solve(A, B)
    print(f"Solution: x={solution[0]:.2f}, y={solution[1]:.2f}, z={solution[2]:.2f}")
except np.linalg.LinAlgError:
    print("The system has no unique solution.")