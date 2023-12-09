<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "mca";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$email = $_POST["email"];
$name = $_POST["name"];
$pass = $_POST["pass"];
$age = $_POST["age"];

$sql = "UPDATE users SET name='$name', age='$age', pass='$pass' WHERE email='$email'";

if ($conn->query($sql) === TRUE) {
    echo "Record updated successfully";
} else {
    echo "Error updating record: " . $conn->error;
}

$conn->close();

header("Location: index.php"); // Redirect to the list after updating the record
exit();
?>
