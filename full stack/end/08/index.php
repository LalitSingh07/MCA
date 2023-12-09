<?php
// Start or resume the session
session_start();

// Check if the 'page_views' session variable is set
if (!isset($_SESSION['page_views'])) {
    // If not set, initialize it to 1
    $_SESSION['page_views'] = 1;
} else {
    // If set, increment the count
    $_SESSION['page_views']++;
}

// Display the page views count
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
