/* f_0x1001b0b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1001b0b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    if (rd32(self + 4u) == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
    }
    else
    {
        esi = rd32(self + 4u);
        wr32(sp0 - 0xcu, in_ebx);
        wr32(sp0 - 0x10u, in_edi);
        edx = in_edx;
L_1001b0c1: ;
        wr32(sp0 - 0x14u, sp0 + 4u);
        g->eax = rd32(esi);
        g->edx = edx;
        t1 = rd32(esi);
        t2 = rd32(esi + 4u);
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, rd32(t1 + 0x24u), esi, 1, sp0 + 4u);
        t4 = g->edx;
        if (rd32(t3) != arg1)
        {
            edx = t4;
            edi = t2;
        }
        else
        {
            eax = t3;
            edx = t4;
            edi = t2;
            wr32(sp0 - 0x14u, esi);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1001b0f0u), self, 1, esi);
            t5 = g->edx;
            edx = t5;
        }
        if (edi != 0u)
        {
            esi = edi;
            goto L_1001b0c1;
        }
        ebx = rd32(sp0 - 0xcu);
        edi = rd32(sp0 - 0x10u);
    }
    g->ebx = ebx;
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001b0b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001b0b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
