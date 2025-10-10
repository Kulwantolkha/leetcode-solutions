# Write your MySQL query statement below
select customer_id 
from Customer
GROUP BY customer_id
HAVING (select COUNT(DISTINCT product_key) as cnt from Product) = COUNT(DISTINCT product_key);