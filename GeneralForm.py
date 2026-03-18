a = int(input("Enter first term: "))
d = int(input("Enter common difference: "))
n = int(input("Enter number of terms: "))

print("Arithmetic Progression:")

for i in range(n):
    term = a + i * d
    print(term, end=" ")
