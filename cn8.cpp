int* printDivisors(int n, int &size){
int count = 0; // Count the number of divisors
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    // Update size variable
    size = count;

    // Create array to store divisors
    int* divisors = new int[count];
    
    // Populate the array with divisors
    int index = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors[index++] = i;
        }
    }

    return divisors;

}
