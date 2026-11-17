/* f_0x101d0370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=4 */
uint32_t cow_fn_101d0370(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_404;
    uint32_t loc_420;
    uint32_t loc_424;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1076u);

    wr32(sp0 - 0x40cu, in_ebp);
    wr32(sp0 - 0x410u, in_esi);
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 4u);
        g->eax = eax;
        g->esp = sp0 - 0x410u;
        t1 = cow_fastcall(g, COW_IMG(0x101d0880u), self, in_edx, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    g->edx = edx;
    g->esp = sp0 - 0x410u;
    cow_thiscall(g, COW_IMG(0x101d0860u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)arg4 < 0)
    {
        ecx = t3;
        edx = t4;
        wr8(sp0 - 0x405u, 1u);
        eax = -arg4;
    }
    else
    {
        ecx = t3;
        edx = t4;
        wr8(sp0 - 0x405u, 0u);
        eax = arg4;
    }
    wr32(sp0 - 0x414u, 0xa00000u);
    g->eax = eax;
    g->esp = sp0 - 0x408u;
    t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xa00000u, rd32(sp0 - 0x410u), rd32(sp0 - 0x40cu));
    t6 = g->ecx;
    t7 = g->edx;
    wr32(self + 4u, t5);
    if (t5 != 0u)
    {
        ecx = t6;
        edx = t7;
        ebp = eax;
        eax = t5;
        goto L_101d03cc;
    }
    g->esi = rd32(sp0 - 0x410u);
    g->ebp = rd32(sp0 - 0x40cu);
    return 1u;
L_101d03cc: ;
    wr32(sp0 - 0x414u, 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x410u;
    t8 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x14u);
    t9 = g->edx;
    if (t8 == 0u)
    {
        edx = t9;
        eax = 0u;
    }
    else
    {
        eax = t8;
        edx = t9;
        wr32(sp0 - 0x414u, 0xa00000u);
        t10 = rd32(self + 4u);
        wr32(sp0 - 0x418u, t10);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x410u;
        t11 = cow_thiscall(g, COW_IMG(0x101d08e0u), eax, 2, t10, 0xa00000u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    wr32(self + 8u, eax);
    if (eax != 0u) goto L_101d0405;
    g->esi = rd32(sp0 - 0x410u);
    g->ebp = rd32(sp0 - 0x40cu);
    return 1u;
L_101d0405: ;
    wr32(sp0 - 0x414u, in_ebx);
    wr32(sp0 - 0x418u, in_edi);
    wr32(sp0 - 0x41cu, 0x19u);
    wr32(sp0 - 0x420u, COW_IMG(0x1037e2f4u));
    g->eax = eax;
    g->esp = sp0 - 0x418u;
    t13 = cow_thiscall(g, COW_IMG(0x101d09e0u), eax, 2, COW_IMG(0x1037e2f4u), 0x19u);
    wr32(sp0 - 0x41cu, (uint16_t)arg2);
    g->ebx = arg2;
    g->edx = (uint16_t)arg2;
    cow_thiscall(g, COW_IMG(0x101d0a20u), rd32(self + 8u), 1, (uint16_t)arg2);
    t14 = g->edx;
    wr32(sp0 - 0x41cu, (uint16_t)arg1);
    g->ebx = arg2;
    g->eax = (uint16_t)arg1;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x101d0a20u), rd32(self + 8u), 1, (uint16_t)arg1);
    t16 = g->edx;
    wr32(sp0 - 0x41cu, 0xau);
    wr32(sp0 - 0x420u, COW_IMG(0x1037e310u));
    g->ebx = arg2;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x101d09e0u), rd32(self + 8u), 2, COW_IMG(0x1037e310u), 0xau);
    t18 = g->edx;
    wr32(sp0 - 0x41cu, 0xfeu);
    g->ebx = arg2;
    g->edx = t18;
    t19 = rd32(self + 8u);
    t20 = cow_thiscall(g, COW_IMG(0x101d0a40u), t19, 1, 0xfeu);
    t21 = g->ecx;
    t22 = g->edx;
    g->ebx = arg2;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x101d05e0u), t21, 0);
    t24 = g->ecx;
    t25 = g->edx;
    edi = t23;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t26 = ~ecx - 1u;
    wr32(sp0 - 0x41cu, t26 + 3u);
    g->ebx = arg2;
    g->eax = eax;
    g->edx = t25;
    t27 = rd32(self + 8u);
    t28 = cow_thiscall(g, COW_IMG(0x101d0a20u), t27, 1, t26 + 3u);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x41cu, t26 + 1u);
    g->ebx = arg2;
    g->edx = t30;
    t31 = cow_thiscall_cdecl(g, COW_IMG(0x101d05e0u), t29, 1, t26 + 1u);
    t32 = g->edx;
    wr32(sp0 - 0x420u, t31);
    g->ebx = arg2;
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x101d09e0u), rd32(self + 8u), 2, t31, rd32(sp0 - 0x41cu));
    t34 = g->edx;
    wr32(sp0 - 0x41cu, ebp);
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x101cf660u), self, 1, ebp);
    t36 = g->edx;
    g->ebx = arg2;
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x101cf870u), self, 0);
    t38 = g->edx;
    wr32(sp0 - 0x41cu, 0xeu);
    wr32(sp0 - 0x420u, COW_IMG(0x1037e31cu));
    g->ebx = arg2;
    g->edx = t38;
    cow_thiscall(g, COW_IMG(0x101d09e0u), rd32(self + 8u), 2, COW_IMG(0x1037e31cu), 0xeu);
    t39 = g->edx;
    wr32(sp0 - 0x404u, 0u);
    if ((int32_t)arg2 <= 0)
    {
        eax = 0u;
        edx = t39;
        goto L_101d05a3;
    }
    eax = 0u;
    edx = t39;
    loc_404 = 0u;
L_101d04b9: ;
    if ((int32_t)arg1 > 0)
    {
        ebp = 0u;
L_101d04d3: ;
        wr32(sp0 - 0x41cu, sp0 - 0x400u);
        wr32(sp0 - 0x420u, eax);
        wr32(sp0 - 0x424u, ebp);
        wr32(sp0 - 0x428u, arg3);
        wr32(sp0 - 0x42cu, arg2);
        wr32(sp0 - 0x430u, arg1);
        if (rd8(sp0 - 0x405u) == 0u)
        {
            loc_420 = eax;
            loc_424 = ebp;
            g->eax = arg3;
            g->edx = sp0 - 0x400u;
            g->esp = sp0 - 0x418u;
            t42 = cow_stdcall(g, COW_IMG(0x101cfdb0u), 6, arg1, arg2, arg3, loc_424, loc_420, sp0 - 0x400u);
            t43 = g->edx;
            eax = t42;
            edx = t43;
        }
        else
        {
            loc_420 = eax;
            loc_424 = ebp;
            g->eax = arg3;
            g->edx = sp0 - 0x400u;
            g->esp = sp0 - 0x418u;
            t40 = cow_thiscall(g, COW_IMG(0x101cfeb0u), self, 6, arg1, arg2, arg3, loc_424, loc_420, sp0 - 0x400u);
            t41 = g->edx;
            eax = t40;
            edx = t41;
        }
        wr32(sp0 - 0x41cu, sp0 - 0x400u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x418u;
        t44 = cow_thiscall(g, COW_IMG(0x101cfa00u), self, 1, sp0 - 0x400u);
        t45 = g->edx;
        eax = t44;
        edx = t45;
        ebx = 4u;
        edi = self + 0x1cu;
L_101d050e: ;
        wr32(sp0 - 0x41cu, edi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x418u;
        t46 = cow_stdcall(g, COW_IMG(0x101cff60u), 1, edi);
        t47 = g->edx;
        wr32(sp0 - 0x41cu, 0u);
        wr32(sp0 - 0x420u, edi);
        g->edx = t47;
        t48 = cow_thiscall(g, COW_IMG(0x101d01b0u), self, 2, edi, 0u);
        t49 = g->edx;
        wr32(sp0 - 0x41cu, 0u);
        wr32(sp0 - 0x420u, edi);
        g->edx = t49;
        t50 = cow_thiscall(g, COW_IMG(0x101d0210u), self, 2, edi, 0u);
        t51 = g->edx;
        if (ebx != 1u)
        {
            eax = t50;
            edx = t51;
            ebx = ebx - 1u;
            edi = edi + 0x100u;
            goto L_101d050e;
        }
        eax = t50;
        edx = t51;
        wr32(sp0 - 0x41cu, self + 0x41cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x418u;
        t52 = cow_stdcall(g, COW_IMG(0x101cff60u), 1, self + 0x41cu);
        t53 = g->edx;
        wr32(sp0 - 0x41cu, 1u);
        wr32(sp0 - 0x420u, self + 0x41cu);
        g->edx = t53;
        t54 = cow_thiscall(g, COW_IMG(0x101d01b0u), self, 2, self + 0x41cu, 1u);
        t55 = g->edx;
        wr32(sp0 - 0x41cu, 1u);
        wr32(sp0 - 0x420u, self + 0x41cu);
        g->edx = t55;
        t56 = cow_thiscall(g, COW_IMG(0x101d0210u), self, 2, self + 0x41cu, 1u);
        t57 = g->edx;
        wr32(sp0 - 0x41cu, self + 0x51cu);
        g->edx = t57;
        t58 = cow_stdcall(g, COW_IMG(0x101cff60u), 1, self + 0x51cu);
        t59 = g->edx;
        wr32(sp0 - 0x41cu, 2u);
        wr32(sp0 - 0x420u, self + 0x51cu);
        g->edx = t59;
        t60 = cow_thiscall(g, COW_IMG(0x101d01b0u), self, 2, self + 0x51cu, 2u);
        t61 = g->edx;
        wr32(sp0 - 0x41cu, 2u);
        wr32(sp0 - 0x420u, self + 0x51cu);
        g->edx = t61;
        cow_thiscall(g, COW_IMG(0x101d0210u), self, 2, self + 0x51cu, 2u);
        t62 = g->edx;
        if ((int32_t)(ebp + 0x10u) < (int32_t)arg1)
        {
            eax = rd32(sp0 - 0x404u);
            edx = t62;
            ebp = ebp + 0x10u;
            goto L_101d04cc;
        }
        eax = rd32(sp0 - 0x404u);
        edx = t62;
    }
    wr32(sp0 - 0x404u, eax + 0x10u);
    if ((int32_t)(eax + 0x10u) < (int32_t)arg2)
    {
        loc_404 = eax + 0x10u;
        eax = eax + 0x10u;
        goto L_101d04b9;
    }
    eax = eax + 0x10u;
L_101d05a3: ;
    g->ebx = arg2;
    g->esp = sp0 - 0x418u;
    t63 = cow_call_regs(g, COW_IMG(0x101d0a60u), eax, rd32(self + 8u), edx, 1, 0);
    t64 = g->edx;
    wr32(sp0 - 0x41cu, 2u);
    wr32(sp0 - 0x420u, COW_IMG(0x1037e32au));
    g->ebx = arg2;
    cow_thiscall(g, COW_IMG(0x101d09e0u), rd32(self + 8u), 2, COW_IMG(0x1037e32au), 2u);
    g->ebx = rd32(sp0 - 0x414u);
    g->esi = rd32(sp0 - 0x410u);
    g->edi = rd32(sp0 - 0x418u);
    g->ebp = rd32(sp0 - 0x40cu);
    return (int32_t)rd32(rd32(self + 8u) + 0xcu) >= (int32_t)rd32(rd32(self + 8u) + 0x10u);
L_101d04cc: ;
    loc_404 = rd32(sp0 - 0x404u);
    goto L_101d04d3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d0370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d0370(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
