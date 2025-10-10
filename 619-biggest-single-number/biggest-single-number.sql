# Write your MySQL query statement below
SELECT IFNULL((SELECT num
from MyNumbers
GROUP BY num
HAVING COUNT(num) = 1
ORDER BY num DESC
LIMIT 1), NULL) as num;
