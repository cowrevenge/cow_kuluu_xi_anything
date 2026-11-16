/* f_0x101e50a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e50a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 1u)
    {
        if (rd32(self + 0x2cu) != 0u)
        {
            eax = rd32(self + 0x2cu);
            edx = in_edx;
        }
        else
        {
            g->esp = sp0;
            t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x6b4u, in_edi, in_esi);
            t2 = g->edx;
            if (t1 == 0u)
            {
                edx = t2;
                eax = 0u;
            }
            else
            {
                eax = t1;
                edx = t2;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t3 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 1u, 0x13u, self, COW_IMG(0x101e5090u), self + 0x34u, 0x14au, 0xfu, 0x114u);
                t4 = g->edx;
                eax = t3;
                edx = t4;
            }
            wr32(self + 0x2cu, eax);
        }
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), edx, 1, 0);
        t5 = rd32(self + 0x2cu);
        cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t5);
    }
    else
    {
        if (!(arg1 == 1u || (int32_t)(arg1 - 1u) < 0 != ((arg1 ^ 1u) & (arg1 ^ arg1 - 1u)) >> 0x1fu))
        {
            if ((int32_t)arg1 <= 4)
            {
                wr8(self + 0x33u, rd8(arg1 + self + 0x2eu));
            }
        }
    }
    t6 = rd32(self + 8u);
    wr32(self + 0x14u, arg1);
    wr8(t6 + 0x61u, 0u);
    wr8(rd32(self + 8u) + 0x62u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e50a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e50a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
