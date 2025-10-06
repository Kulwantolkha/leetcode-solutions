# Write your MySQL query statement below
select s.product_id, IFNULL(ROUND((SUM(s.price*u.units)/SUM(u.units)),2),0) as average_price
from Prices s
LEFT JOIN UnitsSold u 
ON s.product_id = u.product_id 
AND s.start_date <= u.purchase_date 
AND s.end_date >= u.purchase_date
GROUP BY s.product_id;
