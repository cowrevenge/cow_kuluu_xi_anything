/* f_0x1011bae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1011bae0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_esi);
    if (rd32(self + 0x74u) != 0u)
    {
        eax = rd32(self + 0x74u);
        edx = in_edx;
        goto L_1011bb19;
    }
    eax = rd32(self + 0x74u);
    wr32(sp0 - 0x18u, COW_IMG(0x1036c224u));
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x10u, in_edx, 1, COW_IMG(0x1036c224u));
    t1 = g->edx;
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x1003ac80u), rd32(COW_IMG(0x1047b970u)), 1, sp0 - 0x10u);
    t3 = g->edx;
    wr32(self + 0x74u, t2);
    if (t2 != 0u)
    {
        eax = t2;
        edx = t3;
        goto L_1011bb19;
    }
    eax = t2;
    edx = t3;
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1011bb19: ;
    if (rd8(self + 0x80u) == 1u)
    {
        if (rd32(self + 0x78u) != 0u)
        {
            eax = rd32(self + 0x78u);
        }
        else
        {
            eax = rd32(self + 0x78u);
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t4 = cow_fastcall(g, COW_IMG(0x1011c720u), self, edx, 0);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
    }
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, COW_IMG(0x1011c850u), self, 0);
    if ((uint8_t)t6 == 0u) goto L_1011bb6b;
    if (rd32(rd32(rd32(self + 0x78u) + 8u) + 0x40u) == 0u)
    {
        eax = rd32(rd32(self + 0x78u) + 8u);
        eax = rd32(eax + 0x44u);
    }
    else
    {
        ecx = rd32(rd32(rd32(self + 0x78u) + 8u) + 0x40u);
        eax = ecx;
    }
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, 0u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x20u, t7);
    g->eax = eax;
    g->edx = t7;
    g->esp = sp0 - 0x14u;
    t8 = cow_thiscall(g, rd32(rd32(t7) + 0xf4u), rd32(t7), 3, t7, 0u, eax);
    t9 = g->edx;
    g->esi = rd32(sp0 - 0x14u);
    g->edx = t9;
    return (t8 & 0xffffff00u) | 1u;
L_1011bb6b: ;
    if (rd32(rd32(self + 0x74u) + 0x40u) != 0u)
    {
        eax = rd32(rd32(self + 0x74u) + 0x40u);
    }
    else
    {
        esi = rd32(self + 0x74u);
        eax = rd32(esi + 0x44u);
    }
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, 0u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x20u, t10);
    g->eax = eax;
    g->edx = rd32(t10);
    t11 = rd32(t10);
    g->esp = sp0 - 0x14u;
    t12 = cow_thiscall(g, rd32(t11 + 0xf4u), t10, 3, t10, 0u, eax);
    t13 = g->edx;
    g->esi = rd32(sp0 - 0x14u);
    g->edx = t13;
    return (t12 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011bae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011bae0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
