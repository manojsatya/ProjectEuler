summa = 0;
for i = 1:999 
   %disp(i) 
  if (rem( i,3) == 0) || (rem( i,5) == 0)
    %disp(i)
    summa = summa + i;
  endif
endfor

disp(summa)

