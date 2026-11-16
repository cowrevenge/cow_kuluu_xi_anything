/* f_0x1000bf30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1000bf30(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t10;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 128u);

    wr32(sp0 - 0x6cu, in_ebx);
    wr32(sp0 - 0x70u, in_ebp);
    if (rd32(arg2) == 1u)
    {
        eax = rd32(arg2) - 1u;
        goto L_1000bf8f;
    }
    eax = rd32(arg2) - 1u;
    if (eax == 2u)
    {
        eax = eax - 2u;
        goto L_1000bf52;
    }
    return 0x8876086cu;
L_1000bf52: ;
    d1 = (double)rdf32(arg2 + 0x40u);
    if (d1 != (double)rdf32(COW_IMG(0x103295d8u))) goto L_1000bfc9;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d2 = (double)rdf32(arg2 + 0x44u);
    if (d2 != (double)rdf32(COW_IMG(0x103295d8u))) goto L_1000bfc9;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d3 = (double)rdf32(arg2 + 0x48u);
    if (d3 != (double)rdf32(COW_IMG(0x103295d8u))) goto L_1000bfc9;
    return 0x8876086cu;
L_1000bf8f: ;
    d4 = (double)rdf32(arg2 + 0x4cu);
    if (!(d4 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1000bfac;
    }
    return 0x8876086cu;
L_1000bfac: ;
    d5 = (double)rdf32(arg2 + 0x5cu);
    if (!(d5 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_1000bfc9;
    return 0x8876086cu;
L_1000bfc9: ;
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, in_edi);
    esi = arg2;
    edi = sp0 - 0x68u;
    ecx = 0x1au;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x7cu, sp0 - 0x68u);
    g->esp = sp0 - 0x78u;
    t6 = cow_thiscall(g, COW_IMG(0x1000be50u), self, 1, sp0 - 0x68u);
    if ((uint8_t)t6 != 1u) goto L_1000c009;
    wr32(sp0 - 0x74u, sp0 - 0x68u);
    wr32(sp0 - 0x78u, arg1);
    t7 = rd32(self + 0xcu);
    wr32(sp0 - 0x7cu, t7);
    g->eax = arg1;
    g->esp = sp0 - 0x70u;
    t8 = cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0xb0u), rd32(rd32(self + 0xcu)), 3, t7, arg1, sp0 - 0x68u);
    g->ebx = rd32(sp0 - 0x6cu);
    g->ebp = rd32(sp0 - 0x70u);
    return t8;
L_1000c009: ;
    wr32(sp0 - 0x74u, arg2);
    wr32(sp0 - 0x78u, arg1);
    t9 = rd32(self + 0xcu);
    wr32(sp0 - 0x7cu, t9);
    g->eax = t9;
    g->esp = sp0 - 0x70u;
    t10 = cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0xb0u), rd32(rd32(self + 0xcu)), 3, t9, arg1, arg2);
    g->ebx = rd32(sp0 - 0x6cu);
    g->ebp = rd32(sp0 - 0x70u);
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000bf30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000bf30(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
