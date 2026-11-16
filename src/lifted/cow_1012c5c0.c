/* f_0x1012c5c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012c5c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101192b0u), t1, 2, 1u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(self + 0x24u) != 0u)
    {
        eax = rd32(self + 0x24u);
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        esi = COW_IMG(0x103333c0u);
        edi = self + 0x24u;
L_1012c5df: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 == 0u)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
        }
        else
        {
            eax = t4;
            t7 = rd32(rd16(esi) * 4u + rd32(eax));
            t8 = rd16(esi);
            t9 = rd32(eax);
            wr32(edi, t7);
            eax = t7;
            ecx = t8;
            edx = t9;
        }
        if ((int32_t)(esi + 2u) < (int32_t)COW_IMG(0x103333c4u))
        {
            esi = esi + 2u;
            edi = edi + 4u;
            goto L_1012c5df;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012c5c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012c5c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
