<?php

session_start();


if (!isset($_SESSION['page_views'])) {

    $_SESSION['page_views'] = 1;
} else {
    
    $_SESSION['page_views']++;
}

$page_views = $_SESSION['page_views'];
echo "Page views: " . $page_views;
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Page Views Example</title>
</head>
<body>
    <h1>Welcome to the Page</h1>
    <p>This page has been visited <?php echo $page_views; ?> times.</p>
</body>
</html>
