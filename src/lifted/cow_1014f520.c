/* f_0x1014f520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1014f520(Guest* g)
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 0x10u) goto L_1014f697;
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x1014f6c8u) + rd8(COW_IMG(0x1014f6e8u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x1014f541u: goto L_1014f541;
    case 0x1014f577u: goto L_1014f577;
    case 0x1014f5a3u: goto L_1014f5a3;
    case 0x1014f5cfu: goto L_1014f5cf;
    case 0x1014f5ddu: goto L_1014f5dd;
    case 0x1014f5f7u: goto L_1014f5f7;
    case 0x1014f680u: goto L_1014f680;
    case 0x1014f697u: goto L_1014f697;
    default: rt_fatal(g, COW_IMG(0x1014f53au), "switch");
    }
    return;
L_1014f541: ;
    if (rd8(self + 0x164u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x164u);
        edx = in_edx;
        goto L_1014f566;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x164u);
    if (rd16(rd32(self + 8u) + 0x5au) != 2u)
    {
        edx = rd32(self + 8u);
    }
    else
    {
        edx = rd32(self + 8u);
        wr16(self + 0x15cu, 5u);
    }
    if ((uint8_t)eax == 0u) goto L_1014f697;
L_1014f566: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 1u, 0u);
L_1014f697: ;
    zf = rd16(self + 0x15cu) == 0u;
L_1014f69f: ;
    if (zf) goto L_1014f6c5;
    if (rd32(rd32(COW_IMG(0x10578198u)) + 8u) == 0u) goto L_1014f6c5;
    eax = rd32(rd32(COW_IMG(0x10578198u)) + 8u);
    edx = rd32(COW_IMG(0x10578198u));
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1015db80u), eax, COW_IMG(0x10621838u), edx);
    return;
L_1014f577: ;
    if (rd8(self + 0x164u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x164u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t10 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 1u, 0u);
        t11 = g->edx;
        cow_call_regs(g, COW_IMG(0x101c6920u), t10, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 4u);
    }
    goto L_1014f697;
L_1014f5a3: ;
    if (rd8(self + 0x164u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x164u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t8 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 1u, 0u);
        t9 = g->edx;
        cow_call_regs(g, COW_IMG(0x101c6920u), t8, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 5u);
    }
    goto L_1014f697;
L_1014f5cf: ;
    if (rd16(rd32(self + 8u) + 0x4cu) != 1u) goto L_1014f697;
    eax = rd32(self + 8u);
L_1014f5dd: ;
    if (rd8(self + 0x164u) == 0u) goto L_1014f697;
    eax = (eax & 0xffffff00u) | rd8(self + 0x164u);
L_1014f5eb: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1014f500u), eax, self, in_edx, 1, 0);
    goto L_1014f697;
L_1014f5f7: ;
    if ((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) == 1u)
    {
        eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
        goto L_1014f654;
    }
    eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1014f61e;
    }
    eax = eax - 1u;
    if (eax != 1u) goto L_1014f697;
    eax = eax - 1u;
    if (rd8(self + 0x164u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x164u);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x1014f500u), eax, self, in_edx, 1, 0);
    }
L_1014f68e: ;
    wr16(self + 0x15cu, 2u);
    goto L_1014f697;
L_1014f61e: ;
    if (rd8(self + 0x164u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x164u);
        edx = in_edx;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x164u);
        g->esp = sp0 - 4u;
        t2 = cow_call_regs(g, COW_IMG(0x1014f500u), eax, self, in_edx, 1, 0);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    t4 = rd32(self + 0x160u);
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, t4, g->edx, 0, 1, 0u);
    t6 = g->ecx;
    eax = t5;
    ecx = t6;
    edx = self + 0x58u;
L_1014f63f: ;
    t7 = rd8(eax);
    wr8(edx, (uint8_t)t7);
    if ((uint8_t)t7 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t7;
        edx = edx + 1u;
        goto L_1014f63f;
    }
    wr16(self + 0x15cu, 1u);
    goto L_1014f697;
L_1014f654: ;
    if (rd8(self + 0x164u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x164u);
        goto L_1014f66d;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x164u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 1u);
    goto L_1014f697;
L_1014f66d: ;
    if (rd16(self + 0x15cu) != 0u)
    {
        zf = rd16(self + 0x15cu) == 0u;
        goto L_1014f69f;
    }
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1014f4d0u), eax, self, in_edx, 1, 0);
    goto L_1014f697;
L_1014f680: ;
    if (rd8(self + 0x164u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x164u);
        goto L_1014f5eb;
    }
    goto L_1014f68e;
L_1014f6c5: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014f520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014f520(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
