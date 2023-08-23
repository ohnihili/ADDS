//O(n) for a for loop

int counter = 0;

for (int i = 0; i < n; i++)
{
    /* code */
}

// Has complexity O(n*[complexity of statements in the loop])

for (int i = 0; i < 100; i++)
{
    /* code */
}

// Has O(100*complexity)

for (int i = 0; i < n; i++)
{
    for (int i = 0; i < m; i++)
    {
        /* code */
    }
    /* code */
}

// Has O(n*m)

// O(1) is a constant complexity: counter++; has O(1)
 
