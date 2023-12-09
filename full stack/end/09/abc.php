<?php

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "mca";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$name = $_POST["name"];
$email = $_POST["email"];
$pass = $_POST["pass"];
$age = $_POST["age"];

$sql = "INSERT INTO users (name, email, age, pass) VALUES ('$name', '$email', '$age', '$pass')";

if ($conn->query($sql) === TRUE) {
    echo "New record created successfully";
    echo "<h2>Records in the Database</h2>";
    echo "<table border='1'>";
    echo "<tr><th>Name</th><th>Email</th><th>Age</th><th>Password</th></tr>";
    $selectQuery = "SELECT * FROM users";
    $result = $conn->query($selectQuery);

    if ($result->num_rows > 0) {
        while ($row = $result->fetch_assoc()) {
            echo "<tr><td>" . $row["name"] . "</td><td>" . $row["email"] . "</td><td>" . $row["age"] . "</td><td>" . $row["pass"] . "</td></tr>";
        }
    } else {
        echo "<tr><td colspan='4'>No records found</td></tr>";
    }

    echo "</table>";
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?>
