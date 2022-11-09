# IN
## Create Procedure
```
create procedure INp(in client_no int)
    begin
    select * from client_master LIMIT client_no;
    end;
    $$
```
## Call Procedure
```
 call INp(4);
    $$
```
+-----------+-----------------+----------+----------+--------+---------+-------------+----------+

| Client_no | Name            | Address1 | Address2 | City   | Pincode | State       | Bal_due  |

| C001      | Nidhi Shinde    |          |          | Bombay |  400054 | Maharashtra | 15000.00 |

| C002      | Vandana Saitwal |          |          | Madras |  780001 | Tamil Nadu  |     0.00 |

| C003      | Pramada Jaguste |          |          | Bombay |  400057 | Maharashtra |  5000.00 |

| C004      | Basu Navindgi   |          |          | Bombay |  400056 | Maharashtra |     0.00 |

+-----------+-----------------+----------+----------+--------+---------+-------------+----------+
