<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Form Demo</title>
</head>
<body>
    <h2>PHP Form Demo</h2>
    <form action="process.php" method="post">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name">
        <br>
        <br>

        <label for="email">Email:</label>
        <input type="email" id="email" name="email">
        <br>
        <br>

        <input type="submit" value="Submit with POST">
    </form>
    <br><br>
    <form action="process.php" method="get">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name">
        <br>
        <br>

        <label for="email">Email:</label>
        <input type="email" id="email" name="email">
        <br>
        <br>

        <input type="submit" value="Submit with GET">
    </form>

   
</body>
</html>
