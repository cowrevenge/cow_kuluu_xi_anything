/* f_0x10133e60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10133e60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_18;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
    }
    else
    {
        if (rd32(COW_IMG(0x104dfd98u)) == 0u)
        {
            eax = rd32(COW_IMG(0x104dfd98u));
            edx = in_edx;
        }
        else
        {
            edi = self + 0x78u;
            eax = 0u;
            ecx = 8u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            if (rd32(self + 8u) == 0u)
            {
                eax = rd32(self + 8u);
                edx = in_edx;
            }
            else
            {
                eax = rd32(self + 8u);
                if (rd16(eax + 0x4cu) == rd16(self + 0x14cu))
                {
                    edx = in_edx;
                }
                else
                {
                    edi = (edi & 0xffff0000u) | rd16(eax + 0x4cu);
                    if ((uint16_t)edi != 0x11u)
                    {
                        loc_18 = 0xbu;
                    }
                    else
                    {
                        loc_18 = 7u;
                    }
                    g->edx = in_edx;
                    g->esp = sp0 - 0x14u;
                    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, loc_18);
                    t2 = g->edx;
                    g->edx = t2;
                    g->esp = sp0 - 0xcu;
                    t3 = cow_thiscall(g, COW_IMG(0x1011aaf0u), rd32(self + 8u), 3, t1, 0u, 1u);
                    t4 = g->edx;
                    wr16(self + 0x14cu, (uint16_t)edi);
                    eax = t3;
                    edx = t4;
                }
            }
            if (rd8(self + 0x14fu) != 0xffu)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x14fu);
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t7 = cow_call_regs(g, COW_IMG(0x10133d70u), eax, self, g->edx, 0, 1, arg1);
                t8 = g->edx;
                eax = t7;
                edx = t8;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x14fu);
                g->eax = eax;
                g->esp = sp0 - 0xcu;
                t5 = cow_fastcall(g, COW_IMG(0x10133a80u), self, edx, 1, arg1);
                t6 = g->edx;
                eax = t5;
                edx = t6;
            }
            if ((uint8_t)arg1 != 0u)
            {
                g->eax = rd32(self);
                g->edx = edx;
                t9 = rd32(self);
                g->esp = sp0 - 4u;
                t10 = cow_thiscall(g, rd32(t9 + 0x4cu), self, 1, 0u);
                t11 = g->edx;
                eax = t10;
                edx = t11;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10133e60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10133e60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
