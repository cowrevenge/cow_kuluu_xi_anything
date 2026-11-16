/* f_0x10118cb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=2 */
uint32_t cow_fn_10118cb0(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 8u, self);
    d1 = (double)rdf32(rd32(COW_IMG(0x104e1d4cu)) + 0x48u);
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_10118d98;
    }
    eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    ecx = rd32(COW_IMG(0x104e1d4cu));
    if (rd8(ecx + 0x4eu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + 0x4eu);
        goto L_10118d98;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t3 = g->edx;
    wr32(sp0 - 4u, t2);
    if (t2 == 0u)
    {
        eax = t2;
        goto L_10118d98;
    }
    edx = t3;
    loc_4 = t2;
    esi = self;
L_10118cfc: ;
    wr32(sp0 - 0x1cu, sp0 - 4u);
    g->esp = sp0 - 0x18u;
    t4 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t5 = g->edx;
    if (rd16(t4) != 1u)
    {
        edx = t5;
        goto L_10118d8c;
    }
    eax = t4;
    t6 = rd32(eax + 0xcu);
    wr8(eax + 0x49u, 0u);
    if ((int32_t)((uint32_t)(int16_t)rd16(eax + 0x2au) + (uint32_t)(int16_t)rd16(rd32(t6) + 0xeu)) > (int32_t)rd32(arg1))
    {
        edx = (uint32_t)(int16_t)rd16(rd32(t6) + 0xeu);
        goto L_10118d88;
    }
    ecx = rd32(t6);
    edx = (uint32_t)(int16_t)rd16(rd32(t6) + 0xeu);
    esi = (uint32_t)(int16_t)rd16(eax + 0x2au);
    edi = rd32(arg1);
    if ((int32_t)(edx + esi + (uint32_t)(int16_t)rd16(eax + 0x2eu)) < (int32_t)edi) goto L_10118d88;
    if ((int32_t)((uint32_t)(int16_t)rd16(eax + 0x2cu) + (uint32_t)(int16_t)rd16(ecx + 0x10u)) > (int32_t)rd32(arg1 + 4u))
    {
        edx = (uint32_t)(int16_t)rd16(eax + 0x2cu);
        goto L_10118d88;
    }
    ecx = (uint32_t)(int16_t)rd16(ecx + 0x10u);
    edx = (uint32_t)(int16_t)rd16(eax + 0x2cu);
    esi = rd32(arg1 + 4u);
    if ((int32_t)(ecx + edx + (uint32_t)(int16_t)rd16(eax + 0x30u)) < (int32_t)esi) goto L_10118d88;
    if (rd32(eax + 0x10u) == 0x10u) goto L_10118d88;
    if (rd8(rd32(sp0 - 8u) + 0x77u) == 0u)
    {
        esi = rd32(sp0 - 8u);
        goto L_10118d8c;
    }
    if (arg2 != 0u)
    {
        wr8(arg2, rd32(eax + 0x10u) != 5u);
    }
    t7 = rd32(sp0 - 0x14u);
    t8 = rd32(sp0 - 0x18u);
    wr8(eax + 0x49u, 1u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = t7;
    g->edi = t8;
    g->ebp = rd32(sp0 - 0x10u);
    return (eax & 0xffff0000u) | rd16(eax + 0x3au);
L_10118d88: ;
    esi = rd32(sp0 - 8u);
L_10118d8c: ;
    if (rd32(sp0 - 4u) != 0u) goto L_10118cfc;
    eax = rd32(sp0 - 4u);
L_10118d98: ;
    return (eax & 0xffff0000u) | (uint16_t)(eax | 0xffffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118cb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10118cb0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
