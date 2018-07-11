def smallestMultiple(number_from, number_to):
    number = 1
    while True:
        for num in range(number_from,number_to):
            if (number % num ==0):
                print("Here")
                return False
        else:
            number = number + 1
    return number
    


#number = smallestMultiple(1,10)
#print(number)

##for num in range(0,300000000,20):
##    #for div in range(1, 10):
##        if (num % 20 ==0):
##            if (num % 19 ==0):
##                if (num % 18 ==0):
##                    if (num % 17 ==0):
##                        if (num % 16 ==0):
##                            if (num % 15 ==0):
##                                if (num % 14 ==0):
##                                    if (num % 13 ==0):
##                                        if (num % 12 ==0):
##                                            if (num % 11 ==0):
##                        #print("Here")
##                                                print(num)
##                        #print(div)
            
def gcd(x,y): return y and gcd(y,x % y) or x
def lcm(x,y): return x * y / gcd(x,y)

n = 1
for i in range(1, 21):
    print("Here")
    n = lcm(n,i)
print(n)
