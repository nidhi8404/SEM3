Tables are Continued from [SQL/SQL TRIGGER/Trigger2.md](https://github.com/nidhi8404/SEM3/blob/main/SQL/SQL%20TRIGGER/Trigger2.md)
```
alter table person add column email varchar(50);
    $$
```
```
update person
    set email = 'nidhi@gmail.com'
    where ID like 1;
    $$
```
```
 update person
    set email = 'raju@gmail.com'
    where ID like 2;
    $$
```
```
update person
    set email = 'ausha@gmail.com'
    where ID like 3;
    $$
```
```
select * from person;
   $$
```
+----+---------+----------+-----------------+

| ID | fname   | lname    | email           |

+----+---------+----------+-----------------+

|  1 | Tanvi   | Shinde   | nidhi@gmail.com |

|  2 | Amurata | Mahpatra | raju@gmail.com  |

|  3 | Tisha   | Shahi    | ausha@gmail.com |

+----+---------+----------+-----------------+

# Create cursor
```
CREATE procedure build_email_list(INOUT email_list varchar(400))
BEGIN
DECLARE v_finished INTEGER DEFAULT 0;
declare v_email varchar(100) DEFAULT "";
DECLARE email_cursor CURSOR FOR
SELECT email from person;
DECLARE CONTINUE HANDLER
FOR NOT FOUND set v_finished=1;
OPEN email_cursor;
get_email:LOOP
FETCH email_cursor INTO v_email;
IF v_finished=1 THEN
LEAVE get_email;
END IF;
SET email_list=CONCAT(v_email,";",email_list);
END LOOP get_email;
CLOSE email_cursor;
END;
$$
```
# Exceuting Cursor
```
set @email_list = "1";
    $$
```
```
call build_email_list(@email_list);
    $$
```
```
select @email_list;
    $$
```
+--------------------------------------------------+

| @email_list                                      |

+--------------------------------------------------+

| ausha@gmail.com;raju@gmail.com;nidhi@gmail.com;1 |

+--------------------------------------------------+ 
