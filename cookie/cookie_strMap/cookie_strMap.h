/**
 *
 * @descripion: 
 */
#ifndef COOKIE_STRMAP_H
#define COOKIE_STRMAP_H

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

#include <headers/percent.h>

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

////////////////////////////////////////////////////////////////////////////////
// Interface
////////////////////////////////////////////////////////////////////////////////
extern bool CWeb_Cookie_Init();

/**
 * Retorna o valor do cookie.
 * @arg hasKey: se o cookie existe, pode não ter valor associado, apenas precisa existir
 * o valor é true. false caso o cookie não exista.
 * @return o valor do cookie ou retorna NULL se não existe o cookie.
 */
extern char *CWeb_Cookie_Get(const char *key,
							bool *hasKey);


/**
 * Retorna uma string contendo todo o conteúdo do cookie.
 * os valores key e value, não podem ser NULL e também não podem ser uma
 * string vazia.
 * Insert the string: " GMT" ao final do tempo designado.
 * O tempo é recuperado com a função localtime(time(NULL) + expires_sec)
 * Se os argumentos "domain" e "path" são NULLs, eles não são inseridos.
 * se os argumentos "isSecure" e "isHttpOnly" são false, eles não são inseridos.
 * Ao final da string do cookie é incluído o charactere '\n'
 * OBS: se o valor do expires_sec for -1, o tempo será setado para
 * "expires=Thu, 01 Jan 1970 00:00:00 GMT" este valor é usado para expirar o cookie
 */
extern char *CWeb_Cookie_Set(const char *key, const char *value,
								const long expires_sec,
								const char *domain, const char *path,
								const bool isSecure, const bool isHttpOnly);

/**
 * A saída é gravada pela função fprintf(stdout, ... );
 * A gravação é feita por partes, ou seja, não é criada toda a string e então
 * inserida no stdout.
 * os valores key e value, não podem ser NULL e também não podem ser uma
 * string vazia.
 * Insert the string: " GMT" ao final do tempo designado.
 * O tempo é recuperado com a função localtime(time(NULL) + expires_sec)
 * Se os argumentos "domain" e "path" são NULLs, eles não são inseridos.
 * se os argumentos "isSecure" e "isHttpOnly" são false, eles não são inseridos.
 * Ao final da string do cookie é incluído o charactere '\n'
 * OBS: se o valor do expires_sec for -1, o tempo será setado para
 * "expires=Thu, 01 Jan 1970 00:00:00 GMT" este valor é usado para expirar o cookie
 */
extern void CWeb_Cookie_Print(const char *key, const char *value,
								const long expires_sec,
								const char *domain, const char *path,
								const bool isSecure, const bool isHttpOnly);
////////////////////////////////////////////////////////////////////////////////
// Functions - private - to debug
////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
}
#endif
#endif // COOKIE_STRMAP_H

////////////////////////////////////////////////////////////////////////////////
//
////////////////////////////////////////////////////////////////////////////////





