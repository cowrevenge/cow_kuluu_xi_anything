/* f_0x10043f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10043f00(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    eax = in_eax;
    edx = in_edx;
    esi = self + 4u;
    edi = 2u;
L_10043f0a: ;
    if (rd32(esi) != 0u)
    {
        g->esi = esi;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x1006b120u), rd32(COW_IMG(0x1047bff8u)), 1, esi);
        t2 = g->edx;
        if ((uint8_t)t1 != 0u)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            edx = t2;
            g->eax = rd32(esi);
            g->edx = edx;
            t3 = rd32(esi);
            g->esp = sp0 - 8u;
            t4 = cow_thiscall(g, rd32(rd32(t3) + 8u), rd32(t3), 1, t3);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
        wr32(esi, 0u);
    }
    if (edi != 1u)
    {
        esi = esi + 0x20u;
        edi = edi - 1u;
        goto L_10043f0a;
    }
    g->esi = in_esi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10043f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10043f00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
