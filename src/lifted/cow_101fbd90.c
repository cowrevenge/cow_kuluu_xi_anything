/* f_0x101fbd90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101fbd90(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(COW_IMG(0x10663888u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663888u));
        if (rd32(self + 8u) != 0u)
        {
            if ((int32_t)rd32(self + 0x14u) >= 0)
            {
                eax = rd32(self + 0x14u);
                if ((int32_t)eax < 10)
                {
                    if (rd32(self + 0x38u) != 0u)
                    {
                        edx = eax * 5u;
                        eax = rd32(self + 0x38u);
                    }
                    else
                    {
                        edx = eax * 5u;
                        edi = eax * 0x16u + ecx + 0x6d4u;
                        g->esp = sp0;
                        t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x6b4u, in_edi, in_esi);
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
                            t3 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 5u, 0xfu, self, COW_IMG(0x101fbd80u), edi + 4u, 0x14au, 0xfu, 0x114u);
                            t4 = g->edx;
                            eax = t3;
                            edx = t4;
                        }
                        wr32(self + 0x38u, eax);
                    }
                    g->esp = sp0 - 8u;
                    cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), edx, 1, 0);
                    t5 = g->edx;
                    t6 = rd32(self + 0x38u);
                    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t6);
                    wr8(rd32(self + 8u) + 0x61u, 0u);
                    wr8(rd32(self + 8u) + 0x62u, 0u);
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fbd90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fbd90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
