<?php

function setVisitCookie() {
    $cookie_name = "last_visited";
    $current_date_time = date("Y-m-d H:i:s");
    setcookie($cookie_name, $current_date_time, time() + (86400 * 30), "/"); // Cookie set to expire in 30 days
}


if (!isset($_COOKIE["last_visited"])) {
   
    setVisitCookie();
} else {
    
    $last_visited = $_COOKIE["last_visited"];
    echo "Last visited on: " . $last_visited;
    
  
    setVisitCookie();
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Last Visited Example</title>
</head>
<body>
    <h1>Welcome to the Page</h1>
    <p>This page will display the last visited date and time.</p>
</body>
</html>
