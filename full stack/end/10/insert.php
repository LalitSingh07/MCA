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
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();

header("Location: index.php"); // Redirect to the list after adding a new record
exit();
?>
