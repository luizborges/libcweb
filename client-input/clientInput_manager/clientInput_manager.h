/**
 *
 * @descripion: faz um parser dos valores passados ao servidor por meio do HTTP REQUEST METHOD
 * a string, é quebrada em valor e conteúdo, e inserida em um map, para facilitar a busca dos
 * valores pelo usuários.
 * @warning: OS VALORES SÃO APENAS PARA LEITURA, NUNCA MODIFIQUE OS VALORES PASSADOS.
 * PARA TANTO, COPIE O VALOR PARA OUTRA STRING.
 */
#ifndef CLIENTINPUT_MANAGER_H
#define CLIENTINPUT_MANAGER_H

#ifdef __cplusplus
extern "C" {
#endif

////////////////////////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#include <headers/abstractFactoryCommon.h>
#include <headers/fileUtil.h>

#include <headers/get_strMap.h> // trata o METHOD GET
#include <headers/post_strMap.h> // trata o METHOD POST

////////////////////////////////////////////////////////////////////////////////
// Defines
////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////
// Structs
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Enum
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
// Typedefs
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
// Constructs
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Functions
////////////////////////////////////////////////////////////////////////////////
bool CWeb_ClientInput_Init();

char *CWeb_ClientInput(const char *key);
////////////////////////////////////////////////////////////////////////////////
// Interface
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
// Functions - private - to debug
////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
}
#endif
#endif // CLIENTINPUT_MANAGER_H

////////////////////////////////////////////////////////////////////////////////
//
////////////////////////////////////////////////////////////////////////////////





