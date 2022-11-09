# Update 
## Create person table and insert values
```
create table person(
    ID int(8),
    fname varchar(20),
    lname varchar(20),
    primary key (ID));
    $$
```
```
insert into person(ID,fname,lname)
    values(1,'Nidhi','Shinde'),
    (2,'Raju','Mahpatra'),
    (3,'Ausha','Shahi');
    $$
```
## Create sec update table 
```
create table audit_log(
    ofname varchar(20),
    olname varchar(20),
    nfname varchar(20),
    nlname varchar(20),
    cwhen date);
    $$
```
## Create Trigger
```
create trigger tg2
    after update on person
    for each row
    begin
    insert into audit_log
    values(old.fname,old.lname,new.fname,new.lname,sysdate());
    end;
    $$
```
## Work on trigger using the queries
```
update person
    set fname = 'Tanvi'
    where ID = 1;
    $$
```
```
 update person
    set fname = 'Amruta'
    where ID = 2;
    $$
```
```
 update person
    set fname = 'Tisha'
    where ID = 3;
    $$
```
## See the Update :)
```
 select * from audit_log;
    $$
```
+--------+----------+---------+----------+------------+

| ofname | olname   | nfname  | nlname   | cwhen      |

+--------+----------+---------+----------+------------+

| Nidhi  | Shinde   | Tanvi   | Shinde   | 2022-11-09 |

| Raju   | Mahpatra | Amurata | Mahpatra | 2022-11-09 |

| Ausha  | Shahi    | Tisha   | Shahi    | 2022-11-09 |

+--------+----------+---------+----------+------------+


