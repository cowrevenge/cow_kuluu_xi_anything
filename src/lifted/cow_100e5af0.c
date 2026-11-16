/* f_0x100e5af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e5af0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_58;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x5cu, in_ebx);
    wr32(sp0 - 0x60u, in_ebp);
    wr32(sp0 - 0x64u, in_esi);
    wr32(sp0 - 0x68u, in_edi);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_100e5e1a;
    }
    ebp = rd32(COW_IMG(0x104dfd98u));
    if (rd32(rd32(sp0 + 0xcu) + 4u) != rd32(ebp + 0x19d20u))
    {
        eax = rd32(rd32(sp0 + 0xcu) + 4u);
        edx = in_edx;
        goto L_100e5e1a;
    }
    ebx = rd32(sp0 + 0xcu);
    ebp = ebp + 0x19a54u;
    if (rd16(ebx + 8u) != rd32(ebp + 0x2c8u))
    {
        eax = rd32(ebp + 0x2c8u);
        edx = in_edx;
        goto L_100e5e1a;
    }
    ecx = rd16(ebx + 8u);
    if (rd32(ebp + 0x2d0u) != 0u)
    {
        eax = rd32(ebp + 0x2d0u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(ebp + 0x2d0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x68u;
        t1 = cow_stdcall(g, COW_IMG(0x10134650u), 0);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    if (rd8(ebx + 0xau) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + 0xau);
        goto L_100e5b7d;
    }
    eax = (eax & 0xffffff00u) | rd8(ebx + 0xau);
    if (rd8(ebx + 0xeu) >= 0x10u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + 0xeu);
        goto L_100e5e1a;
    }
    eax = (eax & 0xffffff00u) | rd8(ebx + 0xeu);
    wr32(ebp + (uint8_t)eax * 0x24u + 0x88u, (uint8_t)eax);
    t4 = rd8(ebx + 0xeu);
    wr16(ebp + t4 * 0x24u + 0x8cu, rd16(ebx + 0xcu));
    edx = (uint8_t)eax * 9u;
    eax = t4 * 9u;
L_100e5e14: ;
    wr32(ebp + 0x2d0u, rd32(ebp + 0x2d0u) + 1u);
L_100e5e1a: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e5b7d: ;
    if ((uint8_t)eax != 1u) goto L_100e5d06;
    t5 = rd8(ebx + 0x22u);
    wr8(ebp + 0x2d4u, (uint8_t)t5);
    t6 = rd8(ebx + 0x23u);
    wr8(ebp + 0x2d5u, (uint8_t)t6);
    t7 = rd8(ebx + 0x24u);
    wr8(ebp + 0x2d6u, (uint8_t)t7);
    t8 = rd8(ebx + 0x25u);
    wr8(ebp + 0x2d7u, (uint8_t)t8);
    t9 = rd8(ebx + 0x26u);
    wr8(ebp + 0x2d8u, (uint8_t)t9);
    t10 = rd8(ebx + 0x27u);
    wr8(ebp + 0x2d9u, (uint8_t)t10);
    t11 = rd8(ebx + 0x28u);
    t12 = rd8(ebp + 0x2dau);
    wr8(ebp + 0x2dau, (uint8_t)(((t11 ^ t12) & 1u) ^ t12));
    wr8(ebp + 0x2dau, (uint8_t)(((rd8(ebx + 0x28u) ^ t12) & 2u) ^ ((t11 ^ t12) & 1u) ^ t12));
    t13 = rd32(ebx + 0x10u);
    wr32(ebp + 0x2dcu, t13);
    t14 = rd32(ebx + 0x14u);
    wr32(ebp + 0x2e0u, t14);
    t15 = rd32(ebx + 0x18u);
    wr32(ebp + 0x2e4u, t15);
    t16 = rd32(ebx + 0x1cu);
    wr32(ebp + 0x2e8u, t16);
    t17 = rd8(ebx + 0x20u);
    t18 = rd16(ebp + 0x2ecu);
    wr16(ebp + 0x2ecu, (uint16_t)(((t17 ^ t18) & 0xfu) ^ t18));
    t19 = (rd8(ebx + 0x20u) ^ t18) & 0xf0u;
    wr16(ebp + 0x2ecu, (uint16_t)(t19 ^ ((t17 ^ t18) & 0xfu) ^ t18));
    t20 = rd8(ebx + 0x21u);
    wr16(ebp + 0x2ecu, (t20 & 0xfu) << 8u ^ ((t19 ^ ((t17 ^ t18) & 0xfu) ^ t18) & 0xf0ffu));
    t21 = rd16(ebx + 0x20u);
    wr16(ebp + 0x2ecu, (uint16_t)(((t20 << 8u ^ ((t19 ^ ((t17 ^ t18) & 0xfu) ^ t18) & 0xf0ffu) ^ t21) & 0xfffu) ^ t21));
    t22 = rd16(ebx + 0xeu);
    wr16(ebp + 0x2eeu, (uint16_t)t22);
    t23 = rd32(ebx + 0x2cu);
    t24 = rd16(ebp + 0x2f4u);
    wr32(ebp + 0x2f0u, t23);
    t25 = rd8(ebx + 0x30u);
    wr16(ebp + 0x2f4u, (uint16_t)(((t25 ^ t24) & 1u) ^ t24));
    t26 = rd16(ebx + 0x32u);
    wr16(ebp + 0x2f6u, (uint16_t)t26);
    t27 = (rd32(ebp + 0x2d0u) & 0xffffff00u) | (uint8_t)(rd32(ebp + 0x2d0u) | 0x80u);
    wr32(ebp + 0x2d0u, t27);
    if ((rd8(ebx + 0x30u) & 2u) == 0u)
    {
        eax = ((((t19 | t21 | t22 | t24) & 0xffff0000u) | t26) & 0xffffff00u) | rd8(ebx + 0x30u);
        edx = ((t25 ^ t24) & 1u) ^ (((t19 | t21 | t22) & 0xffff0000u) | t24);
        goto L_100e5e1a;
    }
    edx = ((t25 ^ t24) & 1u) ^ (((t19 | t21 | t22) & 0xffff0000u) | t24);
    if (rd32(ebx + 0x34u) == 0u)
    {
        eax = rd32(ebx + 0x34u);
        goto L_100e5e1a;
    }
    t28 = rd32(ebx + 0x38u);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t29 = rd32(ebx + 0x3cu);
    wr16(sp0 - 0x4cu, rd16(ebx + 0x34u));
    t30 = rd32(ebx + 0x40u);
    wr32(sp0 - 0x40u, t30);
    wr32(sp0 - 0x48u, t28);
    wr32(sp0 - 0x44u, t29);
    wr32(sp0 - 0x6cu, sp0 - 0x54u);
    t31 = rd32(ebx + 0x44u);
    wr32(sp0 - 0x3cu, t31);
    t32 = rd32(ebx + 0x48u);
    wr32(sp0 - 0x38u, t32);
    g->ebx = ebx;
    g->eax = t32;
    g->edx = t31;
    g->esp = sp0 - 0x68u;
    t33 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t34 = g->edx;
    g->ebx = in_ebx;
    g->edx = t34;
    return (t33 & 0xffffff00u) | 1u;
L_100e5d06: ;
    if ((uint8_t)eax != 2u) goto L_100e5d63;
    wr8(sp0 + 0xcu, 0u);
    edx = edx & 0xffffff00u;
L_100e5d10: ;
    if (rd16(ebx + (uint8_t)rd32(sp0 + 0xcu) * 2u + 0xcu) == 0u) goto L_100e5e14;
    ecx = (uint8_t)rd32(sp0 + 0xcu);
    if (rd8(ebx + ecx + 0x1cu) >= 0x10u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + ecx + 0x1cu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + ecx + 0x1cu);
        wr32(ebp + (uint8_t)eax * 0x24u + 0x88u, (uint8_t)eax);
        t35 = rd8(ebx + ecx + 0x1cu);
        wr16(ebp + t35 * 0x24u + 0x8cu, rd16(ebx + ecx * 2u + 0xcu));
        eax = t35 * 9u;
    }
    wr8(sp0 + 0xcu, (uint8_t)((uint8_t)edx + 1u));
    if ((uint8_t)((uint8_t)edx + 1u) < 8u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx + 1u);
        goto L_100e5d10;
    }
    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx + 1u);
    goto L_100e5e14;
L_100e5d63: ;
    if ((uint8_t)eax != 3u) goto L_100e5e1a;
    t36 = rd8(ebx + 0xbu);
    wr8(sp0 + 0xcu, 0u);
    if ((uint8_t)t36 == 0u)
    {
        eax = (eax & 0xffffff00u) | t36;
        goto L_100e5e14;
    }
L_100e5d7b: ;
    t37 = ebx + (uint8_t)rd32(sp0 + 0xcu) * 0x1cu;
    wr32(sp0 - 0x58u, t37);
    if (rd16(ebx + (uint8_t)rd32(sp0 + 0xcu) * 0x1cu + 0xcu) == 0u)
    {
        eax = (uint8_t)rd32(sp0 + 0xcu);
        edx = (uint8_t)rd32(sp0 + 0xcu) * 8u - (uint8_t)rd32(sp0 + 0xcu);
        goto L_100e5e14;
    }
    eax = (uint8_t)rd32(sp0 + 0xcu);
    ecx = t37;
    edx = (uint8_t)rd32(sp0 + 0xcu) * 8u - (uint8_t)rd32(sp0 + 0xcu);
    loc_58 = t37;
    if (rd8(ecx + 0xeu) >= 0x10u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + 0xeu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + 0xeu);
        wr32(ebp + (uint8_t)eax * 0x24u + 0x88u, (uint8_t)eax);
        wr16(ebp + rd8(ecx + 0xeu) * 0x24u + 0x8cu, rd16(ecx + 0xcu));
        edi = ebp + rd8(loc_58 + 0xeu) * 0x24u + 0x90u;
        eax = 0u;
        ecx = 7u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t38 = rd8(loc_58 + 0xeu);
        esi = loc_58 + 0x10u;
        edi = ebp + t38 * 0x24u + 0x90u;
        ecx = 6u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        eax = t38 + 4u;
        edx = t38 * 9u + 0x24u;
    }
    t39 = rd8(sp0 + 0xcu);
    t40 = rd8(ebx + 0xbu);
    wr8(sp0 + 0xcu, (uint8_t)(t39 + 1u));
    if ((uint8_t)(t39 + 1u) < (uint8_t)t40) goto L_100e5d7b;
    eax = (eax & 0xffffff00u) | (uint8_t)(t39 + 1u);
    goto L_100e5e14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e5af0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e5af0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
