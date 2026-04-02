CREATE TABLE channel_data_subset AS
SELECT *
FROM channel_data
ORDER BY timestamp
LIMIT 5000;