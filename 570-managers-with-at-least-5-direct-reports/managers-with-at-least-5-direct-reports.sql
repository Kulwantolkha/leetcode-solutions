# Write your MySQL query statement below
SELECT e.name
FROM Employee e
WHERE id IN (SELECT managerId FROM Employee e GROUP BY managerId HAVING COUNT(managerId)>=5);