primeNumber = []

for num in range (2, 2000000):
    """Assume number is prime until shown it is not"""
    prime = True
    for i in range(2, num):
        if num % i == 0:
            prime = False
    if prime:
        primeNumber.append(num)

print(sum(primeNumber))
