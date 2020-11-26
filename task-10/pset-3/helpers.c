// Helper functions for music

#include <cs50.h>
#include <string.h>
#include <math.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int n = fraction[0]- 48;
    int d = fraction[2]- 48;
    return n * (8 / d);
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    int octave = note[strlen(note)-1] - 48; //get octave from back
    //number of semitones
    int n=0;
    switch (note[0])
    {
        case 'B':
            n=n+2;
            break;
         case 'A':
            n=n+0;
            break;
        case 'G':
            n=n-2;
            break;
        case 'F':
            n=n-4;
            break;
        case 'E':
            n=n-5;
            break;
        case 'D':
            n=n-7;
            break;
         case 'C':
            n=n-9;
            break;
    }
    //due to octave
    if (octave > 4)
    {
        n=n+(octave - 4)*12;
    }
    if (octave < 4)
    {
        n=n-(octave - 4)*12;
    }
    // # and b
    if (note[1] == '#')
    {
        n=n+1;
    }
    if (note[1] == 'b')
    {
        n=n-1;
    }
    //calculating freq and returning it
    return round(pow(2.0,n/12.0)*440.0);
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (strcmp(s,"")== 0)
        return true;
    return false;
}
