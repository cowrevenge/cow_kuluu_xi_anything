/* f_0x101dd780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101dd780(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_d4;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 236u);

    wr32(sp0 - 0xc0u, in_ebx);
    wr32(sp0 - 0xc4u, in_ebp);
    wr32(sp0 - 0xc8u, in_edi);
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr8(sp0 - 0xbcu, 0xccu);
    wr8(sp0 - 0xbbu, 3u);
    wr8(sp0 - 0xbau, 0u);
    if (~ecx == 1u)
    {
        esi = in_esi;
    }
    else
    {
        ecx = ~ecx - 1u;
        wr32(sp0 - 0xccu, in_esi);
        if (arg2 == 0u) goto L_101dd94e;
        if ((rd8(arg2) & 0x40u) == 0u) goto L_101dd94e;
        if ((rd32(arg2 + 0x30u) >> 8u & 0x40u) == 0u)
        {
            eax = rd32(arg2 + 0x30u);
            if (rd8(arg2 + 0x21u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(arg2 + 0x25u);
                if (!(eax & 1u))
                {
                    t28 = rd8(arg2 + 0x22u);
                    wr32(sp0 - 0xd0u, t28);
                    wr32(sp0 - 0xd4u, 0x59u);
                    wr32(sp0 - 0xd8u, 0xau);
                    g->eax = t28;
                    g->edx = in_edx;
                    g->esp = sp0 - 0xd0u;
                    t29 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x59u);
                    t30 = g->edx;
                    wr32(sp0 - 0xd4u, t29);
                    wr32(sp0 - 0xd8u, sp0 - 0xb8u);
                    eax = t29;
                    ecx = sp0 - 0xb8u;
                    edx = t30;
                    loc_d4 = t29;
                }
                else
                {
                    t25 = rd8(arg2 + 0x24u);
                    wr32(sp0 - 0xd0u, t25);
                    wr32(sp0 - 0xd4u, 0x7au);
                    wr32(sp0 - 0xd8u, 0xau);
                    g->eax = eax;
                    g->ecx = t25;
                    g->esp = sp0 - 0xd0u;
                    t26 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x7au);
                    t27 = g->ecx;
                    wr32(sp0 - 0xd4u, t26);
                    wr32(sp0 - 0xd8u, sp0 - 0xb8u);
                    eax = t26;
                    ecx = t27;
                    edx = sp0 - 0xb8u;
                    loc_d4 = t26;
                }
                g->ebx = 3u;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0xc4u;
                t31 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xb8u, loc_d4, rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u));
                t32 = g->ecx;
                t33 = g->edx;
                if (rd8(arg2 + 0x20u) != 0x17u)
                {
                    eax = (t31 & 0xffffff00u) | rd8(arg2 + 0x20u);
                    ecx = t32;
                    edx = t33;
                    wr32(sp0 - 0xd0u, (uint8_t)eax);
                    wr32(sp0 - 0xd4u, 0x12u);
                    g->eax = (uint8_t)eax;
                    g->edx = edx;
                    g->esp = sp0 - 0xccu;
                    t35 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x12u, (uint8_t)eax);
                    t36 = g->edx;
                    wr32(sp0 - 0xd8u, t35);
                    wr32(sp0 - 0xdcu, sp0 - 0xb8u);
                    wr32(sp0 - 0xe0u, arg2 + 4u);
                    wr32(sp0 - 0xe4u, COW_IMG(0x1037f14cu));
                    wr32(sp0 - 0xe8u, sp0 - 0xa8u);
                    g->ebx = 3u;
                    g->edx = t36;
                    g->esp = sp0 - 0xd4u;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xa8u, COW_IMG(0x1037f14cu), arg2 + 4u, sp0 - 0xb8u, t35);
                    t37 = g->edx;
                    edx = t37;
                }
                else
                {
                    eax = (t31 & 0xffffff00u) | rd8(arg2 + 0x20u);
                    ecx = t32;
                    wr32(sp0 - 0xd0u, arg2 + 4u);
                    wr32(sp0 - 0xd4u, COW_IMG(0x1037f16cu));
                    wr32(sp0 - 0xd8u, sp0 - 0xa8u);
                    g->ebx = 3u;
                    g->edx = sp0 - 0xa8u;
                    g->esp = sp0 - 0xc4u;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xa8u, COW_IMG(0x1037f16cu), arg2 + 4u, rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u));
                    t34 = g->edx;
                    edx = t34;
                }
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(arg2 + 0x25u);
                if (!(eax & 1u))
                {
                    t5 = rd8(arg2 + 0x22u);
                    wr32(sp0 - 0xd0u, t5);
                    wr32(sp0 - 0xd4u, 0x59u);
                    wr32(sp0 - 0xd8u, 0xau);
                    g->eax = t5;
                    g->edx = in_edx;
                    g->esp = sp0 - 0xd0u;
                    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x59u);
                    t7 = g->edx;
                    wr32(sp0 - 0xd4u, t6);
                    wr32(sp0 - 0xd8u, sp0 - 0xb8u);
                    eax = t6;
                    ecx = sp0 - 0xb8u;
                    edx = t7;
                    loc_d4 = t6;
                }
                else
                {
                    t2 = rd8(arg2 + 0x24u);
                    wr32(sp0 - 0xd0u, t2);
                    wr32(sp0 - 0xd4u, 0x7au);
                    wr32(sp0 - 0xd8u, 0xau);
                    g->eax = eax;
                    g->ecx = t2;
                    g->esp = sp0 - 0xd0u;
                    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x7au);
                    t4 = g->ecx;
                    wr32(sp0 - 0xd4u, t3);
                    wr32(sp0 - 0xd8u, sp0 - 0xb8u);
                    eax = t3;
                    ecx = t4;
                    edx = sp0 - 0xb8u;
                    loc_d4 = t3;
                }
                g->ebx = 3u;
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0xc4u;
                t8 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xb8u, loc_d4, rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u));
                t9 = g->ecx;
                t10 = rd8(arg2 + 0x23u);
                wr32(sp0 - 0xd0u, t10);
                wr32(sp0 - 0xd4u, 0x59u);
                wr32(sp0 - 0xd8u, 0xau);
                g->ecx = t9;
                g->edx = t10;
                g->esp = sp0 - 0xd0u;
                t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x59u);
                t12 = g->ecx;
                t13 = g->edx;
                wr32(sp0 - 0xd4u, t11);
                wr32(sp0 - 0xd8u, sp0 - 0xb0u);
                g->ebx = 3u;
                g->eax = sp0 - 0xb0u;
                g->ecx = t12;
                g->edx = t13;
                g->esp = sp0 - 0xc4u;
                t14 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xb0u, t11, rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u));
                t15 = g->ecx;
                t16 = g->edx;
                if (rd8(arg2 + 0x20u) != 0x17u)
                {
                    eax = (t14 & 0xffffff00u) | rd8(arg2 + 0x20u);
                    ecx = t15;
                    t18 = rd8(arg2 + 0x21u);
                    wr32(sp0 - 0xd0u, t18);
                    wr32(sp0 - 0xd4u, 0x12u);
                    g->eax = eax;
                    g->edx = t18;
                    g->esp = sp0 - 0xccu;
                    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x12u, t18);
                    t20 = g->edx;
                    wr32(sp0 - 0xd0u, t19);
                    wr32(sp0 - 0xd4u, sp0 - 0xb0u);
                    t21 = rd8(arg2 + 0x20u);
                    wr32(sp0 - 0xd8u, t21);
                    wr32(sp0 - 0xdcu, 0x12u);
                    g->eax = sp0 - 0xb0u;
                    g->ecx = t21;
                    g->esp = sp0 - 0xd4u;
                    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x12u, t21);
                    t23 = g->ecx;
                    wr32(sp0 - 0xd8u, t22);
                    wr32(sp0 - 0xdcu, sp0 - 0xb8u);
                    wr32(sp0 - 0xe0u, arg2 + 4u);
                    wr32(sp0 - 0xe4u, COW_IMG(0x1037f158u));
                    wr32(sp0 - 0xe8u, sp0 - 0xa8u);
                    g->ebx = 3u;
                    g->edx = sp0 - 0xb8u;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xa8u, COW_IMG(0x1037f158u), arg2 + 4u, sp0 - 0xb8u, t22);
                    t24 = g->edx;
                    edx = t24;
                }
                else
                {
                    eax = (t14 & 0xffffff00u) | rd8(arg2 + 0x20u);
                    edx = t16;
                    wr32(sp0 - 0xd0u, arg2 + 4u);
                    wr32(sp0 - 0xd4u, COW_IMG(0x1037f16cu));
                    wr32(sp0 - 0xd8u, sp0 - 0xa8u);
                    g->ebx = 3u;
                    g->edx = edx;
                    g->esp = sp0 - 0xc4u;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xa8u, COW_IMG(0x1037f16cu), arg2 + 4u, rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u));
                    t17 = g->edx;
                    edx = t17;
                }
            }
        }
        else
        {
            wr32(sp0 - 0xd0u, arg2 + 4u);
            wr32(sp0 - 0xd4u, COW_IMG(0x1037f174u));
            wr32(sp0 - 0xd8u, sp0 - 0xa8u);
            g->ebx = 3u;
            g->edx = in_edx;
            g->esp = sp0 - 0xc4u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xa8u, COW_IMG(0x1037f174u), arg2 + 4u, in_esi, in_edi);
            t1 = g->edx;
            edx = t1;
        }
L_101dd960: ;
        wr32(sp0 - 0xd0u, 0u);
        wr32(sp0 - 0xd4u, 1u);
        wr32(sp0 - 0xd8u, 0u);
        wr32(sp0 - 0xdcu, sp0 - 0xbcu);
        wr32(sp0 - 0xe0u, sp0 - 0xa8u);
        g->ebx = 3u;
        g->esp = sp0 - 0xccu;
        cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0xa8u, sp0 - 0xbcu, 0u, 1u, 0u);
        ebx = 3u;
        ebp = arg1;
L_101dd97b: ;
        esi = ebp;
        edi = sp0 - 0xa8u;
        ecx = 0xau;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        eax = 0x27u;
L_101dd98d: ;
        if (rd8(eax + sp0 - 0xa8u) != 0x20u) goto L_101dd997;
        if ((int32_t)(eax - 1u) >= 0)
        {
            eax = eax - 1u;
            goto L_101dd98d;
        }
        eax = eax - 1u;
L_101dd997: ;
        wr8(eax + sp0 - 0xa7u, 0u);
        edi = sp0 - 0xa8u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        wr32(sp0 - 0xd0u, 0u);
        wr32(sp0 - 0xd4u, 1u);
        wr32(sp0 - 0xd8u, 0x52u);
        wr32(sp0 - 0xdcu, sp0 - 0x54u);
        t39 = ~ecx - 1u;
        wr32(sp0 - 0xe0u, t39);
        wr32(sp0 - 0xe4u, sp0 - 0xa8u);
        g->eax = sp0 - 0xa8u;
        g->edx = sp0 - 0x54u;
        g->esp = sp0 - 0xccu;
        t40 = cow_thiscall(g, COW_IMG(0x101b7280u), rd32(COW_IMG(0x10662d40u)), 6, sp0 - 0xa8u, t39, sp0 - 0x54u, 0x52u, 1u, 0u);
        t41 = g->edx;
        wr32(sp0 - 0xd0u, sp0 - 0x54u);
        t42 = cow_thiscall_cdecl(g, COW_IMG(0x101c8f40u), sp0 - 0x54u, 1, sp0 - 0x54u);
        t43 = g->ecx;
        wr32(sp0 - 0xd4u, sp0 - 0x54u);
        g->ecx = t43;
        g->edx = sp0 - 0x54u;
        g->esp = sp0 - 0xd0u;
        cow_call_regs(g, COW_IMG(0x101ba200u), t42, g->ecx, g->edx, 1, 1, sp0 - 0x54u);
        t44 = g->ecx;
        t45 = g->edx;
        wr32(sp0 - 0xd8u, 0u);
        wr32(sp0 - 0xdcu, sp0 - 0x54u);
        wr32(sp0 - 0xe0u, 0x14fu);
        g->eax = sp0 - 0x54u;
        g->esp = sp0 - 0xb8u;
        t46 = cow_thiscall_cdecl(g, COW_IMG(0x101ca570u), t44, 10, 0x14fu, sp0 - 0x54u, 0u, sp0 - 0x54u, sp0 - 0x54u, rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu));
        t47 = g->ecx;
        edi = sp0 - 0x54u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = sp0 - 0xccu < sp0 - 0xe0u;
        pf = PARITY((uint8_t)(sp0 - 0xccu));
        af = (sp0 - 0xe0u ^ 0x14u ^ sp0 - 0xccu) >> 4u & 1u;
        zf = sp0 == 0xccu;
        sf = (int32_t)(sp0 - 0xccu) < 0;
        of = ((sp0 - 0xe0u ^ sp0 - 0xccu) & (sp0 - 0xccu ^ 0x14u)) >> 0x1fu;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if (t46 == ~ecx - 1u)
        {
            ecx = ~ecx - 1u;
        }
        else
        {
            edx = t46;
            wr32(sp0 - 0xd0u, COW_IMG(0x1036c9a4u));
            t48 = edx + sp0 - 0x54u;
            wr32(sp0 - 0xd4u, t48);
            g->ebx = ebx;
            g->ecx = t48;
            g->esp = sp0 - 0xc0u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, t48, COW_IMG(0x1036c9a4u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u));
            t49 = g->ecx;
            ecx = t49;
        }
        wr32(sp0 - 0xd0u, 0x52u);
        edi = sp0 - 0x54u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t50 = ~ecx - 1u;
        wr32(sp0 - 0xd4u, t50);
        wr32(sp0 - 0xd8u, sp0 - 0x54u);
        g->esp = sp0 - 0xccu;
        cow_call_regs(g, COW_IMG(0x10190140u), g->eax, g->ecx, sp0 - 0x54u, 1, 3, sp0 - 0x54u, t50, 0x52u);
        t51 = g->edx;
        wr32(sp0 - 0xd0u, 0u);
        wr32(sp0 - 0xd4u, 1u);
        wr32(sp0 - 0xd8u, 1u);
        wr32(sp0 - 0xdcu, sp0 - 0xbcu);
        wr32(sp0 - 0xe0u, sp0 - 0x54u);
        g->ebx = ebx;
        cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x54u, sp0 - 0xbcu, 1u, 1u, 0u);
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            ebp = ebp + 0x28u;
            goto L_101dd97b;
        }
        esi = rd32(sp0 - 0xccu);
    }
    g->ebx = in_ebx;
    g->esi = esi;
    return;
L_101dd94e: ;
    wr32(sp0 - 0xd0u, COW_IMG(0x1037f144u));
    wr32(sp0 - 0xd4u, sp0 - 0xa8u);
    g->ebx = 3u;
    g->edx = sp0 - 0xa8u;
    g->esp = sp0 - 0xc0u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xa8u, COW_IMG(0x1037f144u), in_esi, in_edi, in_ebp);
    t38 = g->edx;
    edx = t38;
    goto L_101dd960;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dd780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101dd780(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
