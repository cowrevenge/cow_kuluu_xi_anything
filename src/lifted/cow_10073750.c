/* f_0x10073750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10073750(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_40c;
    uint32_t loc_410;
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
    uint32_t t56;
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
    cow_frame(g, sp0, 1072u);

    wr32(sp0 - 0x418u, in_ebx);
    wr32(sp0 - 0x41cu, in_esi);
    wr32(sp0 - 0x414u, self);
    if (rd32(arg1 + 0x10u) == 1u) goto L_10073782;
    eax = rd32(arg1 + 0x10u) - 1u;
    if (eax == 1u)
    {
        esi = 0u;
        goto L_100737b1;
    }
    eax = eax - 1u;
    if (eax == 1u)
    {
        edx = in_edx;
        goto L_10073802;
    }
    return 0u;
L_10073782: ;
    wr32(sp0 - 0x420u, 0u);
    g->esp = sp0 - 0x41cu;
    t1 = cow_thiscall(g, COW_IMG(0x10071270u), rd32(arg1), 1, 0u);
    wr32(arg1 + 0x14u, t1);
    t2 = rd32(arg1);
    wr32(arg1 + 0x18u, t1);
    wr32(arg1 + 0x10u, 2u);
    t3 = rd32(t2 + 4u) >> 7u & 0x7ffffu;
    t4 = t2 + t3 * 0x10u;
    wr32(arg1, t4);
    esi = t3 << 4u;
L_100737b1: ;
    if ((int32_t)(esi + (rd32(rd32(arg1) + 4u) >> 7u & 0x7ffffu) * 0x10u) > (int32_t)rd32(arg1 + 4u))
    {
        edx = rd32(arg1 + 4u);
        goto L_100738a7;
    }
    ecx = rd32(arg1);
    edx = rd32(arg1 + 4u);
    wr32(sp0 - 0x420u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x41cu;
    t5 = cow_thiscall(g, COW_IMG(0x10071270u), ecx, 1, 0u);
    t6 = g->edx;
    wr32(rd32(arg1 + 0x18u) + 0x1cu, t5);
    t7 = rd32(arg1);
    wr32(arg1 + 0x18u, t5);
    t8 = t7 + (rd32(t7 + 4u) >> 7u & 0x7ffffu) * 0x10u;
    t9 = rd32(t7 + 4u);
    wr32(arg1, t8);
    if (rd32(arg1 + 8u) != esi + (t9 >> 7u & 0x7ffffu) * 0x10u)
    {
        esi = esi + (t9 >> 7u & 0x7ffffu) * 0x10u;
        goto L_100737b1;
    }
    edx = t6;
    wr32(arg1 + 0x10u, 3u);
L_10073802: ;
    wr32(sp0 - 0x420u, in_ebp);
    wr32(sp0 - 0x424u, in_edi);
    if (rd32(arg1 + 0xcu) == 0u)
    {
        eax = rd32(arg1 + 0xcu);
        ebp = rd32(arg1 + 0x14u);
    }
    else
    {
        eax = rd32(arg1 + 0xcu);
        ebp = rd32(arg1 + 0x14u);
        wr32(eax, ebp);
        t10 = rd32(ebp + 0x14u);
        wr32(sp0 - 0x428u, t10);
        g->edx = edx;
        g->esp = sp0 - 0x424u;
        cow_thiscall(g, COW_IMG(0x10074180u), rd32(COW_IMG(0x1047d128u)), 1, t10);
        t11 = g->edx;
        t12 = rd32(arg1 + 0xcu);
        wr32(ebp + 0x14u, t12);
        eax = t12;
        edx = t11;
    }
    g->esp = sp0 - 0x424u;
    cow_thiscall(g, COW_IMG(0x10072030u), ebp, 0);
    t13 = rd32(ebp + 0x14u);
    wr32(ebp + 0x28u, t13);
    wr32(sp0 - 0x40cu, 0u);
    t14 = rd32(ebp + 0x14u);
    wr32(sp0 - 0x400u, t14);
    wr32(sp0 - 0x410u, ebp);
    t15 = rd32(arg1 + 0x14u);
    t16 = rd32(rd32(arg1 + 0x14u) + 0x1cu);
    wr32(ebp + 0x1cu, 0u);
    if (t16 == 0u)
    {
        edx = t15;
        goto L_100739ad;
    }
    edx = t15;
    esi = 0u;
    edi = t16;
    loc_40c = 0u;
    loc_410 = ebp;
L_10073854: ;
    t17 = rd32(ebp + 0x14u);
    t18 = rd32(sp0 - 0x414u);
    wr32(edi + 0x28u, t17);
    wr32(sp0 - 0x428u, edi);
    wr32(sp0 - 0x42cu, sp0 - 0x408u);
    g->edx = edx;
    g->esp = sp0 - 0x424u;
    cow_thiscall(g, COW_IMG(0x10074140u), t18, 2, sp0 - 0x408u, edi);
    t19 = g->ecx;
    t20 = g->edx;
    if ((rd32(edi + 0x24u) & 0x7fu) != 1u)
    {
        eax = rd32(edi + 0x24u) & 0x7fu;
        ecx = t19;
        edx = t20;
    }
    else
    {
        eax = rd32(edi + 0x24u) & 0x7fu;
        edx = t20;
        wr32(sp0 - 0x40cu, esi + 1u);
        t21 = rd32(edi + 0x14u);
        wr32(esi * 4u + sp0 - 0x3fcu, t21);
        ecx = t21;
        ebp = edi;
        loc_40c = esi + 1u;
        esi = esi + 1u;
    }
    if (eax == 0x20u) goto L_100738b4;
    if (eax == 0x1bu) goto L_100738b4;
    wr32(sp0 - 0x428u, edi);
    g->eax = eax;
    g->edx = rd32(sp0 - 0x410u);
    t22 = rd32(sp0 - 0x410u);
    g->esp = sp0 - 0x424u;
    t23 = cow_thiscall(g, COW_IMG(0x100711e0u), t22 + 4u, 1, edi);
    t24 = g->edx;
    wr32(sp0 - 0x428u, t24);
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x100711d0u), edi + 4u, 1, t24);
    t26 = g->edx;
    eax = t25;
    edx = t26;
L_10073968: ;
    t47 = rd8(edi + 0x24u);
    wr8(edi + 0x1au, rd8(edi + 0x1au) & 0xfdu);
    if ((t47 & 0x7fu) != 0u) goto L_1007399e;
    if (rd32(ebp + 0x28u) == 0u)
    {
        ebp = 0u;
    }
    else
    {
        ebp = rd32(ebp + 0x28u);
        ebp = rd32(ebp);
    }
    if (rd32(esi * 4u + sp0 - 0x400u) == 0u)
    {
        ecx = rd32(edi + 0x14u);
        eax = 0u;
    }
    else
    {
        eax = rd32(esi * 4u + sp0 - 0x400u);
        ecx = rd32(edi + 0x14u);
        eax = rd32(eax);
    }
    wr32(eax + 0x3cu, ecx);
    if ((int32_t)esi <= 0) goto L_100739ad;
    wr32(sp0 - 0x40cu, esi - 1u);
    loc_40c = esi - 1u;
    esi = esi - 1u;
L_1007399e: ;
    wr32(sp0 - 0x410u, edi);
    if (rd32(edi + 0x1cu) != 0u)
    {
        loc_410 = edi;
        edi = rd32(edi + 0x1cu);
        goto L_10073854;
    }
L_100739ad: ;
    if (rd32(ebp + 8u) == 0u)
    {
        eax = rd32(ebp + 8u);
        edi = 0u;
    }
    else
    {
        eax = rd32(ebp + 8u);
        edi = rd32(eax);
    }
    if (edi == 0u) goto L_100739df;
L_100739be: ;
    wr32(sp0 - 0x428u, 1u);
    wr32(sp0 - 0x42cu, edi);
    t48 = rd32(sp0 - 0x414u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x424u;
    t49 = cow_stdcall(g, COW_IMG(0x10073a60u), 2, edi, 1u);
    t50 = g->edx;
    if (rd32(edi + 8u) == 0u)
    {
        eax = t49;
        edx = t50;
        esi = t48;
        edi = 0u;
    }
    else
    {
        eax = t49;
        edx = t50;
        esi = t48;
        edi = rd32(edi + 8u);
        edi = rd32(edi);
    }
    if (edi != 0u) goto L_100739be;
L_100739e3: ;
    if (rd32(ebp + 8u) == 0u)
    {
        eax = rd32(ebp + 8u);
        edi = 0u;
    }
    else
    {
        eax = rd32(ebp + 8u);
        edi = rd32(eax);
    }
    if (edi == 0u) goto L_10073a0f;
L_100739f4: ;
    wr32(sp0 - 0x428u, 2u);
    wr32(sp0 - 0x42cu, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x424u;
    t51 = cow_stdcall(g, COW_IMG(0x10073a60u), 2, edi, 2u);
    t52 = g->edx;
    if (rd32(edi + 8u) == 0u)
    {
        eax = t51;
        edx = t52;
        edi = 0u;
    }
    else
    {
        eax = t51;
        edx = t52;
        edi = rd32(edi + 8u);
        edi = rd32(edi);
    }
    if (edi != 0u) goto L_100739f4;
L_10073a0f: ;
    if (rd32(ebp + 8u) == 0u)
    {
        edi = 0u;
    }
    else
    {
        ebp = rd32(ebp + 8u);
        edi = rd32(ebp);
    }
    if (edi == 0u) goto L_10073a3c;
L_10073a21: ;
    wr32(sp0 - 0x428u, 4u);
    wr32(sp0 - 0x42cu, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x424u;
    t53 = cow_stdcall(g, COW_IMG(0x10073a60u), 2, edi, 4u);
    t54 = g->edx;
    if (rd32(edi + 8u) == 0u)
    {
        eax = t53;
        edx = t54;
        edi = 0u;
    }
    else
    {
        eax = t53;
        edx = t54;
        edi = rd32(edi + 8u);
        edi = rd32(edi);
    }
    if (edi != 0u) goto L_10073a21;
L_10073a3c: ;
    t55 = rd32(sp0 - 0x420u);
    t56 = rd32(sp0 - 0x424u);
    wr32(arg1 + 0x10u, 0u);
    g->ebx = rd32(sp0 - 0x418u);
    g->esi = rd32(sp0 - 0x41cu);
    g->edi = t56;
    g->ebp = t55;
    g->edx = edx;
    return 0u;
L_100738a7: ;
    g->edx = edx;
    return esi;
L_100738b4: ;
    wr32(sp0 - 0x428u, 1u);
    wr32(sp0 - 0x42cu, 0x40u);
    g->edx = edx;
    g->esp = sp0 - 0x418u;
    t27 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, 0x40u, 1u, rd32(sp0 - 0x424u), rd32(sp0 - 0x420u), rd32(sp0 - 0x41cu));
    t28 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t27 == 0u)
    {
        esi = 0u;
    }
    else
    {
        edx = t28;
        esi = t27;
        g->esp = sp0 - 0x424u;
        cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
        wr32(esi, COW_IMG(0x1032c934u));
    }
    wr32(esi + 0x20u, 0u);
    wr32(esi + 0x24u, 0u);
    wr32(esi + 0x28u, 0u);
    wr32(esi + 0x2cu, 0u);
    t29 = (rd32(esi + 0x24u) & 0xffffff80u) ^ 0xau;
    wr32(esi + 0x24u, t29);
    t30 = (rd32(esi + 0x24u) & 0xfc00007fu) | (uint8_t)((rd32(esi + 0x24u) & 0xfc00027fu) >> 8u | 2u) << 8u;
    wr32(esi + 0x24u, t30);
    t31 = rd32(edi + 0x20u);
    wr32(esi + 0x20u, t31);
    wr32(sp0 - 0x428u, edi + 0x31u);
    g->edx = edi + 0x31u;
    g->esp = sp0 - 0x424u;
    cow_thiscall(g, COW_IMG(0x10076750u), esi, 1, edi + 0x31u);
    t32 = g->edx;
    t33 = rd32(ebp + 0x14u);
    wr32(esi + 0x28u, t33);
    wr32(sp0 - 0x428u, esi);
    wr32(sp0 - 0x42cu, sp0 - 0x404u);
    t34 = rd16(esi + 0x1au);
    t35 = rd32(sp0 - 0x414u);
    wr16(esi + 0x1au, (t34 & 0xff00u) | (t34 & 0xf9u) | 1u);
    g->eax = (t34 & 0xff00u) | (t34 & 0xf9u) | 1u;
    t36 = cow_thiscall(g, COW_IMG(0x10074140u), t35, 2, sp0 - 0x404u, esi);
    wr32(sp0 - 0x428u, esi);
    g->edx = rd32(sp0 - 0x410u);
    t37 = rd32(sp0 - 0x410u);
    t38 = cow_thiscall(g, COW_IMG(0x100711e0u), t37 + 4u, 1, esi);
    t39 = g->edx;
    wr32(sp0 - 0x428u, t39);
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x100711d0u), esi + 4u, 1, t39);
    t41 = g->ecx;
    t42 = g->edx;
    wr32(sp0 - 0x428u, edi);
    g->edx = t42;
    t43 = cow_thiscall(g, COW_IMG(0x100711e0u), t41, 1, edi);
    t44 = g->edx;
    wr32(sp0 - 0x428u, esi);
    g->edx = t44;
    t45 = cow_thiscall(g, COW_IMG(0x100711d0u), edi + 4u, 1, esi);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    esi = rd32(sp0 - 0x40cu);
    goto L_10073968;
L_100739df: ;
    esi = rd32(sp0 - 0x414u);
    goto L_100739e3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10073750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10073750(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
