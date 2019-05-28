<?php
error_reporting(E_ALL);
ini_set('display_errors', 1);

include('funkcje.php');
	$imie = "Anna";
	$nazwisko = 'Kowalska';
	$wiek = 20;
	?>



<h1>
<?php
	echo "Witaj $imie $nazwisko  ";
	echo 'Wiek: '.$wiek.'lat<br><br>';
	zrob_link('http://lo1.sandomierz.pl', 'Strona I LO');
	$link = zrob_link('http://lo1.sandomierz.pl', 'Strona I LO', 0);
	echo '<br>'.$link;
	echo'<br>';
	echo $dane['imie'];
	?>
</h1>