/* f_0x100472f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100472f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 88u);

    if ((uint16_t)arg1 != 0xffffu)
    {
        eax = arg1;
    }
    else
    {
        eax = (arg1 & 0xffff0000u) | rd16(self + 0x16cu);
    }
    if ((uint8_t)eax == 0x62u)
    {
        eax = (uint8_t)eax;
        goto L_10047321;
    }
    eax = (uint8_t)eax;
    if ((uint16_t)eax == 0x42u) goto L_10047321;
    if ((uint16_t)eax == 0x43u) goto L_10047321;
    if ((uint16_t)eax != 0x41u)
    {
        edx = in_edx;
        goto L_10047328;
    }
L_10047321: ;
    wr32(sp0 - 0x44u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x10046550u), self, 1, 0u);
    t1 = g->edx;
    edx = t1;
L_10047328: ;
    t2 = rd32(COW_IMG(0x1047bfa8u)) + 0xb50u;
    wr32(sp0 - 0x44u, t2);
    g->eax = t2;
    g->edx = edx;
    t3 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x40u;
    t4 = cow_thiscall(g, COW_IMG(0x1006a520u), t3, 1, t2);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd8(COW_IMG(0x1047bbc4u)) & 1u)
    {
        eax = (t4 & 0xffffff00u) | 1u;
        edx = t6;
    }
    else
    {
        eax = (t4 & 0xffffff00u) | 1u;
        ecx = (t5 & 0xffffff00u) | rd8(COW_IMG(0x1047bbc4u));
        edx = t6;
        wr8(COW_IMG(0x1047bbc4u), (uint8_t)(ecx | eax));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
        g->esp = sp0 - 0x40u;
        t7 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bc1cu), 0);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x44u, COW_IMG(0x100473e0u));
        g->edx = t9;
        t10 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x100473e0u));
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    wr32(sp0 - 0x44u, COW_IMG(0x10353668u));
    g->esp = sp0 - 0x40u;
    cow_fastcall(g, COW_IMG(0x1006af00u), COW_IMG(0x1047bc1cu), edx, 1, COW_IMG(0x10353668u));
    t12 = g->ecx;
    if (rd8(rd32(COW_IMG(0x10631f24u)) + 0x39598u) == 0u)
    {
        ecx = (t12 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10631f24u)) + 0x39598u);
        goto L_100473bc;
    }
    eax = rd32(COW_IMG(0x10631f24u));
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    esi = eax + 0x39550u;
    edi = sp0 - 0x40u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x4cu, sp0 - 0x40u);
    wr32(sp0 - 0x50u, 3u);
    t13 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x54u, t13);
    g->esp = sp0 - 0x48u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)) + 0x94u), sp0 - 0x40u, 3, t13, 3u, sp0 - 0x40u);
    return;
L_100473bc: ;
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0x2fu);
    t14 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x4cu, t14);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(t14) + 0xc8u), ecx, 3, t14, 0x2fu, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100472f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100472f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
