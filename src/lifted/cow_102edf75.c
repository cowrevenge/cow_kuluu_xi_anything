/* f_0x102edf75 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102edf75(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_4;
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
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
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
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    t1 = rd32(rd32(rd32(sp0 + 4u) + 0x14u) + 4u);
    t2 = rd32(rd32(rd32(sp0 + 4u) + 0x14u));
    t3 = rd32(sp0 + 4u);
    t4 = rd32(rd32(sp0 + 4u) + 0x14u);
    t5 = rd32(rd32(rd32(sp0 + 4u) + 0x14u) + 4u);
    wr32(sp0 + 4u, t1);
    if (t5 != 0u)
    {
        ecx = self;
        edx = in_edx;
        ebx = t2;
        esi = t3;
        edi = t4;
        loc_4 = in_ebp;
        loc_20 = in_ebx;
        loc_24 = in_esi;
        loc_28 = in_edi;
        goto L_102edfa5;
    }
    eax = t1;
    esi = t3;
    edi = t4;
    wr32(sp0 - 0x2cu, esi);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t6 = cow_thiscall(g, rd32(edi + 0xcu), self, 0);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_102ee075;
    }
    ecx = rd32(sp0 - 0x2cu);
    edx = t7;
    t8 = rd32(edi + 4u);
    t9 = rd32(edi);
    wr32(sp0 + 4u, t8);
    ebx = t9;
    loc_4 = rd32(sp0 - 4u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
L_102edfa5: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
    t10 = rd8(ebx) << 8u;
    wr32(sp0 - 8u, t10);
    if (rd32(sp0 + 4u) != 0u)
    {
        ebx = ebx + 1u;
        loc_8 = t10;
        goto L_102edfcb;
    }
    eax = t10;
    loc_8 = t10;
    wr32(sp0 - 0x2cu, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t11 = cow_thiscall(g, rd32(edi + 0xcu), ecx, 0);
    t12 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        edx = t12;
        goto L_102ee075;
    }
    ecx = rd32(sp0 - 0x2cu);
    edx = t12;
    t13 = rd32(edi + 4u);
    t14 = rd32(edi);
    wr32(sp0 + 4u, t13);
    ebx = t14;
    loc_4 = rd32(sp0 - 4u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_8 = rd32(sp0 - 8u);
L_102edfcb: ;
    t15 = loc_8 + rd8(ebx);
    wr32(sp0 - 8u, t15);
    t16 = rd8(ebx);
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
    wr32(sp0 - 8u, t15 - 2u);
    if ((int32_t)(t15 - 2u) < 14)
    {
        ebx = ebx + 1u;
        loc_8 = t15 - 2u;
        goto L_102ee175;
    }
    eax = t16;
    ebx = ebx + 1u;
    loc_8 = t15 - 2u;
    wr32(sp0 - 0xcu, 0u);
    loc_c = 0u;
L_102edfe7: ;
    if (rd32(sp0 + 4u) != 0u) goto L_102edffe;
    wr32(sp0 - 0x2cu, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t17 = cow_thiscall(g, rd32(edi + 0xcu), ecx, 0);
    t18 = g->edx;
    if ((uint8_t)t17 == 0u)
    {
        eax = t17;
        edx = t18;
        goto L_102ee075;
    }
    edx = t18;
    t19 = rd32(edi + 4u);
    t20 = rd32(edi);
    wr32(sp0 + 4u, t19);
    eax = t19;
    ebx = t20;
    loc_4 = rd32(sp0 - 4u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
L_102edffe: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
    wr32(sp0 - 0xcu, loc_c + 1u);
    t21 = rd8(ebx);
    wr8(loc_c + sp0 - 0x1cu, (uint8_t)t21);
    if ((int32_t)(loc_c + 1u) < 14)
    {
        eax = (eax & 0xffffff00u) | t21;
        ecx = loc_c;
        ebx = ebx + 1u;
        loc_c = loc_c + 1u;
        goto L_102edfe7;
    }
    eax = (eax & 0xffffff00u) | t21;
    ecx = loc_c;
    ebx = ebx + 1u;
    wr32(sp0 - 8u, loc_8 - 0xeu);
    if (rd8(sp0 - 0x1cu) != 0x4au)
    {
        loc_8 = loc_8 - 0xeu;
        goto L_102ee15f;
    }
    loc_8 = loc_8 - 0xeu;
    if (rd8(sp0 - 0x1bu) != 0x46u) goto L_102ee15f;
    if (rd8(sp0 - 0x1au) != 0x49u) goto L_102ee15f;
    if (rd8(sp0 - 0x19u) != 0x46u) goto L_102ee15f;
    if (rd8(sp0 - 0x18u) != 0u) goto L_102ee15f;
    if (rd8(sp0 - 0x17u) == 1u) goto L_102ee07c;
    wr32(rd32(esi) + 0x14u, 0x73u);
    t22 = rd8(sp0 - 0x17u);
    wr32(rd32(esi) + 0x18u, t22);
    t23 = rd8(sp0 - 0x16u);
    t24 = rd32(esi);
    wr32(t24 + 0x1cu, t23);
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, esi);
    g->eax = rd32(esi);
    g->edx = edx;
    t25 = rd32(esi);
    g->esp = sp0 - 0x30u;
    t26 = cow_thiscall(g, rd32(t25 + 4u), t24, 0);
    t27 = g->edx;
    eax = t26;
    edx = t27;
    loc_2c = 0xffffffffu;
L_102ee0a3: ;
    ecx = loc_2c;
    loc_4 = rd32(sp0 - 4u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_8 = rd32(sp0 - 8u);
L_102ee0a5: ;
    t32 = rd8(sp0 - 0x15u);
    t33 = rd8(sp0 - 0x13u);
    t34 = rd8(sp0 - 0x11u);
    wr8(esi + 0x101u, (uint8_t)t32);
    t35 = rd8(sp0 - 0x14u);
    wr8(esi + 0x100u, 1u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, esi);
    t36 = rd8(sp0 - 0x12u);
    wr16(esi + 0x102u, (uint16_t)(((ecx & 0xffff0000u) | t33) + (((eax | t32) & 0xffff0000u) | t35) * 0x100u));
    wr16(esi + 0x104u, (uint16_t)(((edx & 0xffff0000u) | t34) + (((((eax | t32) & 0xffff0000u) | t35) << 8u & 0xffff0000u) | t36) * 0x100u));
    t37 = (uint16_t)(((ecx & 0xffff0000u) | t33) + (((eax | t32) & 0xffff0000u) | t35) * 0x100u);
    t38 = rd32(esi);
    wr32(t38 + 0x18u, t37);
    t39 = rd16(esi + 0x104u);
    wr32(t38 + 0x1cu, t39);
    t40 = rd8(esi + 0x101u);
    wr32(t38 + 0x20u, t40);
    wr32(rd32(esi) + 0x14u, 0x56u);
    g->eax = rd32(esi);
    g->edx = (edx & 0xffff0000u) | t34;
    t41 = rd32(esi);
    g->esp = sp0 - 0x30u;
    t42 = cow_thiscall(g, rd32(t41 + 4u), t40, 0);
    t43 = g->edx;
    if ((rd8(sp0 - 0xfu) | rd8(sp0 - 0x10u)) == 0u)
    {
        edx = t43;
    }
    else
    {
        edx = t43;
        wr32(rd32(esi) + 0x14u, 0x59u);
        t44 = rd8(sp0 - 0x10u);
        wr32(rd32(esi) + 0x18u, t44);
        t45 = rd8(sp0 - 0xfu);
        t46 = rd32(esi);
        wr32(t46 + 0x1cu, t45);
        wr32(sp0 - 0x2cu, 1u);
        wr32(sp0 - 0x30u, esi);
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, rd32(rd32(esi) + 4u), t46, 0);
        t47 = g->edx;
        edx = t47;
    }
    if (rd32(sp0 - 8u) == rd8(sp0 - 0xfu) * rd8(sp0 - 0x10u) * 3u)
    {
        ecx = rd8(sp0 - 0xfu) * rd8(sp0 - 0x10u) * 3u;
        goto L_102ee190;
    }
    eax = rd32(sp0 - 8u);
    wr32(rd32(esi) + 0x14u, 0x57u);
    loc_4 = rd32(sp0 - 4u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_8 = rd32(sp0 - 8u);
L_102ee16e: ;
    t48 = rd32(esi);
    wr32(t48 + 0x18u, eax);
    ecx = t48;
L_102ee186: ;
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, rd32(rd32(esi) + 4u), ecx, 0);
    t49 = g->edx;
    ecx = 1u;
    edx = t49;
L_102ee190: ;
    t50 = rd32(sp0 + 4u);
    t51 = rd32(sp0 - 8u);
    wr32(edi, ebx);
    wr32(edi + 4u, t50);
    if ((int32_t)t51 <= 0)
    {
        eax = t50;
    }
    else
    {
        t52 = rd32(sp0 - 8u);
        wr32(sp0 - 0x2cu, t52);
        wr32(sp0 - 0x30u, esi);
        g->eax = rd32(esi + 0x14u);
        g->edx = edx;
        t53 = rd32(esi + 0x14u);
        g->esp = sp0 - 0x30u;
        t54 = cow_thiscall(g, rd32(t53 + 0x10u), ecx, 0);
        t55 = g->edx;
        eax = t54;
        edx = t55;
    }
    eax = (eax & 0xffffff00u) | 1u;
L_102ee1ac: ;
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_102ee075: ;
    eax = eax & 0xffffff00u;
    goto L_102ee1ac;
L_102ee07c: ;
    if (rd8(sp0 - 0x16u) <= 2u) goto L_102ee0a5;
    wr32(rd32(esi) + 0x14u, 0x58u);
    wr32(rd32(esi) + 0x18u, 1u);
    wr32(sp0 - 0x2cu, 1u);
    t28 = rd8(sp0 - 0x16u);
    t29 = rd32(esi);
    wr32(t29 + 0x1cu, t28);
    wr32(sp0 - 0x30u, esi);
    g->eax = 1u;
    g->edx = t29;
    g->esp = sp0 - 0x30u;
    t30 = cow_thiscall(g, rd32(rd32(esi) + 4u), rd32(esi), 0);
    t31 = g->edx;
    eax = t30;
    edx = t31;
    loc_2c = 1u;
    goto L_102ee0a3;
L_102ee15f: ;
    wr32(rd32(esi) + 0x14u, 0x4cu);
    eax = loc_8 + 0xeu;
    goto L_102ee16e;
L_102ee175: ;
    wr32(rd32(esi) + 0x14u, 0x4cu);
    wr32(rd32(esi) + 0x18u, loc_8);
    ecx = loc_8;
    goto L_102ee186;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102edf75(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102edf75(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
