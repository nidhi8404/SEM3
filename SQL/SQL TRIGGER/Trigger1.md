# UPPERCASE
```
create table Student (
    roll_no int(2),
    name varchar(20),
    city varchar(15),
    state varchar(20)
    );
```
## Create Trigger
```
delimiter $$
create trigger tg1
    before insert on student
    for each row
    begin
    set new.name=upper(new.name);
    set new.city=upper(new.city);
    end;
    $$
```
## Insert Values in Student
```
 insert into student (roll_no,name ,city,state)
    values(1,'Nidhi','mumbai','Maharashtra'),
    (2,'Raju','seoul','Korea'),
    (3,'ausha','agra','Delhi');
    $$
```
## Show Student
```
select * from student;
    $$
```
+---------+-------+--------+-------------+ 

| roll_no | name  | city   | state       |

|       1 | NIDHI | MUMBAI | Maharashtra |

|       2 | RAJU  | SEOUL  | Korea       |

|       3 | AUSHA | AGRA   | Delhi       |

+---------+-------+--------+-------------+ 





