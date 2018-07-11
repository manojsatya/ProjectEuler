# Initialize a list
primeNumber = []

for num in range (2, 120000):
    """Assume number is prime until shown it is not"""
    prime = True
    for i in range(2, num):
        if num % i == 0:
            prime = False
    if prime:
        primeNumber.append(num)
        
print (len(primeNumber))
print (primeNumber[5])
print (primeNumber[10000])

