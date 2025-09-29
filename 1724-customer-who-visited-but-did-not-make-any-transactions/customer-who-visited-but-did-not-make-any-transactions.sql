# Write your MySQL query statement below
select customer_id, COUNT(customer_id) as count_no_trans 
from Visits as v LEFT JOIN Transactions t
on v.visit_id = t.visit_id
where t.transaction_id IS NULL
GROUP BY customer_id;