/* f_0x10245d50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10245d50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    if (rd32(self + 0xcu) == 0u)
    {
        eax = rd32(self + 0xcu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0xcu);
        if (rd32(eax) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            g->eax = eax;
            g->esp = sp0 - 4u;
            t1 = cow_call_regs(g, COW_IMG(0x10245db0u), g->eax, self, in_edx, 1, 1, eax);
            t2 = g->edx;
            eax = t1;
            edx = t2;
        }
    }
    if (rd32(COW_IMG(0x106690b0u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x106690b0u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x106690b0u));
        g->eax = eax;
        g->esp = sp0 - 8u;
        t3 = cow_fastcall(g, COW_IMG(0x1024be00u), ecx, edx, 0);
        t4 = g->ecx;
        t5 = g->edx;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t4, t5, 1, 1, ecx);
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
    }
    if (rd32(COW_IMG(0x106690f4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106690f4u));
    }
    else
    {
        eax = rd32(COW_IMG(0x106690f4u));
        g->eax = eax;
        t8 = rd32(eax);
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, rd32(t8 + 8u), t8, 1, eax);
        t10 = g->ecx;
        wr32(COW_IMG(0x106690f4u), 0u);
        eax = t9;
        ecx = t10;
    }
    t11 = rd32(self + 0xcu);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, t11, 1, 1, t11);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10245d50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10245d50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
