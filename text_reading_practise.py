with open('pi_digits.txt') as file_object:
    contents = file_object.read()
    print(contents.rstrip())

print("----------------------------")
filename = 'pi_digits.txt'
with open(filename) as file_object:
    for line in file_object:
        print(line.rstrip())
print("----------------------------")

filename = 'pi_digits.txt'
with open(filename) as file_object:
    lines = file_object.readlines()

pi_string = ''

for line in lines:
    pi_string += line.strip()

print(pi_string)
print(len(pi_string))

def get_sum_of_digits(number):
        digits = []
        number_string = str(number)
        for num in number_string:
            digits.append(int(num))
        return sum(digits)

SumofDigits = get_sum_of_digits(pi_string)
print(SumofDigits)
