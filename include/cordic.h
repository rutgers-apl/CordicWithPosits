#include "softposit_cpp.h"
#include <stdio.h>
#include <stdlib.h>

extern posit32 k_p32[14];
extern posit32 KVals[15];
extern posit32 atan_table_p32[200];
extern posit32 scale_table_p32[200];
extern float atan_table[60];
extern float k[33];

// Helper functions
int GetExponentValueForAngles0ToPiOver2(unsigned int);
int GetExponentValueForPosReals(unsigned int);

// For computing sin and cos
void float_cordic(float, int, float&, float&);
void posit_cordic_default(posit32, int, posit32&, posit32&);
void posit_cordic_quirez(posit32, int, posit32&, posit32&);
void posit_cordic_ff(posit32, int, posit32&, posit32&);
void posit_cordic_quirez_ff(posit32, int, posit32&, posit32&);

// For computing arctan
float float_vector(float, float, int);
posit32 posit_vector_default(posit32, posit32, int);
posit32 posit_vector_quirez(posit32, posit32, int);
posit32 posit_vector_ff(posit32, posit32, int);
posit32 posit_vector_quirez_ff(posit32, posit32, int);
