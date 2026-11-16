/* f_0x1011a8f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1011a8f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_8;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x14u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t2 = g->edx;
    wr32(sp0 - 0x18u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_1011aa11;
    }
    edx = t2;
    ebx = 0u;
    ebp = in_ebp;
    edi = self;
    loc_18 = t1;
L_1011a913: ;
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 0x18u);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        goto L_1011aa11;
    }
    edx = t4;
    esi = t3;
    if ((uint32_t)(int16_t)rd16(esi) == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(esi);
        goto L_1011a964;
    }
    eax = (uint32_t)(int16_t)rd16(esi);
    if (eax == 1u)
    {
        wr32(sp0 - 0x2cu, 0u);
        t7 = (uint32_t)(int16_t)rd16(ebx + 0x1cu);
        wr32(sp0 - 0x30u, t7);
        t8 = (uint32_t)(int16_t)rd16(ebx + 0x1au);
        wr32(sp0 - 0x34u, t8);
        g->esp = sp0 - 0x28u;
        cow_fastcall(g, COW_IMG(0x10119ad0u), esi, t7, 3, t8, t7, 0u);
        t9 = g->edx;
        edx = t9;
    }
    else
    {
        eax = eax - 1u;
        if (eax == 1u)
        {
            eax = eax - 1u;
            t5 = rd32(edi + 8u);
            wr32(sp0 - 0x2cu, t5);
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, COW_IMG(0x10119e30u), esi, 1, t5);
            t6 = g->edx;
            edx = t6;
        }
    }
L_1011aa05: ;
    if (rd32(sp0 - 0x18u) != 0u) goto L_1011a913;
    eax = rd32(sp0 - 0x18u);
L_1011aa11: ;
    return eax;
L_1011a964: ;
    wr32(sp0 - 0x10u, esi);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t10 = cow_thiscall(g, COW_IMG(0x1015e030u), COW_IMG(0x10621838u), 1, arg1);
    t11 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        goto L_1011aa11;
    }
    eax = t10;
    edx = t11;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t12 = cow_thiscall(g, COW_IMG(0x1011b310u), eax, 0);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u)
    {
        eax = t12;
        goto L_1011aa11;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    if (rd32(esi + 0x30u) == eax) goto L_1011aa11;
    wr32(esi + 0x30u, eax);
    wr32(esi + 8u, 0u);
    wr32(sp0 - 0xcu, rd32(COW_IMG(0x106218b4u)));
    wr32(sp0 - 8u, rd32(COW_IMG(0x106218b8u)));
    if (rd8(rd32(eax) + 0x17u) != 0u)
    {
        ecx = (ecx & 0xffff0000u) | rd16(rd32(eax) + 2u);
        edx = (edx & 0xffff0000u) | rd16(rd32(eax) + 0xcu);
        ebp = (ebp & 0xffff0000u) | rd16(rd32(eax) + 0xau);
        esi = (esi & 0xffff0000u) | rd16(rd32(eax) + 4u);
        eax = rd32(eax);
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | rd16(rd32(eax) + 2u);
        edx = (edx & 0xffff0000u) | rd16(rd32(eax) + 0xcu);
        ebp = (ebp & 0xffff0000u) | rd16(rd32(eax) + 0xau);
        esi = (esi & 0xffff0000u) | rd16(rd32(eax) + 4u);
        eax = rd32(eax);
        edi = rd32(COW_IMG(0x106218b8u));
        loc_8 = rd32(COW_IMG(0x106218b8u));
        t15 = rd8(eax + 0x13u);
        if (t15 == 1u)
        {
            eax = t15 - 1u;
            goto L_1011a9e5;
        }
        eax = t15 - 1u;
        if (eax == 1u) goto L_1011aa1b;
        eax = eax - 1u;
        if (eax != 1u)
        {
            eax = eax - 1u;
            goto L_1011a9ec;
        }
        eax = rd32(sp0 - 6u);
        esi = esi + rd32(sp0 - 6u) - 0x1c0u;
L_1011a9e5: ;
        ecx = ecx + edi - 0x200u;
    }
L_1011a9ec: ;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, edx);
    wr32(sp0 - 0x3cu, ebp);
    wr32(sp0 - 0x40u, esi);
    wr32(sp0 - 0x44u, ecx);
    t16 = rd32(sp0 - 0x14u);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x1011a5a0u), t16, 7, ecx, esi, ebp, edx, 1u, 0u, 0u);
    t17 = g->edx;
    edx = t17;
    ebx = rd32(sp0 - 0x10u);
    edi = t16;
    goto L_1011aa05;
L_1011aa1b: ;
    eax = rd32(sp0 - 6u);
    esi = esi + rd32(sp0 - 6u) - 0x1c0u;
    goto L_1011a9ec;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011a8f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011a8f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
