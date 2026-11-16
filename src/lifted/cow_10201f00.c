/* f_0x10201f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10201f00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    eax = in_eax;
    ecx = self;
    edx = COW_IMG(0x10663ad8u);
    esi = 0u;
    edi = 0u;
L_10201f0b: ;
    if (rd8(edx + 0x7au) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edx + 0x7au);
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x10201eb0u), ecx, 1, edx);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            esi = esi + 1u;
        }
        else
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            edi = edi + 1u;
        }
    }
    if ((int32_t)(edx + 0x7cu) < (int32_t)COW_IMG(0x10664390u))
    {
        edx = edx + 0x7cu;
        goto L_10201f0b;
    }
    if ((uint16_t)esi != 1u) goto L_10201f3e;
    if ((uint16_t)edi == 0u) goto L_10201f3e;
    return (eax & 0xffffff00u) | 1u;
L_10201f3e: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10201f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10201f00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
