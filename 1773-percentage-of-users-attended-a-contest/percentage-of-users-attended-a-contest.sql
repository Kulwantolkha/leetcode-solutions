# Write your MySQL query statement below
select r.contest_id, ROUND((((COUNT(DISTINCT u.user_id)) / (SELECT COUNT(DISTINCT user_id) FROM users)) * 100),2) as percentage
from Users u
RIGHT JOIN Register r
ON u.user_id = r.user_id
GROUP BY r.contest_id
ORDER BY percentage DESC, contest_id;