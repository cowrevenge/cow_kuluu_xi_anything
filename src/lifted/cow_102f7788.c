/* f_0x102f7788 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102f7788(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg2) < 0x29u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg2);
        goto L_102f77d9;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg2);
    if ((uint8_t)eax > 0x7au) goto L_102f77d9;
    if ((uint8_t)eax <= 0x5au) goto L_102f77a0;
    if ((uint8_t)eax < 0x61u) goto L_102f77d9;
L_102f77a0: ;
    if (rd8(arg2 + 1u) < 0x29u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + 1u);
        goto L_102f77d9;
    }
    eax = (eax & 0xffffff00u) | rd8(arg2 + 1u);
    if ((uint8_t)eax > 0x7au) goto L_102f77d9;
    if ((uint8_t)eax <= 0x5au) goto L_102f77b3;
    if ((uint8_t)eax < 0x61u) goto L_102f77d9;
L_102f77b3: ;
    if (rd8(arg2 + 2u) < 0x29u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + 2u);
        goto L_102f77d9;
    }
    eax = (eax & 0xffffff00u) | rd8(arg2 + 2u);
    if ((uint8_t)eax > 0x7au) goto L_102f77d9;
    if ((uint8_t)eax <= 0x5au) goto L_102f77c6;
    if ((uint8_t)eax < 0x61u) goto L_102f77d9;
L_102f77c6: ;
    if (rd8(arg2 + 3u) < 0x29u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + 3u);
        goto L_102f77d9;
    }
    eax = (eax & 0xffffff00u) | rd8(arg2 + 3u);
    if ((uint8_t)eax > 0x7au) goto L_102f77d9;
    if ((uint8_t)eax <= 0x5au)
    {
        edx = (in_edx & 0xffffff00u) | 0x29u;
        goto L_102f77e9;
    }
    if ((uint8_t)eax >= 0x61u)
    {
        edx = (in_edx & 0xffffff00u) | 0x29u;
        goto L_102f77e9;
    }
L_102f77d9: ;
    g->edx = (in_edx & 0xffffff00u) | 0x29u;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x102ef267u), 2, arg1, COW_IMG(0x10348984u));
    t1 = g->edx;
    edx = t1;
L_102f77e9: ;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f7788(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f7788(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
