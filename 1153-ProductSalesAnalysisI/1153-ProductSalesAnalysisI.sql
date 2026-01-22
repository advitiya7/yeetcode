-- Last updated: 1/22/2026, 7:54:26 PM
# Write your MySQL query statement below
select p.product_name,s.year,s.price from Product p inner join Sales s on s.product_id=p.product_id