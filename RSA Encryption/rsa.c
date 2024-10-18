/*
    Goal:
        >[] Have user input a string
        >[] Generate a public which is shared and private key which is kept safe by the user
        >[] Output public and private key as well as the encrypted message             

    Note:
        >Left off:
            >Just finished generating prime numbers
            >New task finish defining variables
        >RSA:
            >Consist of: 
                >[p] - generated 
                >[q] - generated
                >[N = pd] - generated
                >[Φ = (p -1)(q - 1)]
                >[e] - generated
                >[d = multiplicative inverse (e, Φ)]
                >[public key - shared] 
                >[private - kept safe] 
                >[E = (m^e) % N] 
                >[D = (E^d) % N]
            >[p] and [q] are two different prime numbers with no correlation

    Task:
        >[/] Determine where a number is prime or not this will be use for [e], [p] and [q]
        >[/] p - generated 
            >[] Issue: sometimes generates two the same p and q
        >[/] q - generated
        >[/] N = pd - generated
        >[/] Φ = (p -1)(q - 1)
        >[/] e - generated
        >[] d = multiplicative inverse gcd(e, Φ)
        >[] E = (m^e) % N -> Make as a separate function
        >[] D = (E^d) % N -> Make as a separate function
        >[] Implement multiplicative inverse to find [d]
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int MultInv(int p, int q);
int PrimeInt(int pnum, int min, int max);

void Debugging(int input) //Testing Environment
{
    /*
        🦗🦗🦗
    */
}

int main()
{
    srand(time(NULL));

    //Input
    int pq[2]; //[p] and [q] respectively

    //Calculation
    for(int i = 0; i < 2; i++) //Inputs two consequtive prime numbers to pq[0] and pq[1]
    {;
        pq[i] = PrimeInt(1, 10, 101); 
    }

    //Output
    for(int i = 0; i < 2; i++) //Inputs two consequtive prime numbers to pq[0] and pq[1]
    {
        printf("%d ", pq[i]); 
    }

    printf("\n");
    printf("%d\n", MultInv(pq[0], pq[1]));

    return 0;
}

int PrimeInt(int pnum, int min, int max) //This function determines if [input] is prime
{
    int counter = 0;

    //Iterates when [input] % [i] = 0, if so, increment counter
    for(int i = 1; i <= pnum; i++)
    {
        if(pnum % (i) == 0)
        {
            counter++;
        }
    }

    //Returns [input] when counter is a value of 2, if not, recusion
    if(counter == 2)
    {
        return pnum;
    }
    else if(counter != 2 || pnum == 1)
    {
        return PrimeInt(min + rand() % (max - min) + 1, min, max);
    }
}

int MultInv(int p, int q)
{
   int N = p * q;
   int Φ = (p - 1) * (q - 1);
   int e = PrimeInt(1, 57, 157);
   int d; //Left off at -> find [d]'s greatest common divisor

   return e;
}