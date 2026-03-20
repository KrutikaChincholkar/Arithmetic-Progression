a = int(input("Enter first term: "))
d = int(input("Enter common difference: "))
n = int(input("Enter number of terms: "))

sum_ap = (n * (2 * a + (n - 1) * d)) / 2

print("Sum of first", n, "terms =", sum_ap)
