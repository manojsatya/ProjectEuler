n = 600851475143;
i = 3; 

while rem (n,2) == 0 
  n = n / 2;
end

for i = 3:2:sqrt(n)
  while rem (n,i) == 0
    i    
    n = n / i;
   
  endwhile  
endfor




