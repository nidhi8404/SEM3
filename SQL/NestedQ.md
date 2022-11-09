## Find product_no and description of moving products.
```
select distinct p.product_no , p.description
    from product_master p , sales_order_details d
    where p.product_no = d.product_no;
    $$
```
+------------+---------------+

| product_no | description   |

+------------+---------------+

| P00001     | 1.44 Floppies |

| P07965     | 540 HDD       |

| P07885     | CD Drive      |

| P07868     | Keyboards     |

| P03453     | Monitors      |

| P06734     | Mouse         |

| P07975     | 1.44 Drive    |

+------------+---------------+
## Find names of clients who have purchased 'CD Drive'.
```
 select distinct s.client_no ,c.name
    from client_master c , sales_order_details d,sales_order s,product_master p
    where p.product_no=d.product_no and s.s_order_no=d.s_order_no and c.client_no=s.client_no and p.description='CD Drive';
```
## Find out the product which has been sold to Nidhi
```
select d.product_no ,p.description
    from client_master c , sales_order_details d,sales_order s,product_master p
    where p.product_no=d.product_no and s.s_order_no=d.s_order_no and c.client_no=s.client_no and c.name ='Nidhi Shinde';
    $$
```
## List the product_no and s_order_no of customers having qty_ordered less than 5 for product '1.44 Floppies'
```
 select d.product_no , d.s_order_no
    from sales_order_details d, sales_order s, product_master p,client_master c
    where p.product_no=d.product_no and s.s_order_no=d.s_order_no and d.qty_ordered<5 and p.description='1.44 Floppies';
    $$
```
+------------+------------+

| product_no | s_order_no |

+------------+------------+

| P00001     | O19001     |

| P00001     | O19001     |

| P00001     | O19001     |

| P00001     | O19001     |

| P00001     | O19001     |

| P00001     | O19001     |

+------------+------------+
## Find products and their quantities for ord placed by 'Vandana Saitwal' & 'Nidhi Shinde'
```
select d.product_no ,p.description , sum(qty_ordered)"Qty Ordered"
    from sales_order_details d, sales_order s, product_master p,client_master c
    where p.product_no=d.product_no and s.s_order_no=d.s_order_no and c.client_no=s.client_no and (c.name ='Nidhi Shinde' or c.name='Vandana Saitwal')
    group by  d.product_no ,p.description;
    $$
```
