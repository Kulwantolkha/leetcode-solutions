# Write your MySQL query statement below
-- select *, if(x+y>z and y+z>x and z+x>y, "Yes", "No") as Triangle from Triangle;
select *, CASE WHEN (x+y) > z and (y+z) > x and (z+x) > y then 'Yes' else 'No' end as Triangle from Triangle;