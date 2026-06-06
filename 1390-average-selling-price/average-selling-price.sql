# Write your MySQL query statement below
Select p.product_id,
    ROUND(
        COALESCE(SUM(u.units * p.price) / SUM(u.units), 0),
        2
    ) AS average_price
From Prices p
Left Join UnitsSold u
on  p.product_id = u.product_id
AND u.purchase_date BETWEEN p.start_date AND p.end_date
GROUP BY p.product_id;
