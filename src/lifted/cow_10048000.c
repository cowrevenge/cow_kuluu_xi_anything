/* f_0x10048000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10048000(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(self, COW_IMG(0x1032b114u));
    wr32(self + 0x30u, COW_IMG(0x1032b140u));
    edx = in_edx;
L_10048016: ;
    wr32(sp0 - 0x28u, 0xffffffffu);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 5u);
    wr32(sp0 - 0x34u, rd32(COW_IMG(0x1047d128u)));
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10074310u), sp0 - 0x1cu, 4, rd32(COW_IMG(0x1047d128u)), 5u, 0u, 0xffffffffu);
    t1 = g->edx;
    edx = t1;
L_1004802b: ;
    wr32(sp0 - 0x28u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t2 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t4;
        goto L_10048060;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    if (!(rd8(eax + 0x1au) >> 2u & 1u)) goto L_1004802b;
    if (rd32(eax + 0x28u) != rd32(self + 0x14u))
    {
        edx = rd32(eax + 0x28u);
        goto L_1004802b;
    }
    edx = rd32(eax + 0x28u);
    t5 = rd32(eax + 0x14u);
    wr32(sp0 - 0x28u, t5);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, COW_IMG(0x10073b20u), 1, t5);
    t6 = g->edx;
    edx = t6;
    goto L_10048016;
L_10048060: ;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x1003b690u), self + 0x30u, 0);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x28u, t7);
    wr32(sp0 - 0x28u, 0u);
    g->edx = t8;
    t9 = cow_call_regs(g, COW_IMG(0x100538e0u), sp0 - 0x28u, self, g->edx, 0, 1, 0u);
    t10 = g->edx;
    if (rd32(self + 0xa8u) == 0u)
    {
        ecx = rd32(self + 0xa8u);
        edx = t10;
    }
    else
    {
        eax = t9;
        ecx = rd32(self + 0xa8u);
        wr32(sp0 - 0x28u, 1u);
        g->edx = rd32(ecx);
        t11 = rd32(ecx);
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, rd32(t11 + 0x18u), ecx, 1, 1u);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(self + 0xa8u, 0u);
        ecx = t12;
        edx = t13;
    }
    if (rd32(self + 0xa4u) == 0u)
    {
        eax = rd32(self + 0xa4u);
    }
    else
    {
        eax = rd32(self + 0xa4u);
        wr32(sp0 - 0x28u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t14 = cow_cdecl(g, COW_IMG(0x1006c110u), 1, eax);
        t15 = g->edx;
        wr32(self + 0xa4u, 0u);
        eax = t14;
        edx = t15;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t16 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x30u, 0);
    t17 = g->edx;
    cow_call_regs(g, COW_IMG(0x10071de0u), t16, self, g->edx, 1, 0);
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10048000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10048000(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
