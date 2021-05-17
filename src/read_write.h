#ifndef READ_WRITE_H_INCLUDED
#define READ_WRITE_H_INCLUDED
#include <Arduino.h>
/* Module permettant la lecture et l'écriture sur le port série en utilisant les pointeurs et tableau de pointeurs
 *  les fonctions read_... permettent de lire le port série et d'affecter au pointeur passé les octets lu.
 *  les fonctions write_... Permettent d'écrire les octets ( de poids faible à poids fort) par la liaison série
 *  quelques exemples:
 *  read_float(&var) lit sur le port serie un flottant et stock sa valeur dans var
 *  write_float(var) ecrit sur le port serie les 4 octets de var
 */
void write_uint8_t(uint8_t var);
void write_int8_t(int8_t var);
void write_float(float var);
void write_uint16_t(uint16_t var);
void write_int16_t(int16_t var);
void write_uint32_t(uint32_t var);
void write_int32_t(int32_t var);

void read_uint8_t(uint8_t *var);
void read_int8_t(int8_t *var);
void read_float(float *var);
void read_uint16_t(uint16_t *var);
void read_int16_t(int16_t *var);
void read_uint32_t(uint32_t *var);
void read_int32_t(int32_t *var);


#endif // WRITE_FUNC_H_INCLUDED
