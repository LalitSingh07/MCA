<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CRUD Application - Edit User</title>
</head>
<body>
    <h2>Edit User</h2>
    
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

    // Retrieve the record from the database based on the email
    $selectQuery = "SELECT * FROM users WHERE email = '$email'";
    $result = $conn->query($selectQuery);

    if ($result->num_rows > 0) {
       
        $row = $result->fetch_assoc();
    ?>
    
    <form action="update.php" method="post">
        <input type="hidden" name="email" value="<?php echo $row['email']; ?>">

        <label for="name">Name:</label>
        <input type="text" id="name" name="name" value="<?php echo $row['name']; ?>" required>
        <br>

        <label for="age">Age:</label>
        <input type="number" id="age" name="age" value="<?php echo $row['age']; ?>" required>
        <br>

        <label for="pass">Password:</label>
        <input type="password" id="pass" name="pass" value="<?php echo $row['pass']; ?>" required>
        <br>

        <input type="submit" value="Update User">
    </form>

    <?php
    } else {
        echo "No record found";
    }

    $conn->close();
    ?>

    <p><a href="index.php">Back to List</a></p>
</body>
</html>
