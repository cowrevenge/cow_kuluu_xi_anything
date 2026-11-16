/* f_0x1025f750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1025f750(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327798u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, self + 0x94u);
    wr32(sp0 - 0x10u, self + 0x94u);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, self + 0x94u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(self + 0x60u) != 0u)
    {
        eax = rd32(self + 0x60u);
        ecx = t2;
        edx = t3;
    }
    else
    {
        edx = t3;
        if (rd32(rd32(self + 0x78u) + 0x18u) == 0u)
        {
            eax = rd32(self + 0x78u);
            ecx = rd32(rd32(self + 0x78u) + 0x18u);
        }
        else
        {
            eax = rd32(self + 0x78u);
            ecx = rd32(rd32(self + 0x78u) + 0x18u);
            if (rd8(eax + 0xa1u) != 0u)
            {
                ecx = (ecx & 0xffffff00u) | rd8(eax + 0xa1u);
            }
            else
            {
                if (rd32(self + 0x70u) != 0u)
                {
                    ecx = rd32(self + 0x70u);
                }
                else
                {
                    ecx = rd32(self + 0x70u);
                    if (rd32(self + 0xb0u) == 1u)
                    {
                        if (eax == 0u)
                        {
                            eax = 0u;
                        }
                        else
                        {
                            eax = eax + 0xcu;
                        }
                        wr32(sp0 - 0x1cu, 0u);
                        wr32(sp0 - 0x20u, eax);
                        wr32(sp0 - 0x24u, 5u);
                        g->edx = edx;
                        g->esp = sp0 - 0x18u;
                        t4 = cow_thiscall(g, COW_IMG(0x10261a00u), self, 3, 5u, eax, 0u);
                        t5 = g->edx;
                        wr32(sp0 - 0x1cu, 0u);
                        t6 = cow_fastcall(g, COW_IMG(0x1025f6d0u), self, t5, 1, 0u);
                        t7 = g->ecx;
                        t8 = g->edx;
                        eax = t6;
                        ecx = t7;
                        edx = t8;
                    }
                }
            }
        }
    }
    wr32(sp0 - 0x1cu, self + 0x94u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t9 = cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, self + 0x94u);
    t10 = g->edx;
    t11 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t11);
    g->edx = t10;
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025f750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025f750(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
