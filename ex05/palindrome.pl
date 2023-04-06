#!/usr/bin/perl

use strict;
use	warnings;

print("Enter a string: ");
my	$str = <>;
chomp($str);

my	$l = length($str);
my	$i = 0;
my	@chars = split("", $str);

while (($i < int($l / 2)) && $i != -1) {
	if ($chars[$i] ne $chars[$l - 1 - $i]) {
		print("$str is not a palindrome\n");
		$i = -1;
	}
	else {
		$i++;
	}
}

if ($i == int($l / 2)) {
	print("$str is a palindrome\n");
}
