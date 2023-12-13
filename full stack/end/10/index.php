<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CRUD Application - List Records</title>
</head>
<body>
    <h2>List of Users</h2>
    
    <?php
    $servername = "localhost";
    $username = "root";
    $password = "";
    $dbname = "mca";

    $conn = new mysqli($servername, $username, $password, $dbname);

    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }

    $selectQuery = "SELECT * FROM users";
    $result = $conn->query($selectQuery);

    if ($result->num_rows > 0) {
        echo "<table border='1'>";
        echo "<tr><th>Name</th><th>Email</th><th>Age</th><th>Password</th><th>Action</th></tr>";

        while ($row = $result->fetch_assoc()) {
            echo "<tr>";
            echo "<td>" . $row["name"] . "</td>";
            echo "<td>" . $row["email"] . "</td>";
            echo "<td>" . $row["age"] . "</td>";
            echo "<td>" . $row["pass"] . "</td>";
            echo "<td><a href='edit.php?email=" . $row["email"] . "'>Edit</a> | <a href='delete.php?email=" . $row["email"] . "'>Delete</a></td>";
            echo "</tr>";
        }

        echo "</table>";
    } else {
        echo "No records found";
    }

    $conn->close();
    ?>
    
    <p><a href="add.php">Add New User</a></p>
</body>
</html>
