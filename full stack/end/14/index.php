<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Factorial Calculator</title>
</head>
<body>
    <h2>Factorial Calculator</h2>
    <form action="" method="post">
        <label for="number">Enter a number:</label>
        <input type="number" id="number" name="number" required>
        <input type="submit" value="Calculate Factorial">
    </form>

    <?php
    function calculateFactorial($n) {
        if ($n == 0 || $n == 1) {
            return 1;
        } else {
            return $n * calculateFactorial($n - 1);
        }
    }

    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $number = $_POST["number"];

        if (is_numeric($number) && $number >= 0) {
            $factorial = calculateFactorial($number);
            echo "<p>Factorial of $number is: $factorial</p>";
        } else {
            echo "<p>Please enter a non-negative numeric value.</p>";
        }
    }
    ?>
</body>
</html>
