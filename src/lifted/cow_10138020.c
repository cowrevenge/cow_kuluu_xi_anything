/* f_0x10138020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10138020(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
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
    uint32_t t19;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 8u, 0u);
    t1 = rd32(self + 0x54u);
    wr32(sp0 - 0x20u, t1);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t2 = cow_thiscall(g, COW_IMG(0x10137b80u), self, 1, t1);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_call_regs(g, COW_IMG(0x10129c60u), t2, rd32(COW_IMG(0x10578158u)), g->edx, 1, 0);
    t5 = g->edx;
    wr32(sp0 - 0xcu, t4);
    if ((uint16_t)t4 == 0xffffu)
    {
        eax = t4;
        edx = t5;
        ebp = 0u;
        edi = rd32(self + 0x20u);
        loc_c = t4;
        goto L_10138074;
    }
    eax = t4;
    edx = t5;
    ebp = 0u;
    edi = rd32(self + 0x20u);
    loc_c = t4;
L_10138052: ;
    if ((int32_t)edi <= 0) goto L_10138074;
    wr32(sp0 - 0x20u, sp0 - 4u);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x1cu;
    t6 = cow_call_regs(g, COW_IMG(0x101292e0u), eax, rd32(COW_IMG(0x10578158u)), g->edx, 0, 2, sp0 - 0xcu, sp0 - 4u);
    t7 = g->edx;
    if (rd16(sp0 - 0xcu) != 0xffffu)
    {
        eax = t6;
        edx = t7;
        ebp = ebp + 1u;
        edi = edi - 1u;
        goto L_10138052;
    }
    eax = t6;
    edx = t7;
    ebp = ebp + 1u;
    edi = edi - 1u;
L_10138074: ;
    g->eax = eax;
    g->edx = edx;
    t8 = rd32(COW_IMG(0x10662d98u));
    g->esp = sp0 - 0x1cu;
    t9 = cow_thiscall(g, COW_IMG(0x1011ba40u), t8, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        ebx = rd32(self + 0x58u);
        loc_8 = 0u;
    }
    else
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        ebx = rd32(self + 0x58u);
        wr32(sp0 - 8u, 0xfffffff0u);
        ebx = ebx - 1u;
        loc_8 = 0xfffffff0u;
    }
    if ((int32_t)edi > 0)
    {
        if ((int32_t)ebp < (int32_t)ebx)
        {
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x10138180u), self, 0);
            t12 = g->ecx;
            t13 = g->edx;
            ecx = t12;
            edx = t13;
        }
    }
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) == 0u)
    {
        eax = rd32(COW_IMG(0x104568fcu));
    }
    else
    {
        t14 = rd32(self + 0xe0u);
        wr32(sp0 - 0x20u, t14);
        wr32(sp0 - 0x24u, loc_8);
        wr32(sp0 - 0x28u, ebx);
        t15 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x2cu, t15);
        t16 = rd32(self + 0x18u);
        wr32(sp0 - 0x30u, t16);
        t17 = rd32(self + 0x14u);
        wr32(sp0 - 0x34u, t17);
        g->ebx = ebx;
        g->eax = t15;
        g->esp = sp0 - 0x1cu;
        t18 = cow_fastcall(g, COW_IMG(0x101622e0u), rd32(COW_IMG(0x1062193cu)), t17, 6, t17, t16, t15, ebx, loc_8, t14);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10138020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10138020(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
