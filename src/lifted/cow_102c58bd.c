/* f_0x102c58bd - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c58bd(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
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
    uint32_t t26;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(arg1 + 0x68u) & 1u)
    {
        eax = rd32(arg1 + 0x68u);
        goto L_102c58ed;
    }
    eax = rd32(arg1 + 0x68u);
    wr32(sp0 - 0x18u, COW_IMG(0x103c8f70u));
    wr32(sp0 - 0x1cu, arg1);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c8f70u), in_edi, in_esi);
    t2 = g->edx;
    eax = t1;
    ecx = COW_IMG(0x103c8f70u);
    edx = t2;
L_102c58de: ;
    if (rd8(arg1 + 0x126u) != 3u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x126u);
        eax = ((eax & 2u) | 1u) * 2u;
    }
    else
    {
        eax = 1u;
    }
    if (arg3 == eax) goto L_102c5948;
    wr32(sp0 - 0x18u, COW_IMG(0x103c8f08u));
    loc_18 = COW_IMG(0x103c8f08u);
L_102c5931: ;
    wr32(sp0 - 0x1cu, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_18);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x20u, arg3);
    wr32(sp0 - 0x24u, arg1);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t5, 1, 5, arg1, arg3, arg1, rd32(sp0 - 0x18u), in_edi);
L_102c5a32: ;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c58ed: ;
    if ((eax & 4u) == 0u) goto L_102c58f8;
    wr32(sp0 - 0x18u, COW_IMG(0x103c8f58u));
    ecx = self;
    edx = in_edx;
    loc_18 = COW_IMG(0x103c8f58u);
    goto L_102c5931;
L_102c58f8: ;
    if (rd8(arg1 + 0x126u) != 3u) goto L_102c590c;
    if ((eax & 2u) != 0u) goto L_102c590c;
    wr32(sp0 - 0x18u, COW_IMG(0x103c8f3cu));
    ecx = self;
    edx = in_edx;
    loc_18 = COW_IMG(0x103c8f3cu);
    goto L_102c5931;
L_102c590c: ;
    if (arg2 == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102c58de;
    }
    if ((rd8(arg2 + 8u) & 0x20u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102c58de;
    }
    wr32(sp0 - 0x18u, COW_IMG(0x103c8f24u));
    ecx = self;
    edx = in_edx;
    loc_18 = COW_IMG(0x103c8f24u);
    goto L_102c5931;
L_102c5948: ;
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, arg1);
    g->eax = sp0 - 0xcu;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 - 0xcu, eax, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, arg1);
    g->ecx = t7;
    g->esp = sp0 - 0x14u;
    t9 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t8, 1, 5, arg1, 0u, arg1, sp0 - 0xcu, rd32(sp0 - 0x18u));
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        if (rd8(arg1 + 0x126u) != 3u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x126u);
            goto L_102c59cd;
        }
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x126u);
        t12 = rd8(sp0 - 0xcu);
        wr8(arg1 + 0x138u, (uint8_t)t12);
        if (rd16(arg2 + 0x14u) == 0u)
        {
            ecx = (ecx & 0xffffff00u) | t12;
            goto L_102c5a21;
        }
        eax = (eax & 0xffff0000u) | rd16(arg2 + 0x14u);
        ecx = (ecx & 0xffffff00u) | t12;
        if ((uint8_t)ecx <= (uint16_t)eax)
        {
            edx = (edx & 0xffff0000u) | (uint8_t)ecx;
            goto L_102c59a1;
        }
        edx = (edx & 0xffff0000u) | (uint8_t)ecx;
        wr32(sp0 - 0x18u, COW_IMG(0x103c8ee4u));
        wr32(sp0 - 0x1cu, arg1);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8ee4u));
    }
    goto L_102c5a32;
L_102c59a1: ;
    t13 = rd32(arg1 + 0x114u);
    t14 = rd8((uint8_t)ecx * 3u + rd32(arg1 + 0x114u));
    wr16(arg1 + 0x13au, (uint16_t)t14);
    t15 = rd8((uint8_t)ecx * 3u + t13 + 1u);
    wr16(arg1 + 0x13cu, (uint16_t)t15);
    eax = ((uint8_t)ecx * 3u + t13 & 0xffff0000u) | rd8((uint8_t)ecx * 3u + t13 + 2u);
    ecx = ((t13 | t14) & 0xffff0000u) | t15;
L_102c5a1a: ;
    wr16(arg1 + 0x13eu, (uint16_t)eax);
L_102c5a21: ;
    wr32(sp0 - 0x18u, arg1 + 0x138u);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102c7b06u), 3, arg1, arg2, arg1 + 0x138u);
    goto L_102c5a32;
L_102c59cd: ;
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    if ((eax & 2u) != 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t18 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 - 0xcu, g->ecx, g->edx, 1, 1, sp0 - 0xcu);
        t19 = g->ecx;
        t20 = g->edx;
        wr16(arg1 + 0x13au, (uint16_t)t18);
        wr32(sp0 - 0x1cu, sp0 - 0xau);
        g->ecx = t19;
        g->edx = t20;
        g->esp = sp0 - 0x18u;
        t21 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 - 0xau, g->ecx, g->edx, 1, 1, sp0 - 0xau);
        t22 = g->ecx;
        t23 = g->edx;
        wr16(arg1 + 0x13cu, (uint16_t)t21);
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->ecx = t22;
        g->edx = t23;
        g->esp = sp0 - 0x1cu;
        t24 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 - 8u, g->ecx, g->edx, 1, 1, sp0 - 8u);
        t25 = g->ecx;
        t26 = g->edx;
        eax = t24;
        ecx = t25;
        edx = t26;
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t16 = cow_call_regs(g, COW_IMG(0x102c4582u), sp0 - 0xcu, g->ecx, g->edx, 1, 1, sp0 - 0xcu);
        t17 = g->edx;
        wr16(arg1 + 0x140u, (uint16_t)t16);
        wr16(arg1 + 0x13cu, (uint16_t)t16);
        wr16(arg1 + 0x13au, (uint16_t)t16);
        eax = t16;
        ecx = sp0 - 0xcu;
        edx = t17;
    }
    goto L_102c5a1a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c58bd(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c58bd(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
