<?php
$object = readline("Choose rock, paper, or scissors: ");

$objects = ["rock", "paper", "scissors"];

$rand = rand(0, 2);

$index = array_search($object, $objects);

while ($index === false) {
	echo "Enter rock, paper or scissors\n";
	$object = readline("Choose rock, paper, or scissors: ");
	$index = array_search($object, $objects);
}

while ($rand === $index) {
	$rand = rand(0, 2);
}

if ($rand == $index + 1) {
	echo "computer chose ", $objects[$rand], ". You lost\n";
}
elseif ($rand + 1 == $index) {
	echo "computer chose ", $objects[$rand], ". You won\n";
}
elseif ($rand > $index) {
	echo "computer chose ", $objects[$rand], ". You won\n";
}
else {
	echo "computer chose ", $objects[$rand], ". You lost\n";
}

