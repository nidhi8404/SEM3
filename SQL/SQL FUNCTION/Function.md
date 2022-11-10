## Create Function 
```
delimiter $$
create function proprice(sell_price double)RETURNS varchar(20)
DETERMINISTIC
BEGIN
DECLARE lvl varchar(20);
IF sell_price<1000 THEN
SET lvl='CHEAP';
ELSEIF sell_price>3000 THEN
SET lvl='EXPENSIVE';
END IF;
RETURN(lvl);
END;
$$
```
## Call Function
```
select product_no,proprice(sell_price) from product_master;
$$
```
