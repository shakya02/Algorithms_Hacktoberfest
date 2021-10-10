<?php
// PHP Code to compute sum
// of digits in number.

// Function to get
// $sum of digits
function getsum($n)
{
	$sum = 0;
	while ($n != 0)
	{
		$sum = $sum + $n % 10;
		$n = $n/10;
	}
	return $sum;
}

// Driver Code
$n = 687;
$res = getsum($n);
echo("$res");

// This code is contributed by
// Smitha Dinesh Semwal.
?>
