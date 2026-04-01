# Write your MySQL query statement below
with s as ( select d.name as department, e.name as employee,
            salary, dense_rank() over(partition by d.name order by salary desc) as rank1
            from employee e
            join department d
            on e.departmentId=d.id)
select department,employee,salary 
from s
where rank1<=3;
            