<?php

  
    
    if ($_SERVER["REQUEST_METHOD"] == "POST" || $_SERVER["REQUEST_METHOD"] == "GET") {
        $name = $_REQUEST["name"];
        $email = $_REQUEST["email"];

        echo "<h1>Form Data Submitted:</h1>";
        echo "<h2>Reading Data through REQUEST Variable</h2>";
        echo "<p>Name: $name</p>";
        echo "<p>Email: $email</p>";
        echo "<br>";
    }
    if ($_SERVER["REQUEST_METHOD"] == "POST" ){
        $name1 = $_POST["name"];
        $email1 = $_POST["email"];
        echo "<h2>Reading Data through POST Variable</h2>";
        echo "<p>Name: $name</p>";
        echo "<p>Email: $email</p>";

    }
    if ($_SERVER["REQUEST_METHOD"] == "GET" ){
        $name1 = $_GET["name"];
        $email1 = $_GET["email"];
        echo "<h2> Reading Data through GET Variable</h2>";
        echo "<p>Name: $name</p>";
        echo "<p>Email: $email</p>";

    }
    ?>