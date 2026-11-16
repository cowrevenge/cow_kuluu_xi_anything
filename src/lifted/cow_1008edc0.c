/* f_0x1008edc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1008edc0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int8_t)rd8(self + 0x120u) >= 0)
    {
        g->esp = sp0;
        t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x268u, in_edi, in_esi);
        t2 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            edx = t2;
            esi = 0u;
        }
        else
        {
            eax = t1;
            g->esp = sp0 - 8u;
            t3 = cow_fastcall(g, COW_IMG(0x100bd1a0u), eax, arg2, 3, arg1, arg2, arg3);
            t4 = g->edx;
            eax = t3;
            edx = t4;
            esi = t3;
        }
        t5 = rd8(self + 0x120u);
        wr32(self + 0xd4u, esi);
        if ((int8_t)t5 >= 0)
        {
            eax = (eax & 0xffffff00u) | t5;
            if (esi != 0u)
            {
                g->eax = eax;
                g->esp = sp0 - 8u;
                t6 = cow_fastcall(g, COW_IMG(0x100bd5f0u), esi, edx, 0);
                t7 = g->ecx;
                t8 = g->edx;
                cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t7, t8, 1, 1, esi);
                wr32(self + 0xd4u, 0u);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008edc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1008edc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
