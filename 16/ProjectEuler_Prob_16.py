def get_sum_of_digits(number):
        digits = []
        number_string = str(number)
        for num in number_string:
            digits.append(int(num))
        return sum(digits)                
    
        
number = pow(2, 1000)
SumofDigits = get_sum_of_digits(number)
print(SumofDigits)


