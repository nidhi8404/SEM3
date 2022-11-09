## Print the description and total qty sold for each product.
```
select s.Product_no,p.Description, sum(s.Qty_ordered) 
    from sales_order_details s,product_master p where p.Product_no=s.Product_no
    group by s.Product_no,p.Description;
```
+------------+---------------+--------------------+

| Product_no | Description   | sum(s.Qty_ordered) |

+------------+---------------+--------------------+

| P00001     | 1.44 Floppies |                 34 |

| P07965     | 540 HDD       |                  3 |

| P07885     | CD Drive      |                  5 |

| P07868     | Keyboards     |                  3 |

| P03453     | Monitors      |                  6 |

| P06734     | Mouse         |                  1 |

| P07975     | 1.44 Drive    |                  6 |

+------------+---------------+--------------------+
## Find the value of each product sold.
```
 select s.Product_no, p.Description, sum(s.Qty_disp*s.Product_rate) "Sales Per Product"
    from sales_order_details s,product_master p
    where p.Product_no=s.Product_no 
    group by s.Product_no,p.Description;
```
+------------+---------------+-------------------+

| Product_no | Description   | Sales Per Product |

+------------+---------------+-------------------+

| P00001     | 1.44 Floppies |           9975.00 |

| P07965     | 540 HDD       |           8400.00 |

| P07885     | CD Drive      |          10500.00 |

| P07868     | Keyboards     |           9450.00 |

| P03453     | Monitors      |           6300.00 |

| P06734     | Mouse         |          12000.00 |

| P07975     | 1.44 Drive    |           3150.00 |

+------------+---------------+-------------------+
## Find the product_no and description of non-moving products (eg. products not being sold).
```
select product_no , description
    from product_master
    where product_no not in (select product_no from sales_order_details);
```
+------------+---------------+

| product_no | description   |

+------------+---------------+

| P07865     | 1.22 Floppies |

| P08865     | 1.22 Drive    |

+------------+---------------+
