/* f_0x10113a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10113a70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x28u, 0);
    t1 = g->edx;
    g->eax = rd32(arg1 + 8u);
    g->edx = t1;
    t2 = rd32(arg1 + 8u);
    t3 = rd32(rd32(arg1 + 8u));
    t4 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x20u, 0);
    t5 = g->edx;
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    t6 = cow_thiscall(g, COW_IMG(0x1010c4d0u), t3, 1, sp0 - 0x20u);
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->edx = sp0 - 0x20u;
    t7 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x18u, 1, sp0 - 0x20u);
    t8 = g->edx;
    g->edx = t8;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x20u, 0);
    t9 = g->edx;
    wr32(sp0 - 0x3cu, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10109260u), sp0 - 0x28u, 1, sp0 - 0x18u);
    t11 = g->edx;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x18u, 0);
    if (rd32(sp0 - 0x24u) == 0u)
    {
        eax = rd32(sp0 - 0x24u);
        edx = 0u;
    }
    else
    {
        eax = rd32(sp0 - 0x24u);
        edx = rd32(eax + 4u);
    }
    t12 = (uint16_t)rd32(sp0 + 0xcu);
    t13 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t12);
    if ((int32_t)(uint16_t)t13 <= 0)
    {
        esi = arg2;
        edi = t12;
    }
    else
    {
        edi = t12;
        ecx = 0u;
        esi = arg2;
L_10113af3: ;
        if (rd8(edx) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(edx);
            goto L_10113b02;
        }
        eax = (eax & 0xffffff00u) | rd8(edx);
        wr8(esi, (uint8_t)eax);
        if ((int32_t)(ecx + 1u) < (int32_t)edi)
        {
            ecx = ecx + 1u;
            edx = edx + 1u;
            esi = esi + 1u;
            goto L_10113af3;
        }
        edx = edx + 1u;
        esi = esi + 1u;
    }
L_10113b02: ;
    if ((int32_t)(esi - arg2) < (int32_t)edi) goto L_10113b1e;
    g->eax = eax;
    g->esp = sp0 - 0x38u;
    t14 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x28u, 0);
    return t14 & 0xffff0000u;
L_10113b1e: ;
    wr8(esi, 0x2eu);
    t15 = rd32(rd32(arg1 + 8u));
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x20u, 0);
    edx = sp0 - 0x10u;
    ebx = t15 + 0xcu;
    ebp = 0u;
    esi = esi + 1u;
L_10113b39: ;
    if (rd32(ebp * 4u + ebx) == 0u) goto L_10113b61;
    edi = rd32(ebp * 4u + ebx);
    ecx = 0x1eu;
L_10113b45: ;
    wr8(edx, edi >> (ecx - 6u & 0x1fu) & 0x3fu);
    if ((edi >> (ecx - 6u & 0x1fu) & 0x3fu) == 0u) goto L_10113b5b;
    eax = (edi >> (ecx - 6u & 0x1fu) & 0xffffff00u) | (edi >> (ecx - 6u & 0x1fu) & 0x3fu);
    ecx = ecx - 6u;
    wr8(edx, (uint8_t)((uint8_t)eax + 0x20u));
    if ((int32_t)ecx > 0)
    {
        edx = edx + 1u;
        goto L_10113b45;
    }
    edx = edx + 1u;
L_10113b5b: ;
    if ((int32_t)(ebp + 1u) < 3)
    {
        ebp = ebp + 1u;
        goto L_10113b39;
    }
L_10113b61: ;
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    wr8(edx, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t16 = cow_call_regs(g, COW_IMG(0x101092c0u), sp0 - 0x10u, sp0 - 0x20u, g->edx, 0, 1, sp0 - 0x10u);
    t17 = g->edx;
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x18u, 1, sp0 - 0x20u);
    t19 = g->edx;
    t20 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x20u, 0);
    wr32(sp0 - 0x3cu, sp0 - 0x18u);
    g->edx = sp0 - 0x18u;
    t21 = cow_thiscall(g, COW_IMG(0x10109260u), sp0 - 0x28u, 1, sp0 - 0x18u);
    t22 = g->edx;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x18u, 0);
    if (rd32(sp0 - 0x24u) == 0u)
    {
        eax = rd32(sp0 - 0x24u);
        edx = 0u;
    }
    else
    {
        eax = rd32(sp0 - 0x24u);
        edx = rd32(eax + 4u);
    }
    if ((int32_t)(esi - arg2) >= (int32_t)rd32(sp0 + 0xcu))
    {
        edi = rd32(sp0 + 0xcu);
        goto L_10113bce;
    }
    ecx = esi - arg2;
    edi = rd32(sp0 + 0xcu);
L_10113bbf: ;
    if (rd8(edx) == 0u) goto L_10113bce;
    eax = (eax & 0xffffff00u) | rd8(edx);
    wr8(esi, (uint8_t)eax);
    if ((int32_t)(ecx + 1u) < (int32_t)edi)
    {
        ecx = ecx + 1u;
        edx = edx + 1u;
        esi = esi + 1u;
        goto L_10113bbf;
    }
    edx = edx + 1u;
    esi = esi + 1u;
L_10113bce: ;
    if ((int32_t)(esi - arg2) < (int32_t)edi) goto L_10113bea;
    eax = esi - arg2;
    g->eax = eax;
    g->esp = sp0 - 0x38u;
    t23 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x28u, 0);
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 0x30u);
    return t23 & 0xffff0000u;
L_10113bea: ;
    wr8(esi, 0x3au);
    if (rd32(rd32(rd32(arg1 + 8u)) + 0x1cu) == 0u)
    {
        eax = rd32(rd32(rd32(arg1 + 8u)) + 0x1cu);
        esi = esi + 1u;
        edx = 0u;
    }
    else
    {
        eax = rd32(rd32(rd32(arg1 + 8u)) + 0x1cu);
        esi = esi + 1u;
        edx = rd32(eax + 4u);
    }
    if ((int32_t)(esi - arg2) >= (int32_t)edi) goto L_10113c1f;
    ecx = esi - arg2;
L_10113c10: ;
    if (rd8(edx) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edx);
        goto L_10113c1f;
    }
    eax = (eax & 0xffffff00u) | rd8(edx);
    wr8(esi, (uint8_t)eax);
    if ((int32_t)(ecx + 1u) < (int32_t)edi)
    {
        ecx = ecx + 1u;
        edx = edx + 1u;
        esi = esi + 1u;
        goto L_10113c10;
    }
    edx = edx + 1u;
    esi = esi + 1u;
L_10113c1f: ;
    wr8(esi, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x38u;
    t24 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x28u, 0);
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 0x30u);
    return (t24 & 0xffff0000u) | 2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10113a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10113a70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
