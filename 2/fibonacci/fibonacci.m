firstNumber = 1
secondNumber = 2
%NextNumber = firstNumber + secondNumber;
i = 1;
total = [secondNumber];
totalAdd = 0;
NextNumber = 0;
while  NextNumber < 4000000
  NextNumber
  NextNumber = firstNumber + secondNumber;
  firstNumber = secondNumber;
  secondNumber = NextNumber;  
  
  if rem (NextNumber,2) == 0
    total = [total NextNumber];
        
  endif 
 
  
end

sum(total)
total