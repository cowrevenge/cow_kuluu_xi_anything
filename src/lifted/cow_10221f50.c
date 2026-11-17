/* f_0x10221f50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10221f50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    t1 = rd32(self);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(t1 + 0x64u), self, 0);
    t2 = g->ecx;
    if (rd32(self + 8u) == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        goto L_10222105;
    }
    eax = rd32(self + 8u);
    ecx = t2;
    if (rd32(self + 0x40u) != 0u) goto L_10221fae;
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr8(eax + 0x62u, 0u);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10221be0u), self, 2, sp0 - 0x10u, sp0 - 0xcu);
    t3 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x1cu, t3);
    t4 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x20u, t4);
    cow_thiscall(g, rd32(rd32(self) + 0x50u), self, 2, t4, t3);
    return;
L_10221fae: ;
    if (rd8(self + 0x5cu) >> 1u & 1u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 0x5cu) >> 1u;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 0x5cu) >> 1u;
        wr8(eax + 0x62u, 1u);
    }
    if (rd32(self + 0x14u) != 0u) goto L_10221fca;
    if (rd32(self + 0x1cu) == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        goto L_10222105;
    }
L_10221fca: ;
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_edi);
    if ((int32_t)(rd32(self + 0x40u) - rd32(self + 0x38u)) <= (int32_t)rd32(self + 0x48u))
    {
        eax = rd32(self + 0x48u);
        edx = rd32(self + 0x38u);
        ebx = rd32(self + 0x40u) - rd32(self + 0x38u);
    }
    else
    {
        eax = rd32(self + 0x48u);
        edx = rd32(self + 0x38u);
        ebx = eax;
    }
    wr32(sp0 - 0x24u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t5 = cow_cdecl(g, COW_IMG(0x102225f0u), 1, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0xcu, t5);
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x24u;
    t8 = cow_cdecl(g, COW_IMG(0x102225f0u), 1, 2u);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x10u, t8);
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        ecx = t9;
        edx = t10;
        edi = rd32(self + 0x38u);
        loc_10 = t8;
        if ((int32_t)ebx <= 0) goto L_1022207b;
        ebp = 0u;
L_1022204e: ;
        t16 = ebp + rd32(self + 0x54u);
        wr32(sp0 - 0x24u, t16);
        g->edi = edi;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t17 = cow_thiscall(g, COW_IMG(0x101188e0u), rd32(self + 8u), 1, t16);
        t18 = g->edx;
        if (edi == rd32(self + 0x30u))
        {
            eax = t17;
            ecx = rd32(sp0 - 0x10u);
            edx = t18;
        }
        else
        {
            eax = t17;
            edx = t18;
            ecx = rd32(sp0 - 0xcu);
        }
        wr32(sp0 - 0x24u, ecx);
        wr32(sp0 - 0x28u, edi);
        wr32(sp0 - 0x2cu, eax);
        wr32(sp0 - 0x30u, self);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t19 = cow_thiscall_cdecl(g, rd32(self + 0x1cu), ecx, 4, self, eax, edi, ecx);
        t20 = g->ecx;
        t21 = g->edx;
        if ((int32_t)(ebp + 1u) < (int32_t)ebx)
        {
            eax = t19;
            edx = t21;
            ebp = ebp + 1u;
            edi = edi + 1u;
            loc_10 = rd32(sp0 - 0x10u);
            goto L_1022204e;
        }
        ecx = t20;
        loc_10 = rd32(sp0 - 0x10u);
    }
    else
    {
        ecx = t9;
        edi = rd32(self + 0x38u);
        loc_10 = t8;
        if ((int32_t)ebx <= 0) goto L_1022207b;
        ebp = 0u;
L_10222003: ;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 1u);
        t11 = ebp + rd32(self + 0x54u);
        wr32(sp0 - 0x2cu, t11);
        wr32(sp0 - 0x30u, sp0 - 8u);
        g->ebx = ebx;
        g->edi = edi;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t11, 1u, 0u);
        if (edi == rd32(self + 0x30u))
        {
            eax = rd32(sp0 - 0x10u);
        }
        else
        {
            eax = rd32(sp0 - 0xcu);
        }
        wr32(sp0 - 0x24u, eax);
        wr32(sp0 - 0x28u, edi);
        t12 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x2cu, t12);
        t13 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x30u, t13);
        t14 = rd32(self + 0x2cu);
        wr32(sp0 - 0x34u, t14);
        wr32(sp0 - 0x38u, self);
        g->esp = sp0 - 0x20u;
        cow_thiscall_cdecl(g, rd32(self + 0x14u), t12, 6, self, t14, t13, t12, edi, eax);
        t15 = g->ecx;
        if ((int32_t)(ebp + 1u) < (int32_t)ebx)
        {
            ebp = ebp + 1u;
            edi = edi + 1u;
            loc_10 = rd32(sp0 - 0x10u);
            goto L_10222003;
        }
        ecx = t15;
        loc_10 = rd32(sp0 - 0x10u);
    }
L_1022207b: ;
    if (rd32(self + 0x18u) != 0u)
    {
        ebp = rd32(self + 0x38u);
        if ((int32_t)ebx <= 0) goto L_102220d0;
        edi = 0u;
L_1022208b: ;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 1u);
        t22 = edi + rd32(self + 0x54u);
        wr32(sp0 - 0x2cu, t22);
        wr32(sp0 - 0x30u, sp0 - 8u);
        g->ebx = ebx;
        g->edi = edi;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t22, 1u, 0u);
        if (ebp == rd32(self + 0x30u))
        {
            eax = rd32(sp0 - 0x10u);
        }
        else
        {
            eax = rd32(sp0 - 0xcu);
        }
        wr32(sp0 - 0x24u, eax);
        wr32(sp0 - 0x28u, ebp);
        t23 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x2cu, t23);
        t24 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x30u, t24);
        t25 = rd32(self + 0x2cu);
        wr32(sp0 - 0x34u, t25);
        wr32(sp0 - 0x38u, self);
        g->esp = sp0 - 0x20u;
        cow_thiscall_cdecl(g, rd32(self + 0x18u), t23, 6, self, t25, t24, t23, ebp, eax);
        t26 = g->ecx;
        if ((int32_t)(edi + 1u) < (int32_t)ebx)
        {
            ebp = ebp + 1u;
            edi = edi + 1u;
            loc_10 = rd32(sp0 - 0x10u);
            goto L_1022208b;
        }
        ecx = t26;
    }
L_102220d0: ;
    if (rd8(self + 0x5cu) >> 1u & 1u)
    {
        ebx = rd32(sp0 - 0x1cu);
        edi = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
    }
    else
    {
        ebx = rd32(sp0 - 0x1cu);
        edi = rd32(sp0 - 0x20u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 1u);
        t27 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
        wr32(sp0 - 0x24u, t27);
        wr32(sp0 - 0x28u, sp0 - 8u);
        g->ebx = ebx;
        g->edi = edi;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t27, 1u, 0u);
        t28 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x1cu, t28);
        t29 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x20u, t29);
        cow_thiscall(g, rd32(rd32(self) + 0x48u), self, 2, t29, t28);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
    }
L_10222105: ;
    g->ebx = ebx;
    g->esi = loc_18;
    g->edi = edi;
    g->ebp = loc_14;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221f50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10221f50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
