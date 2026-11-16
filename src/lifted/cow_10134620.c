/* f_0x10134620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10134620(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    t1 = rd32(sp0 + 4u);
    t2 = rd32(sp0 + 8u);
    t3 = rd8(self + 0x14fu);
    wr32(sp0 + 4u, t1);
    wr32(sp0 + 8u, t2);
    if ((uint8_t)t3 != 0xffu)
    {
        eax = t2;
        edx = t1;
        goto L_1013463f;
    }
    edx = t1;
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        goto L_101345fd;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t4 = rd32(COW_IMG(0x10134604u) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x10134579u: goto L_10134579;
    case 0x1013459du: goto L_1013459d;
    case 0x101345a8u: goto L_101345a8;
    default: rt_fatal(g, COW_IMG(0x10134572u), "switch");
    }
    return 0;
L_10134579: ;
    if (rd16(sp0 + 8u) != 0x11u) goto L_101345fd;
    g->eax = rd32(COW_IMG(0x10663488u));
    t10 = rd32(COW_IMG(0x10663488u));
    g->esp = sp0 - 4u;
    t11 = cow_fastcall(g, COW_IMG(0x102107d0u), rd32(COW_IMG(0x10664508u)), edx, 1, t10);
    t12 = g->edx;
    wr8(COW_IMG(0x105781c1u), 0u);
    g->edx = t12;
    return t11;
L_1013459d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x10134760u), self, 0);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_101345a8: ;
    if (rd16(self + 0x148u) != 0x11u)
    {
        edi = rd32(sp0 + 8u);
        goto L_101345db;
    }
    edi = rd32(sp0 + 8u);
    t5 = edi + ((self & 0xffff0000u) | (uint16_t)(rd16(self + 0x14au) << 2u));
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, t5, 0u);
    t7 = g->edx;
    wr16(self + 0x148u, (uint16_t)edi);
    g->edx = t7;
    return t6;
L_101345db: ;
    if ((uint16_t)edi != 0x11u)
    {
        wr16(self + 0x14au, (uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)edi + ((uint32_t)((int32_t)((uint32_t)(int16_t)edi - 1u) >> 0x1fu) & 3u) - 1u) >> 2u));
        eax = (uint32_t)((int32_t)((uint32_t)(int16_t)edi + ((uint32_t)((int32_t)((uint32_t)(int16_t)edi - 1u) >> 0x1fu) & 3u) - 1u) >> 2u);
        edx = (uint32_t)((int32_t)((uint32_t)(int16_t)edi - 1u) >> 0x1fu) & 3u;
    }
    wr16(self + 0x148u, (uint16_t)edi);
L_101345fd: ;
    g->edx = edx;
    return eax;
L_1013463f: ;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10134250u), eax, self, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10134620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10134620(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
