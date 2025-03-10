-- 코드를 작성해주세요
SELECT 
    A.ITEM_ID, 
    A.ITEM_NAME, 
    A.RARITY 
FROM 
    ITEM_INFO A
WHERE 
    A.ITEM_ID NOT IN (
        SELECT 
            B.PARENT_ITEM_ID 
        FROM 
            ITEM_TREE B
        WHERE 
            B.PARENT_ITEM_ID IS NOT NULL
    )
ORDER BY 
    A.ITEM_ID DESC;
