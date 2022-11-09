  # Diff Tables
  ## Create Procedure and Cursor
  ```
   CREATE procedure CPr()
    BEGIN
    DECLARE done INT(10) DEFAULT 0;
    DECLARE i varchar(20);
    DECLARE n varchar(100);
    declare curs1 CURSOR FOR select roll_no,name from Student;
    declare CONTINUE HANDLER FOR NOT FOUND set done=1;
    OPEN curs1;
    read_loop:LOOP
    fetch curs1 INTO i,n;
    If done=1 THEN
    leave read_loop;
    end if;
    select i,n;
    end loop read_loop;
    close curs1;
    end;
    $$
```
## Call Cursor
```
 CALL CPr();
    $$
```
+------+-------+

| i    | n     |

| 1    | NIDHI |

+------+-------+ 

1 row in set (0.00 sec)

+------+------+

| i    | n    |

| 2    | RAJU |

+------+------+

1 row in set (0.01 sec)

+------+-------+

| i    | n     |

| 3    | AUSHA |

+------+-------+
1 row in set (0.01 sec)
