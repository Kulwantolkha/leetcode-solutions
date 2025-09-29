# Write your MySQL query statement below
select w1.id        -- if both the columns of tables are same then we can use this to choose one
from Weather w1
inner join Weather w2
where DATEDIFF(w1.recordDate, w2.recordDate) = 1     
and w1.temperature > w2.temperature;