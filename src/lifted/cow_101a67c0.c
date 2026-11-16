/* f_0x101a67c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a67c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
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
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = rd32(self + 0x14u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    t2 = rd32(t1 + 0x1dc0u);
    wr32(sp0 - 0xcu, t2);
    edi = 0u;
    loc_c = t2;
L_101a67ec: ;
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, edi + 1u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    g->ebx = edi + rd8(self + 0x6cu) * 0x14u;
    g->edi = edi;
    g->eax = sp0 - 8u;
    g->edx = rd8(self + 0x6cu) * 5u;
    t3 = rd8(self + 0x6cu);
    g->esp = sp0 - 0x1cu;
    t4 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, edi + 1u, 1u, 1u);
    t5 = g->edx;
    if (edi + t3 * 0x14u != rd32(sp0 - 0xcu))
    {
        eax = t4;
        edx = t5;
        ebx = edi + t3 * 0x14u;
        ebp = edi + 1u;
    }
    else
    {
        eax = t4;
        ebx = edi + t3 * 0x14u;
        ebp = edi + 1u;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80808080u);
        t6 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x2cu, t6);
        t7 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x30u, t7);
        g->eax = eax;
        g->edx = t7;
        g->esp = sp0 - 0x1cu;
        t8 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x24u), 5, t7, t6, 0x80808080u, 0u, 0u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    if (rd32(self + 0x20u) == 0u) goto L_101a686a;
    ecx = rd32(self + 0x20u);
    if (rd32(self + 0x1cu) != edi) goto L_101a686a;
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 0x4bu);
    t10 = (uint32_t)(int16_t)rd16(sp0 - 6u) + 2u;
    wr32(sp0 - 0x28u, t10);
    t11 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 8u;
    wr32(sp0 - 0x2cu, t11);
    g->edx = t11;
    g->esp = sp0 - 0x1cu;
    t12 = cow_call_regs(g, COW_IMG(0x101c6060u), t10, ecx, g->edx, 1, 4, t11, t10, 0x4bu, 1u);
    t13 = g->edx;
    wr32(sp0 - 0x30u, t12);
    g->edx = t13;
    g->esp = sp0 - 0x2cu;
    t14 = cow_call_regs(g, COW_IMG(0x101c6020u), t12, rd32(self + 0x20u), g->edx, 1, 1, t12);
    t15 = g->edx;
    wr32(sp0 - 0x34u, t14);
    g->edx = t15;
    g->esp = sp0 - 0x1cu;
    t16 = cow_thiscall(g, COW_IMG(0x101c60e0u), rd32(self + 0x20u), 6, t14, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), 0x4bu, 1u);
    t17 = g->edx;
    eax = t16;
    edx = t17;
L_101a68a2: ;
    if ((int32_t)ebp < 20)
    {
        edi = ebp;
        goto L_101a67ec;
    }
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_101a686a: ;
    wr32(sp0 - 0x20u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t18 = cow_thiscall(g, COW_IMG(0x101a29f0u), rd32(self + 0x14u), 1, ebx);
    t19 = g->edx;
    if (t18 == 0u)
    {
        eax = t18;
        edx = t19;
    }
    else
    {
        eax = t18;
        edx = t19;
        wr32(sp0 - 0x20u, 0x4bu);
        wr32(sp0 - 0x24u, 0x80808080u);
        wr32(sp0 - 0x28u, ebx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t20 = cow_thiscall(g, COW_IMG(0x101a29f0u), rd32(self + 0x14u), 1, ebx);
        t21 = g->edx;
        wr32(sp0 - 0x28u, t20);
        t22 = (uint32_t)(int16_t)rd16(sp0 - 6u) + 2u;
        wr32(sp0 - 0x2cu, t22);
        t23 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 8u;
        wr32(sp0 - 0x30u, t23);
        g->eax = t22;
        g->edx = t21;
        g->esp = sp0 - 0x1cu;
        t24 = cow_thiscall(g, COW_IMG(0x101b9760u), rd32(self + 0x18u), 5, t23, t22, t20, 0x80808080u, 0x4bu);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    }
    goto L_101a68a2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a67c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a67c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
