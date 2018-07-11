filename = 'Prob_8.txt'
with open(filename) as file_object:
    lines = file_object.readlines()

num_string = ''

for line in lines:
    num_string += line.strip()

print(num_string)

P = []

for num in num_string:
    P.append(int(num))

Max_number = []
print(len(P))
for i in range(len(P)):
    print(i)
    # (i <= len(sumdigits)+1):
    sum_numbers = P[i] * P[i + 1] * P[i + 2] * P[i + 3] * P[i + 4] * P[i + 5] * P[i + 6] * P[i + 7] * P[i + 8] \
                  * P[i + 9] * P[i + 10] * P[i + 11] * P[i + 12] * P[i + 13]
    Max_number.append(sum_numbers)
    print(Max_number)    
