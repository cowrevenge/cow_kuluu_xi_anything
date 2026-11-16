/* f_0x1022b290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1022b290(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    ecx = self;
    edx = in_edx;
    esi = COW_IMG(0x106671e0u);
L_1022b296: ;
    if ((int16_t)rd16(esi) > 0)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t1 = cow_stdcall(g, COW_IMG(0x10014d60u), 0);
        t2 = g->ecx;
        t3 = g->edx;
        wr16(esi, (uint16_t)(rd16(esi) - (uint16_t)t1));
        if ((int16_t)rd16(esi) >= 0)
        {
            ecx = t2;
            edx = t3;
        }
        else
        {
            ecx = t2;
            edx = t3;
            wr16(esi, 0u);
        }
    }
    if ((int32_t)(esi + 2u) < (int32_t)COW_IMG(0x106679e2u))
    {
        esi = esi + 2u;
        goto L_1022b296;
    }
    g->esp = sp0 - 4u;
    t4 = cow_fastcall(g, COW_IMG(0x100fcd70u), ecx, edx, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u) goto L_1022b2df;
    eax = t4;
    ecx = t5;
    edx = t6;
    esi = t4;
    if (rd32(COW_IMG(0x10667a88u)) == esi) goto L_1022b2e9;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1022b3b0u), 1, 0x3cu);
    wr32(COW_IMG(0x10667a88u), esi);
    return;
L_1022b2df: ;
    wr32(COW_IMG(0x10667a88u), 0u);
L_1022b2e9: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022b290(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
