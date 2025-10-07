# Write your MySQL query statement below
select p.project_id, ROUND(SUM(experience_years)/COUNT(experience_years),2) as average_years
from Project p
left join Employee e
on p.employee_id = e.employee_id
GROUP BY p.project_id;