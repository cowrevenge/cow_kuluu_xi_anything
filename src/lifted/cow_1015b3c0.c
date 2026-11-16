/* f_0x1015b3c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1015b3c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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

    if (rd8(self + 0x15a8u) != 0u)
    {
        edx = in_edx;
    }
    else
    {
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x1015d7f0u), self + 0xb0u, g->ecx, in_edx, 1, 1, self + 0xb0u);
        t2 = g->edx;
        t3 = rd32(self + 0x14b0u);
        g->ecx = t3;
        g->edx = t2;
        g->esp = sp0 - 8u;
        t4 = cow_cdecl(g, COW_IMG(0x10159eb0u), 1, t3);
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 == 0u)
        {
            edx = t6;
        }
        else
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t7 = cow_thiscall_cdecl(g, rd32(eax + 0x10u), ecx, 1, self);
            t8 = g->edx;
            cow_fastcall(g, COW_IMG(0x1015b410u), self, t8, 0);
            t9 = g->edx;
            wr8(self + 0x15a8u, 1u);
            edx = t9;
        }
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015b3c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1015b3c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
