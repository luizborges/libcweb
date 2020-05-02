/**
 *
 * @descripion: 
 */
#ifndef SESSION_FILEMAP_H
#define SESSION_FILEMAP_H

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
#include <time.h>
#include <errno.h>

#include <headers/abstractFactoryCommon.h>
#include <headers/fileUtil.h>
#include <headers/stackTracer.h>

#include <headers/cookie_strMap.h>


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
/**
 * @DirFileSession: diretório em que será criado o arquivo de Sessão.
 * @lifeSession: tempo que uma sessão dura - tempo em segundos.
 * @del: tempo (em segundos) para se deletar, dentro do diretório, todos os aruqivos de
 * sessão. A primeiro coisa que ele faz, é entrar dentro do diretório, e deletar
 * todos os arquivos de sessão que estão dentro do diretório que foram criados
 * a mais de 'del' segundos, onde del é esta variável.
 * 
 */
extern void*
CWeb_Session_Init(const char *DirFileSession,
				  const time_t lifeSession,
				  const time_t del);

extern bool
CWeb_Session_Load();

extern void*
CWeb_Session_Get(const char *key,
				size_t *size);

extern void
CWeb_Session_Set(const char *key,
				 const void *value,
				 const size_t size);

extern void*
CWeb_Session_Del(const char *key,
				size_t *size);

/**
 * Retorna o valor do cookie sid.
 */
extern char*
CWeb_Session_Save();

extern void
CWeb_Session_End();
////////////////////////////////////////////////////////////////////////////////
// Functions - private - to debug
////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
}
#endif
#endif // SESSION_FILEMAP_H

////////////////////////////////////////////////////////////////////////////////
//
////////////////////////////////////////////////////////////////////////////////





