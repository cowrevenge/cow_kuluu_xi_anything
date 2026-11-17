/* f_0x10003710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10003710(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_ebx);
    if (rd8(self + 4u) == 0u)
    {
        esi = in_esi;
        edi = in_edi;
        loc_c = in_ebx;
        goto L_100037c3;
    }
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        goto L_10003741;
    }
    eax = rd32(self + 8u);
    if (eax != 1u)
    {
        esi = in_esi;
        edi = in_edi;
        loc_c = in_ebx;
        goto L_100037c3;
    }
    eax = eax - 1u;
    g->ebx = self;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x10003890u), self, in_edx, 0);
    t2 = g->edx;
    cow_fastcall(g, COW_IMG(0x10003b60u), self, t2, 0);
    g->ebx = in_ebx;
    return;
L_10003741: ;
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 0x4800u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x4800u, in_edi, in_esi);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x1cu, 0x9000u);
    wr32(self + 0xcu, t3);
    g->esp = sp0 - 0x10u;
    t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t4, t5, 1, 3, 0x9000u, 0x4800u, in_edi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x20u, 0x240000u);
    wr32(self + 0x10u, t6);
    g->esp = sp0 - 0x14u;
    t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t7, t8, 1, 3, 0x240000u, 0x9000u, 0x4800u);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x24u, 0x2400u);
    wr32(self + 0x14u, t9);
    g->esp = sp0 - 0x18u;
    t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t10, t11, 1, 3, 0x2400u, 0x240000u, 0x9000u);
    t13 = g->edx;
    t14 = rd32(self + 0x14u);
    wr32(self + 0x18u, t12);
    edi = t14;
    eax = 0u;
    ecx = 0x90000u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edx = t13;
    esi = 0u;
L_1000378b: ;
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, COW_IMG(0x1034f6bcu));
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    wr32(sp0 - 8u, esi);
    wr32(sp0 - 4u, 0xffffffffu);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x100037d0u), self, 7, sp0 - 8u, 0u, 0u, 0u, 0u, COW_IMG(0x1034f6bcu), 0x80808080u);
    t15 = g->edx;
    if ((int32_t)(esi + 1u) < 2304)
    {
        edx = t15;
        esi = esi + 1u;
        goto L_1000378b;
    }
    t16 = rd32(self + 8u) + 1u;
    t17 = rd32(sp0 - 0x10u);
    t18 = rd32(sp0 - 0x14u);
    wr32(self + 8u, t16);
    esi = t17;
    edi = t18;
    loc_c = rd32(sp0 - 0xcu);
L_100037c3: ;
    g->ebx = loc_c;
    g->esi = esi;
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10003710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10003710(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
