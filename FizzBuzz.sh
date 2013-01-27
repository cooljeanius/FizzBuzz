#!/bin/sh
# done in a shell script instead of a perl script because I don't actually know how to write full perl scripts (yet)
# Requires the CPAN Module "Acme::FizzBuzz" to be installed to work

echo "Testing for perl…" # Progress indicator
PERL_PATH=`which perl`
if [ -z "$PERL_PATH" ]; then
	echo "Error: Perl is required to use this script."
	exit 0
else
	echo "Perl found at $PERL_PATH" # Progress indicator
fi

`echo $PERL_PATH` -MAcme::FizzBuzz -e ''
   
