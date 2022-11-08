# Area of Triangle

## EQUILATERAL TRIANGLE
```
area:-
   write('Enter the length of side of equilateral triangle:'),
    read(Lside),
    write('The area of the triangle is :'),
    A is (sqrt(3)*Lside*Lside/4),
    write(A).
```
## ISOCELES TRIANGLE
```
area:-
   write('Enter the length of 1st side of isoceles triangle:'),
    read(S1),
    write('Enter the length of the equal sides of isoceles triangle:'),
    read(S2),
    write('The area of the triangle is :'),
    S is (S1+S1+S2)/2,
    A is (sqrt(S*(S-S1)*(S-S2)*(S-S2))),
    write(A).
```

## TRIANGLE 
```
area:-
   write('Enter the length of 1st side of triangle:'),
    read(S1),
    write('Enter the length of 2nd side of triangle:'),
    read(S2),
    write('Enter the length of 3rd side of triangle:'),
    read(S3),
    write('The area of the triangle is :'),
    S is (S1+S1+S3)/2,
    A is (sqrt(S*(S-S1)*(S-S2)*(S-S3))),
    write(A). 
```
