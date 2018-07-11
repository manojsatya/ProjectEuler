class ProjectEuler():
    """An attempt to put all the methods in this class to avoid code reuse"""


    def __init__(self, number):
        """Initialize attributes such as number"""
        self.number = number


    def get_sum_of_digits(self, number):
        """Method to get the summation of digits of a number"""
        digits = []
        number_string = str(number)
        for num in number_string:
            digits.append(int(num))
        return sum(digits)
