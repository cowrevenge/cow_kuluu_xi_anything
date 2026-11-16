/* f_0x10135920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10135920(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
            eax = rd32(COW_IMG(0x104dfd98u));
            if ((uint8_t)arg1 == 0u)
            {
                ecx = self;
                edx = in_edx;
                goto L_10135949;
            }
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            t1 = cow_thiscall(g, COW_IMG(0x101360c0u), self, 0);
            t2 = g->ecx;
            t3 = g->edx;
            if ((uint8_t)t1 == 0u)
            {
                eax = t1;
                edx = t3;
                goto L_101359b3;
            }
            eax = t1;
            ecx = t2;
            edx = t3;
L_10135949: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0xacu);
            t5 = g->edx;
            g->edx = t5;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t4, 2u);
            t6 = g->edx;
            wr32(self + 0x22u, 0u);
            wr32(self + 0x26u, 0u);
            wr32(self + 0x2au, 0u);
            wr32(self + 0x2eu, 0u);
            edi = self + 0x34u;
            eax = 0u;
            ecx = 0x10u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            eax = self + 0x78u;
            ecx = 0u;
            edx = t6;
L_10135989: ;
            wr8(ecx + self + 0x22u, rd8(eax + 1u));
            t7 = rd8(eax) >> 2u;
            wr32(eax - 0x44u, t7);
            if ((int32_t)(ecx + 1u) < 16)
            {
                eax = eax + 4u;
                ecx = ecx + 1u;
                edx = t7;
                goto L_10135989;
            }
            eax = eax + 4u;
            edx = t7;
            if ((uint8_t)arg1 != 0u)
            {
                g->eax = rd32(self);
                g->edx = edx;
                t8 = rd32(self);
                g->esp = sp0 - 8u;
                t9 = cow_thiscall(g, rd32(t8 + 0x4cu), self, 1, 0u);
                t10 = g->edx;
                eax = t9;
                edx = t10;
            }
        }
    }
L_101359b3: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10135920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10135920(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
