# headfirst-c
Following the Head First C book

## Use fgets to read strings


## stderr & stdout

### Run command 
```
gcc geo2json.c -o geo2json && ./geo2json < input.csv > output.txt 2> error.txt 

+ < input.csv: read stdin from file
+ > output.txt: write data to file
+ 2> error.txt: write error to file
```

### Write error to stderr
```
fprintf(stderr, "Invalid latitude: %f\n", latitude);
```

### Pipeline with "|"
```
(./filtergeo | ./geo2json) < input.csv > output.txt 
```