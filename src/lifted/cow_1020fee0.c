/* f_0x1020fee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1020fee0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, 0u, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        edi = t1;
        if (rd32(self + 0x14u) != 0u)
        {
            eax = rd32(self + 0x14u);
        }
        else
        {
            g->edx = edx;
            g->esp = sp0;
            t4 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x1e8u, in_edi, in_esi);
            t5 = g->edx;
            if (t4 == 0u)
            {
                eax = t4;
                edx = t5;
                ecx = 0u;
            }
            else
            {
                eax = t4;
                ecx = t4;
                edx = t5;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t6 = cow_thiscall(g, COW_IMG(0x1020fea0u), ecx, 0);
                t7 = g->ecx;
                t8 = g->edx;
                eax = t6;
                ecx = t7;
                edx = t8;
            }
            wr32(self + 0x14u, ecx);
        }
        t9 = (edx & 0xffff0000u) | rd16(edi);
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x1020fe70u), rd32(self + 0x14u), 2, t9, arg2);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020fee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1020fee0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
