/* f_0x1022cf30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1022cf30(Guest* g)
{
    uint32_t eax;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
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

    if (rd32(COW_IMG(0x10667a74u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10667a74u));
        goto L_1022cf46;
    }
    return 1u;
L_1022cf46: ;
    g->ecx = ecx;
    g->edx = in_edx;
    t1 = rd32(sp0 + 4u);
    g->esp = sp0 - 0xcu;
    t2 = cow_call_regs(g, COW_IMG(0x101cbe70u), t1 * 0x19u, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t4;
        esi = ecx + t1 * 0x64u;
        ecx = t3;
        edi = t1;
        goto L_1022cf65;
    }
    return 9u;
L_1022cf65: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x101cbe50u), eax, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 != 0u) goto L_1022d136;
    eax = t5;
    ecx = t6;
    edx = t7;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x101cbe60u), eax, g->ecx, g->edx, 1, 0);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u) goto L_1022d136;
    eax = t8;
    ecx = t9;
    edx = t10;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_call_regs(g, COW_IMG(0x101cbe90u), eax, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        goto L_1022cf91;
    }
    return 0xau;
L_1022cf91: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_call_regs(g, COW_IMG(0x101cbec0u), eax, g->ecx, g->edx, 1, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        ecx = t15;
        edx = t16;
        goto L_1022cfa3;
    }
    return 0xbu;
L_1022cfa3: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t18 = g->ecx;
    t19 = g->edx;
    if (!(t17 >> 8u & 1u))
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_1022cfb6;
    }
    return 7u;
L_1022cfb6: ;
    if ((int16_t)rd16(COW_IMG(0x106671e0u) + edi * 2u) <= 0) goto L_1022cfe3;
    if ((int32_t)edi < 896) goto L_1022cfda;
    if ((int32_t)edi > 1023) goto L_1022cfda;
    return 0xcu;
L_1022cfda: ;
    return 4u;
L_1022cfe3: ;
    if (rd8(COW_IMG(0x10485824u)) & 1u) goto L_1022cff5;
    return 2u;
L_1022cff5: ;
    g->esp = sp0 - 0xcu;
    t20 = cow_call_regs(g, COW_IMG(0x100991f0u), eax, g->ecx, g->edx, 1, 0);
    if (t20 == 0u)
    {
        edx = rd32(COW_IMG(0x10485640u));
        ebx = 0u;
    }
    else
    {
        eax = t20;
        edx = rd32(COW_IMG(0x10485640u));
        ebx = rd16(eax + (uint8_t)edx * 6u + 8u);
    }
    t21 = rd32(esi + 0x5cu);
    t22 = (t21 & 0xffffff00u) | rd8(esi + 0x44u);
    t23 = (esi + 0xeu & 0xffffff00u) | rd8(esi + 2u);
    t24 = (t22 & 0xffffff00u) | rd8(COW_IMG(0x10485643u));
    t25 = (t23 & 0xffffff00u) | rd8(COW_IMG(0x10485642u));
    t26 = (t24 & 0xffffff00u) | (uint8_t)(edx >> 8u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t27 = cow_thiscall_cdecl(g, COW_IMG(0x10102050u), t25, 12, edx, t26, t25, t24, t23, t22, esi + 0xeu, COW_IMG(0x10485a30u), t21, ebx, in_edi, in_esi);
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint8_t)t27 != 0u)
    {
        ecx = t28;
        edx = t29;
        goto L_1022d052;
    }
    g->ebx = in_ebx;
    return 2u;
L_1022d052: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t30 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t31 = g->ecx;
    t32 = g->edx;
    if (t30 == 0u)
    {
        ecx = t31;
        edx = t32;
        goto L_1022d091;
    }
    eax = t30;
    ecx = t31;
    edx = t32;
    ebx = t30;
    t33 = (ecx & 0xffffff00u) | rd8(esi + 0x44u);
    t34 = (edx & 0xffffff00u) | rd8(esi + 2u);
    t35 = (eax & 0xffff0000u) | rd16(esi + 0xau);
    g->eax = t35;
    g->edx = t34;
    g->esp = sp0 - 0xcu;
    t36 = cow_thiscall_cdecl(g, COW_IMG(0x10101d00u), t33, 4, t35, t34, t33, COW_IMG(0x10485a30u));
    t37 = g->edx;
    if ((int32_t)(uint16_t)t36 <= (int32_t)rd32(ebx + 0x24u))
    {
        ecx = rd32(ebx + 0x24u);
        edx = t37;
        goto L_1022d091;
    }
    g->ebx = in_ebx;
    return 3u;
L_1022d091: ;
    if ((int32_t)edi < 512) goto L_1022d0f5;
    if ((int32_t)edi >= 736) goto L_1022d0fd;
    if ((int16_t)rd16(COW_IMG(0x106679e0u)) <= 0) goto L_1022d0b4;
    g->ebx = in_ebx;
    return 6u;
L_1022d0b4: ;
    t38 = rd8(COW_IMG(0x10485640u));
    wr8(sp0 + 4u, t38 != 0x10u);
    ecx = (ecx & 0xffffff00u) | t38 != 0x10u;
    ebx = rd32(sp0 + 4u);
    esi = 0u;
    edi = edi - 0x200u;
L_1022d0ce: ;
    g->edi = edi;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t39 = cow_cdecl(g, COW_IMG(0x100fcbc0u), 3, ebx, 0x1000u, esi);
    t40 = g->ecx;
    t41 = g->edx;
    if (edi == (uint8_t)t39) goto L_1022d116;
    ecx = t40;
    edx = t41;
    if ((int32_t)(esi + 1u) < 20)
    {
        esi = esi + 1u;
        goto L_1022d0ce;
    }
    g->ebx = in_ebx;
    g->edi = in_edi;
    return 5u;
L_1022d0f5: ;
    if ((int32_t)edi < 736) goto L_1022d116;
L_1022d0fd: ;
    if ((int32_t)edi >= 768) goto L_1022d116;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t42 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x1e5u);
    t43 = g->ecx;
    t44 = g->edx;
    if ((uint8_t)t42 != 1u)
    {
        ecx = t43;
        edx = t44;
        goto L_1022d11c;
    }
L_1022d116: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    return 0u;
L_1022d11c: ;
    g->esp = sp0 - 0xcu;
    t45 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0x1f9u);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return -((uint8_t)((uint8_t)t45 - 1u) != 0u) & 2u;
L_1022d136: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    return 8u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022cf30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022cf30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
