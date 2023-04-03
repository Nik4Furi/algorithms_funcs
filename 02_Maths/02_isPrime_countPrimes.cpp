/*
    Time Complexity: O(n-2) or O(n)
    Space Complexity: O(1)

*/

bool isPrime(int num){
    for (int i = 2; i < num-1; i++){
        if (num%i == 0)
            return false;        
    }
    return true;    
}

/*
    Simple Sieve, findng the total primes form 1 to N

    Time Complexity: O(n * log(log n))
    Space Complexity: O(n)
*/

void SieveOfErastothoras(int num){
    vector<bool> prime(num+1,true);
    int n = prime.size();
    prime[0] = prime[1] = false;

    for(int i=2;i<n;i++){
        if(prime[i]){
            for(int j=2*i;j<n;j+=i){
                prime[j] = 0;
            }
        }


    //Print the array
    for(int i=0;i<prime.size();i++){
        if(prime[i])
          cout << i << " ";
    }
    cout << endl;
}

/*
    Segmented Sieve is also finding the total primes form 1 to N,but it is dividing the segmentes and initialze the limit

    time Complexity: O(sqrt(n))
    space Complexity: O(1)
*/

// This functions finds all primes smaller than 'limit'--SimpleSieve
void simpleSieve(int limit, vector<int> &prime){
	vector<bool> mark(limit + 1, true);

    //A. Finding the primes upto limit
	for (int p=2; p*p<limit; p++){
		if (mark[p]){
			for (int i=p*p; i<limit; i+=p)
				mark[i] = false;
		}
	}

	//B. Print all prime numbers and store them in prime array, use in Segmented Sieve
	for (int p=2; p<limit; p++){
		if (mark[p] == true){
			prime.push_back(p);
			cout << p << " ";
		}
	}
}

// Prints all prime numbers smaller than 'n'
void segmentedSieve(int n){

	//A. Compute all primes smaller than or equal
	int limit = floor(sqrt(n))+1;
	vector<int> prime;
	prime.reserve(limit);
	simpleSieve(limit, prime);

	//B. We have chosen segment size as sqrt(n).
	int low = limit;
	int high = 2*limit;

	//C. While all segments of range [0..n-1] are not processed,
	while (low < n){

		if (high >= n)
		    high = n;
		
		// To mark primes in current range. A value in mark[i]
		// will finally be false if 'i-low' is Not a prime,
		// else true.
		bool mark[limit+1];
		memset(mark, true, sizeof(mark));

		//E. Use the found primes by simpleSieve() to find
		for (int i = 0; i < prime.size(); i++)
		{
			// Find the minimum number in [low..high] that is
			// a multiple of prime[i] (divisible by prime[i])
			// For example, if low is 31 and prime[i] is 3,
			// we start with 33.
			int loLim = floor(low/prime[i]) * prime[i];
			if (loLim < low)
				loLim += prime[i];

			/* Mark multiples of prime[i] in [low..high]:
				We are marking j - low for j, i.e. each number
				in range [low, high] is mapped to [0, high-low]
				so if range is [50, 100] marking 50 corresponds
				to marking 0, marking 51 corresponds to 1 and
				so on. In this way we need to allocate space only
				for range */
			for (int j=loLim; j<high; j+=prime[i])
				mark[j-low] = false;
		}

		// Numbers which are not marked as false are prime
		for (int i = low; i<high; i++)
			if (mark[i - low] == true)
				cout << i << " ";

		// Update low and high for next segment
		low = low + limit;
		high = high + limit;
	}
}