/* f_0x10114070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10114070(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (self == rd32(COW_IMG(0x104e1b6cu)))
    {
        wr32(COW_IMG(0x104e1b6cu), 0u);
    }
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(COW_IMG(0x10329104u)), self, 1, rd32(self));
    esi = self + 0x110u;
    edi = 0x10u;
L_1011409b: ;
    if (rd32(esi - 0x10u) == 0u)
    {
        esi = esi - 0x10u;
    }
    else
    {
        eax = rd32(esi - 0x10u);
        esi = esi - 0x10u;
        t1 = rd32(eax) - 1u;
        t2 = rd32(eax);
        wr32(eax, t1);
        if (t2 < 2u)
        {
            ecx = t2;
            edx = t1;
            if (rd32(rd32(esi) + 4u) == 0u)
            {
                eax = rd32(rd32(esi) + 4u);
            }
            else
            {
                eax = rd32(rd32(esi) + 4u);
                g->eax = eax;
                g->esp = sp0;
                t3 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, in_edi, in_esi);
                t4 = g->edx;
                eax = t3;
                edx = t4;
            }
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, rd32(esi));
        }
        wr32(esi, 0u);
    }
    if (edi != 1u)
    {
        edi = edi - 1u;
        goto L_1011409b;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10114070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10114070(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
