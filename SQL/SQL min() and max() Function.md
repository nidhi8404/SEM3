## SQL MIN() and MAX() Function
```
select min(Sell_price) As SmallestPrice
    From product_master;
```
+---------------+
| SmallestPrice |
+---------------+
|        525.00 |
+---------------+
1 row in set (0.00 sec)
```
select max(Sell_price) As LargestPrice
From product_master;
```
+--------------+
| LargestPrice |
+--------------+
|     12000.00 |
+--------------+
1 row in set (0.00 sec)
```
 select max(bal_due) As LargestPrice
     from client_master;
```
+--------------+
| LargestPrice |
+--------------+
|     15000.00 |
+--------------+
1 row in set (0.00 sec)
```
select min(bal_due) As SmallestPrice
    from client_master;
```
+---------------+
| SmallestPrice |
+---------------+
|          0.00 |
+---------------+
1 row in set (0.00 sec)
