# Write your MySQL query statement below
select *
From Cinema
Where id%2 =1
And description <> 'boring'
Order by rating desc;