/* f_0x10263900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10263900(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(self + 0x2cu) == 0u) goto L_10263939;
    eax = rd32(self + 0x2cu);
    if (rd32(self + 0x28u) == 0u)
    {
        edx = 0u;
    }
    else
    {
        esi = rd32(self + 0x28u);
        edx = esi + 0xcu;
    }
    wr32(sp0 - 0x2cu, edx);
    wr32(sp0 - 0x30u, eax);
    t1 = rd32(eax);
    esi = arg1;
    edi = sp0 - 0x28u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, rd32(t1 + 0xcu), ecx, 8, eax, edx, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10263939: ;
    if (rd32(self + 0x18u) == 0u)
    {
        edx = in_edx;
        edi = 0x80040216u;
    }
    else
    {
        eax = rd32(self + 0x18u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x18u, COW_IMG(0x1033e828u));
        wr32(sp0 - 0x1cu, eax);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax)), rd32(eax), 3, eax, COW_IMG(0x1033e828u), sp0 - 4u);
        if (self == 0u)
        {
            edx = self;
            edi = 0x80040216u;
        }
        else
        {
            if (rd32(self + 0x28u) == 0u)
            {
                eax = 0u;
            }
            else
            {
                esi = rd32(self + 0x28u);
                eax = esi + 0xcu;
            }
            wr32(sp0 - 0x2cu, eax);
            wr32(sp0 - 0x30u, self);
            t4 = rd32(self);
            esi = arg1;
            edi = sp0 - 0x28u;
            ecx = 6u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            g->eax = eax;
            g->edx = self;
            g->esp = sp0 - 0x28u;
            t5 = cow_thiscall(g, rd32(t4 + 0xcu), ecx, 2, self, eax);
            t6 = g->edx;
            t7 = rd32(sp0 - 0x1cu);
            wr32(sp0 - 0x2cu, t7);
            g->edx = t6;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(rd32(t7) + 8u), rd32(t7), 7, t7, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), COW_IMG(0x1033e828u), sp0 - 4u);
            t8 = g->edx;
            edx = t8;
            edi = t5;
        }
    }
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10263900(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
