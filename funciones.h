#ifndef FUNCIONES_H
#define FUNCIONES_H

#define IIR 4

typedef struct coef_iir_2_ord {// este va a ser el nombre de la estructura
  float num[3]; // ponga aquí su numerador
  float den[3]; // ponga aquí su denominador
  float w[3];
} coef_iir_2_ord;// este va a ser el nombre del typedef

void inicializar_iir_2_ord(float*num, float*den, float*w, coef_iir_2_ord* ir);

float filtrarIIR(float in,coef_iir_2_ord* ir);
#endif