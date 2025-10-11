# Write your MySQL query statement below
-- (select employee_id, department_id from Employee
-- group by employee_id
-- having MAX(primary_flag) = 'Y' or COUNT(distinct department_id) = 1)

select employee_id, department_id from Employee
where primary_flag = 'Y' or employee_id in
(select employee_id
FROM Employee
GROUP BY employee_id
having COUNT(department_id) = 1);