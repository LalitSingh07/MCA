<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CRUD Application - Add User</title>
</head>
<body>
    <h2>Add New User</h2>
    
    <form action="insert.php" method="post">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name" required>
        <br>

        <label for="email">Email:</label>
        <input type="email" id="email" name="email" required>
        <br>

        <label for="age">Age:</label>
        <input type="number" id="age" name="age" required>
        <br>

        <label for="pass">Password:</label>
        <input type="password" id="pass" name="pass" required>
        <br>

        <input type="submit" value="Add User">
    </form>
    
    <p><a href="index.php">Back to List</a></p>
</body>
</html>
