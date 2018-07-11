#number = 909
def checkPalindrome(number):
    #print("The number is " + str(number) + ".")
    reverse = 0
    while(number > 0):
        remainder = number%10
        reverse = reverse * 10 + remainder       
        number = (number - (number%10))/10
        #print(remainder)
        #print(reverse)
        #print(number)
    return reverse
    
for i in range(100,1000):
    for j in range(100,1000):
        number = i*j
        #print (i*j)
        Palindrome = checkPalindrome(number)
        if (Palindrome == number):
            print("Its a palindrome")
            print(Palindrome)


#print(Palindrome)








def printing():
    print("Hellooooooo")
    print("Grrrrrrrr")
    m = 10+5
    print("I am " + str(m)+ " years old")
    return m
