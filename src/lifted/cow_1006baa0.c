/* f_0x1006baa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1006baa0(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self) == 0u) goto L_1006badd;
    ecx = self;
    edx = in_edx;
    esi = self;
L_1006baa8: ;
    if (rd32(esi + 8u) == 0u)
    {
        eax = rd32(esi + 8u);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0xcu);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 == 0u)
        {
            ecx = t2;
            edx = t3;
            eax = 0u;
        }
        else
        {
            eax = t1;
            edx = t3;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t4 = cow_thiscall(g, COW_IMG(0x1006ba20u), eax, 0);
            t5 = g->ecx;
            t6 = g->edx;
            eax = t4;
            ecx = t5;
            edx = t6;
        }
        wr32(esi + 8u, eax);
    }
    if (rd32(rd32(esi + 8u)) != 0u)
    {
        esi = rd32(esi + 8u);
        goto L_1006baa8;
    }
    esi = rd32(esi + 8u);
    wr32(esi, arg1);
    return;
L_1006badd: ;
    wr32(self, arg1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006baa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1006baa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
