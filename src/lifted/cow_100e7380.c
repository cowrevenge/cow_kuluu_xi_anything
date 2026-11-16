/* f_0x100e7380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e7380(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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

    wr16(rd32(COW_IMG(0x104df770u)) + 0x3c8u, 0u);
    ecx = self;
    edx = in_edx;
    ebx = in_ebx;
    ebp = 0u;
    esi = rd32(COW_IMG(0x104df770u));
    edi = 0u;
    loc_4 = 0u;
L_100e739f: ;
    t1 = edi + esi + 0xa90u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_cdecl(g, COW_IMG(0x100e75f0u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_100e7534;
    }
    ecx = t3;
    edx = t4;
    edi = t1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x100e76a0u), 1, edi);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        ecx = t6;
        edx = t7;
        goto L_100e7534;
    }
    ecx = t6;
    edx = t7;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t8 = cow_cdecl(g, COW_IMG(0x100e7810u), 1, edi);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        ecx = t9;
        edx = t10;
        goto L_100e7534;
    }
    ecx = t9;
    edx = t10;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t11 = cow_cdecl(g, COW_IMG(0x100e7870u), 1, edi);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        ecx = t12;
        edx = t13;
        goto L_100e7534;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t14 = cow_call_regs(g, COW_IMG(0x100e7900u), eax, g->ecx, g->edx, 1, 1, edi);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        ecx = t15;
        edx = t16;
        goto L_100e7534;
    }
    ecx = t15;
    edx = t16;
    if ((rd8(rd32(COW_IMG(0x104df770u)) + 0x1c4u) & 0x3eu) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x104df770u)) + 0x1c4u);
        goto L_100e74fc;
    }
    ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x104df770u)) + 0x1c4u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t17 = cow_cdecl(g, COW_IMG(0x100e79a0u), 1, edi);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 == 0u)
    {
        ecx = t18;
        edx = t19;
        goto L_100e7534;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    if ((rd8(rd32(COW_IMG(0x104df770u)) + 0x1c4u) & 2u) == 0u)
    {
        ebx = (ebx & 0xffffff00u) | rd8(rd32(COW_IMG(0x104df770u)) + 0x1c4u);
        esi = rd32(COW_IMG(0x104df770u));
        goto L_100e7449;
    }
    ebx = (ebx & 0xffffff00u) | rd8(rd32(COW_IMG(0x104df770u)) + 0x1c4u);
    esi = rd32(COW_IMG(0x104df770u));
    g->ecx = esi + 0x1c8u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t20 = cow_cdecl(g, COW_IMG(0x100e71d0u), 2, edi, esi + 0x1c8u);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 != 0u)
    {
        ecx = t21;
        edx = t22;
        goto L_100e753a;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
L_100e7449: ;
    if ((ebx & 4u) == 0u) goto L_100e7466;
    g->ecx = ecx;
    g->edx = esi + 0x1c8u;
    g->esp = sp0 - 0x14u;
    t23 = cow_cdecl(g, COW_IMG(0x100e7240u), 2, edi, esi + 0x1c8u);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 != 0u)
    {
        ecx = t24;
        edx = t25;
        goto L_100e753a;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
L_100e7466: ;
    if ((ebx & 8u) == 0u) goto L_100e7490;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t26 = cow_cdecl(g, COW_IMG(0x100e75b0u), 3, edi, esi + 0x1c8u, esi + 0x2c8u);
    t27 = g->ecx;
    t28 = g->edx;
    if (t26 != 0u)
    {
        ecx = t27;
        edx = t28;
        goto L_100e7534;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    esi = rd32(COW_IMG(0x104df770u));
L_100e7490: ;
    if ((rd8(esi + 0x1c4u) & 0x10u) == 0u)
    {
        ebx = (ebx & 0xffffff00u) | rd8(esi + 0x1c4u);
        goto L_100e74b3;
    }
    ebx = (ebx & 0xffffff00u) | rd8(esi + 0x1c4u);
    g->ecx = esi + 0x1c8u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t29 = cow_cdecl(g, COW_IMG(0x100e71b0u), 2, edi, esi + 0x1c8u);
    t30 = g->ecx;
    t31 = g->edx;
    if (t29 != 0u)
    {
        ecx = t30;
        edx = t31;
        goto L_100e753a;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
L_100e74b3: ;
    if ((ebx & 0x20u) == 0u) goto L_100e74cc;
    g->ecx = ecx;
    g->edx = esi + 0x1c8u;
    g->esp = sp0 - 0x14u;
    t32 = cow_cdecl(g, COW_IMG(0x100e7140u), 2, edi, esi + 0x1c8u);
    t33 = g->ecx;
    t34 = g->edx;
    if (t32 != 0u)
    {
        ecx = t33;
        edx = t34;
        goto L_100e753a;
    }
    eax = t32;
    ecx = t33;
    edx = t34;
L_100e74cc: ;
    if (!(ebx & 1u)) goto L_100e74eb;
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t35 = cow_thiscall_cdecl(g, COW_IMG(0x100e7580u), ecx, 5, edi, esi + 0x1c8u, in_edi, in_esi, in_ebp);
    t36 = g->ecx;
    t37 = g->edx;
    if (t35 != 0u)
    {
        ecx = t36;
        edx = t37;
        goto L_100e7534;
    }
    ecx = t36;
    edx = t37;
    esi = rd32(COW_IMG(0x104df770u));
L_100e74eb: ;
    wr16(esi + (uint32_t)(int16_t)rd16(esi + 0x3c8u) * 2u + 0x832u, (uint16_t)ebp);
L_100e7528: ;
    wr16(rd32(COW_IMG(0x104df770u)) + 0x3c8u, (uint16_t)(rd16(rd32(COW_IMG(0x104df770u)) + 0x3c8u) + 1u));
L_100e7534: ;
    esi = rd32(COW_IMG(0x104df770u));
L_100e753a: ;
    if ((int16_t)(ebp + 1u) < 300)
    {
        ebp = ebp + 1u;
        edi = loc_4 + 0x100u;
        loc_4 = loc_4 + 0x100u;
        goto L_100e739f;
    }
    loc_4 = loc_4 + 0x100u;
    wr16(esi + 0x830u, rd16(esi + 0x3c8u));
    g->ebx = in_ebx;
    return (rd32(COW_IMG(0x104df770u)) & 0xffff0000u) | rd16(rd32(COW_IMG(0x104df770u)) + 0x3c8u);
L_100e74fc: ;
    if (!(ecx & 1u)) goto L_100e7519;
    g->ebx = ebx;
    g->eax = eax + 0x1c8u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t38 = cow_thiscall_cdecl(g, COW_IMG(0x100e7580u), ecx, 5, edi, eax + 0x1c8u, in_edi, in_esi, in_ebp);
    t39 = g->ecx;
    t40 = g->edx;
    if (t38 != 0u)
    {
        ecx = t39;
        edx = t40;
        goto L_100e7534;
    }
    edx = t40;
    eax = rd32(COW_IMG(0x104df770u));
L_100e7519: ;
    t41 = rd16(eax + 0x3c8u);
    wr16(eax + (uint32_t)(int16_t)t41 * 2u + 0x832u, (uint16_t)ebp);
    ecx = (uint32_t)(int16_t)t41;
    goto L_100e7528;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e7380(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
