<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "mca";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$email = $_GET["email"];

$sql = "DELETE FROM users WHERE email='$email'";

if ($conn->query($sql) === TRUE) {
    echo "Record deleted successfully";
} else {
    echo "Error deleting record: " . $conn->error;
}

$conn->close();

header("Location: index.php"); // Redirect to the list after deleting the record
exit();
?>
