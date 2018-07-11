def SumOfSquare(First_number, Last_Number):
    SuOfSq = []
    for i in range(First_number, Last_Number):
        SuOfSq.append(i*i)
    return sum(SuOfSq)

def SquareofSum(First_number, Last_Number):
    SqofSu = []
    for i in range(First_number, Last_Number):
        SqofSu.append(i)
    return sum(SqofSu) * sum(SqofSu)

A = SumOfSquare(1,101)
B = SquareofSum(1,101)
print(B-A)
