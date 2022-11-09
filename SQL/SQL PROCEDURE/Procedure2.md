# OUT
## Create Procedure
```
 create procedure OUTp(OUT client_no int)
    begin
    select COUNT(*) into client_no FROM client_master;
    end;
    $$
```
## Call Procedure 
```
call OUTp(@a);
    -> $$
```
```
select @a;
    $$
```
+------+

| @a   |

|    6 |

+------+
