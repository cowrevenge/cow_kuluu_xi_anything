/* f_0x1019e290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_1019e290(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d19;
    double d21;
    double d40;
    double d49;
    double d52;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t2;
    uint32_t t20;
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
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t53;
    uint32_t t54;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 8u, 0u);
    if (rd32(self + 4u) == 0u)
    {
        ecx = (self & 0xffffff00u) | rd8(arg5);
        goto L_1019e3e8;
    }
    ecx = (self & 0xffffff00u) | rd8(arg5);
    if ((uint8_t)ecx == 0u)
    {
        edi = 0u;
        goto L_1019e4b7;
    }
    edx = in_edx;
    ebx = rd32(sp0 + 4u);
    edi = 0u;
    loc_8 = 0u;
L_1019e2bc: ;
    t1 = (edx & 0xffffff00u) | rd8(arg5 + edi);
    wr32(sp0 - 0x20u, t1);
    g->ecx = self;
    g->edx = t1;
    g->esp = sp0 - 0x1cu;
    t2 = cow_call_regs(g, COW_IMG(0x1019e040u), arg5, g->ecx, g->edx, 0, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        if (eax != 0xfffffffeu)
        {
            if ((uint8_t)edx == 0x20u)
            {
                g->edx = edx;
                d21 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a40cu)));
                fpush(g, d21);
                g->esp = sp0 - 0x1cu;
                t22 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t23 = g->edx;
                edx = t23;
                ebx = ebx + t22;
            }
        }
        else
        {
            edi = self + 8u;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            t12 = ~ecx - 1u;
            wr32(sp0 + 4u, t12);
            if ((int32_t)t12 <= 32)
            {
                edx = t12;
            }
            else
            {
                wr32(sp0 + 4u, 0x1fu);
                wr8(self + 0x27u, (uint8_t)eax);
                edx = rd32(sp0 + 4u);
            }
            if ((int32_t)edx < 0) goto L_1019e3ad;
            edi = 0u;
L_1019e34d: ;
            t13 = (eax & 0xffffff00u) | rd8(edi + self + 8u);
            wr32(sp0 - 0x20u, t13);
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t14 = cow_call_regs(g, COW_IMG(0x1019e040u), t13, g->ecx, g->edx, 0, 1, t13);
            t15 = g->edx;
            if ((int32_t)t14 < 0)
            {
                eax = t14;
                edx = t15;
            }
            else
            {
                eax = t14;
                wr32(sp0 - 0x20u, 0u);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, arg6);
                wr32(sp0 - 0x30u, arg4);
                wr32(sp0 - 0x34u, arg3);
                wr32(sp0 - 0x38u, arg2);
                wr32(sp0 - 0x3cu, ebx);
                t16 = rd32(eax * 4u + rd32(rd32(self + 4u)));
                g->eax = arg2;
                g->esp = sp0 - 0x1cu;
                t17 = cow_thiscall(g, COW_IMG(0x1011fc80u), t16, 8, ebx, arg2, arg3, arg4, arg6, 0u, 0u, 0u);
                t18 = (uint32_t)(int16_t)rd16(t16 + 0x22u) - (uint32_t)(int16_t)rd16(t16 + 0x20u);
                wr32(sp0 - 0xcu, t18);
                d19 = fr(g, (double)(int32_t)t18 * (double)rdf32(sp0 + 0xcu));
                fpush(g, d19);
                t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), t17, g->ecx, g->edx, 1, 0);
                eax = t20;
                edx = rd32(sp0 + 4u);
                ebx = ebx + t20;
            }
            if ((int32_t)(edi + 1u) <= (int32_t)edx)
            {
                edi = edi + 1u;
                goto L_1019e34d;
            }
L_1019e3ad: ;
            edi = rd32(sp0 - 8u);
        }
    }
    else
    {
        eax = t2;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, arg6);
        wr32(sp0 - 0x30u, arg4);
        wr32(sp0 - 0x34u, arg3);
        wr32(sp0 - 0x38u, arg2);
        wr32(sp0 - 0x3cu, ebx);
        t5 = rd32(eax * 4u + rd32(rd32(self + 4u)));
        g->eax = arg2;
        g->esp = sp0 - 0x1cu;
        t6 = cow_thiscall(g, COW_IMG(0x1011fc80u), t5, 8, ebx, arg2, arg3, arg4, arg6, 0u, 0u, 0u);
        t7 = (uint32_t)(int16_t)rd16(t5 + 0x22u) - (uint32_t)(int16_t)rd16(t5 + 0x20u);
        t8 = rd16(t5 + 0x20u);
        wr32(sp0 + 4u, t7);
        g->edx = (uint32_t)(int16_t)t8;
        d9 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 + 0xcu));
        fpush(g, d9);
        t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
        t11 = g->edx;
        edx = t11;
        ebx = ebx + t10;
    }
    wr32(sp0 - 8u, edi + 1u);
    if (rd8(arg5 + edi + 1u) != 0u)
    {
        loc_8 = edi + 1u;
        edi = edi + 1u;
        goto L_1019e2bc;
    }
    edi = edi + 1u;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return edi;
L_1019e3e8: ;
    t24 = rd32(sp0 + 4u);
    t25 = rd32(sp0 - 0xcu);
    wr32(sp0 + 4u, t24);
    if ((uint8_t)ecx == 0u)
    {
        edi = 0u;
        goto L_1019e4b7;
    }
    edx = in_edx;
    esi = t24;
    edi = 0u;
    loc_8 = 0u;
    loc_c = t25 & 0xff00ffffu;
L_1019e3fd: ;
    t26 = (edx & 0xffffff00u) | rd8(arg5 + edi);
    wr32(sp0 - 0x20u, t26);
    g->ecx = self;
    g->edx = t26;
    g->esp = sp0 - 0x1cu;
    t27 = cow_call_regs(g, COW_IMG(0x1019e150u), arg5, g->ecx, g->edx, 0, 1, t26);
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint16_t)t27 != 0xfffeu)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        if ((uint16_t)eax == 0xffffu)
        {
            if ((uint8_t)edx == 0x20u)
            {
                g->edx = edx;
                d52 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a40cu)));
                fpush(g, d52);
                g->esp = sp0 - 0x1cu;
                t53 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t54 = g->edx;
                wr32(sp0 + 4u, esi + t53);
                edx = t54;
                esi = esi + t53;
            }
        }
        else
        {
            wr32(sp0 - 0x20u, arg4);
            wr32(sp0 - 0x24u, arg3);
            wr32(sp0 - 0x28u, arg6);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, sp0 - 0xcu);
            wr32(sp0 - 0x34u, arg2);
            wr32(sp0 - 0x38u, esi);
            g->eax = sp0 - 0xcu;
            g->ecx = arg2;
            t43 = rd32(sp0 - 0xcu);
            g->esp = sp0 - 0xcu;
            t44 = cow_cdecl(g, COW_IMG(0x10129f40u), 11, esi, arg2, sp0 - 0xcu, 0u, arg6, arg3, arg4, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
            t45 = g->ecx;
            wr32(sp0 - 0x3cu, sp0 - 0xcu);
            g->ecx = t45;
            g->edx = sp0 - 0xcu;
            g->esp = sp0 - 0x38u;
            t46 = cow_cdecl(g, COW_IMG(0x10129ee0u), 1, sp0 - 0xcu);
            t47 = g->ecx;
            t48 = g->edx;
            wr32(sp0 - 4u, t46);
            g->edx = t48;
            d49 = fr(g, fr(g, (double)(int32_t)t46 * (double)rdf32(sp0 + 0xcu)) + (double)(int32_t)rd32(sp0 + 4u));
            fpush(g, d49);
            g->esp = sp0 - 0x1cu;
            t50 = cow_call_regs(g, COW_IMG(0x10311c6cu), t46, g->ecx, g->edx, 1, 0);
            t51 = g->edx;
            wr32(sp0 + 4u, t50);
            edx = t51;
            esi = t50;
        }
    }
    else
    {
        ecx = t28;
        edx = t29;
        edi = self + 8u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t30 = ~ecx - 1u;
        if ((int32_t)t30 <= 32)
        {
            ebx = t30;
        }
        else
        {
            wr8(self + 0x27u, (uint8_t)eax);
            ebx = 0x1fu;
        }
        if ((int32_t)ebx < 0) goto L_1019e4a0;
        edi = 0u;
L_1019e434: ;
        t31 = (eax & 0xffffff00u) | rd8(edi + self + 8u);
        wr32(sp0 - 0x20u, t31);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t32 = cow_call_regs(g, COW_IMG(0x1019e150u), t31, g->ecx, g->edx, 0, 1, t31);
        t33 = g->edx;
        if ((uint16_t)t32 == 0xffffu)
        {
            eax = t32;
            edx = t33;
        }
        else
        {
            eax = t32;
            wr32(sp0 - 0x20u, arg4);
            wr32(sp0 - 0x24u, arg3);
            wr32(sp0 - 0x28u, arg6);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, sp0 - 0xcu);
            wr32(sp0 - 0x34u, arg2);
            wr32(sp0 - 0x38u, esi);
            g->eax = arg2;
            g->edx = sp0 - 0xcu;
            t34 = rd32(sp0 - 0xcu);
            g->esp = sp0 - 0xcu;
            t35 = cow_cdecl(g, COW_IMG(0x10129f40u), 11, esi, arg2, sp0 - 0xcu, 0u, arg6, arg3, arg4, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
            t36 = g->edx;
            wr32(sp0 - 0x3cu, sp0 - 0xcu);
            g->ecx = sp0 - 0xcu;
            g->edx = t36;
            g->esp = sp0 - 0x38u;
            t37 = cow_cdecl(g, COW_IMG(0x10129ee0u), 1, sp0 - 0xcu);
            t38 = g->ecx;
            t39 = g->edx;
            wr32(sp0 - 4u, t37);
            g->edx = t39;
            d40 = fr(g, fr(g, (double)(int32_t)t37 * (double)rdf32(sp0 + 0xcu)) + (double)(int32_t)rd32(sp0 + 4u));
            fpush(g, d40);
            g->esp = sp0 - 0x1cu;
            t41 = cow_call_regs(g, COW_IMG(0x10311c6cu), t37, g->ecx, g->edx, 1, 0);
            t42 = g->edx;
            wr32(sp0 + 4u, t41);
            eax = t41;
            edx = t42;
            esi = t41;
        }
        if ((int32_t)(edi + 1u) <= (int32_t)ebx)
        {
            edi = edi + 1u;
            goto L_1019e434;
        }
L_1019e4a0: ;
        edi = rd32(sp0 - 8u);
    }
    wr32(sp0 - 8u, edi + 1u);
    if (rd8(arg5 + edi + 1u) != 0u)
    {
        loc_8 = edi + 1u;
        edi = edi + 1u;
        goto L_1019e3fd;
    }
    edi = edi + 1u;
L_1019e4b7: ;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019e290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019e290(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
