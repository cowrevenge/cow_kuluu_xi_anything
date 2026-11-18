/* f_0x10083f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10083f20(Guest* g)
{
    double d43;
    double d46;
    double d47;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_54;
    uint32_t loc_58;
    double loc_58_f;
    uint32_t loc_68;
    uint32_t loc_6c;
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
    uint32_t t44;
    uint32_t t45;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 132u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10083f34u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x60u); goto E_10083f34;
    case 0x10083f39u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x60u); goto E_10083f39;
    case 0x10083fabu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10083fab;
    case 0x10083fb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_10083fb1;
    case 0x10083fd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10083fd8;
    case 0x10083fdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10083fdc;
    case 0x10083febu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10083feb;
    case 0x10083ff3u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10083ff3;
    case 0x10084003u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10084003;
    case 0x10084007u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10084007;
    case 0x10084011u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10084011;
    case 0x10084015u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10084015;
    case 0x1008401fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1008401f;
    case 0x10084023u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10084023;
    case 0x1008402du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1008402d;
    case 0x10084037u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10084037;
    case 0x1008403bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1008403b;
    case 0x10084044u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10084044;
    case 0x10084048u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10084048;
    case 0x1008404cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1008404c;
    case 0x10084050u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10084050;
    case 0x10084055u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10084055;
    case 0x1008405bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1008405b;
    case 0x10084060u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10084060;
    case 0x10084062u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10084062;
    case 0x10084064u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10084064;
    case 0x10084082u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10084082;
    case 0x100840acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_100840ac;
    case 0x100840cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); goto E_100840cb;
    case 0x100840d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); goto E_100840d5;
    case 0x100840d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_58_f = rdf32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_100840d7;
    case 0x100840e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_100840e8;
    case 0x100840eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_100840ea;
    default: break;
    }
#endif

    COW_AT(10083f20)
    wr32(sp0 - 0x60u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x60u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        esi = t1;
        goto L_10083f39;
    }
    eax = t1;
    COW_AT(10083f34)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax;
L_10083f39: ;
    COW_AT(10083f39)
    wr32(sp0 - 0x64u, in_edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t3 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t5 = g->edx;
    g->eax = rd32(esi);
    g->edx = t5;
    t6 = rd32(esi);
    t7 = cow_thiscall(g, rd32(t6 + 0x1c0u), esi, 0);
    t8 = g->edx;
    t9 = rd32(t7 + 4u);
    wr32(sp0 - 0x68u, t9);
    t10 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t9);
    g->edx = rd32(esi);
    t11 = rd32(esi);
    t12 = cow_thiscall(g, rd32(t11 + 0x1bcu), esi, 0);
    t13 = g->edx;
    wr32(sp0 - 0x68u, t12);
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x10027cd0u), sp0 - 0x40u, 1, t12);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x100283c0u), sp0 - 0x40u, 0);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, 0x451c4000u);
    g->ecx = t17;
    g->edx = t18;
    t19 = cow_call_regs(g, COW_IMG(0x101cc510u), t16, g->ecx, g->edx, 1, 0);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x50u, t19);
    t22 = rd32(esi + 0x70u);
    t23 = cow_call_regs(g, COW_IMG(0x10085240u), g->eax, g->ecx, t21, 1, 0);
    t24 = g->edx;
    if (t23 == 0u)
    {
        eax = t23;
        edx = t24;
        ebx = in_ebx;
        ebp = in_ebp;
        loc_54 = 0u;
    }
    else
    {
        eax = t23;
        esi = t23;
        edi = t22;
    COW_AT(10083fab)
        wr32(sp0 - 0x68u, in_ebx);
        wr32(sp0 - 0x6cu, in_ebp);
        ebx = in_ebx;
        loc_54 = 0u;
        loc_58 = 0x451c4000u;
        loc_68 = in_ebx;
        loc_6c = in_ebp;
L_10083fb1: ;
    COW_AT(10083fb1)
        g->eax = eax;
        g->edx = rd32(esi + 0x70u);
        t25 = rd32(esi + 0x70u);
        g->esp = sp0 - 0x6cu;
        t26 = cow_thiscall(g, COW_IMG(0x10082fa0u), esi, 0);
        t27 = g->ecx;
        t28 = g->edx;
        g->edx = t28;
        t29 = cow_thiscall(g, COW_IMG(0x10082fa0u), t27, 0);
        t30 = g->edx;
        wr8(sp0 - 0x59u, (t29 & 0xff000000u) != 0u);
        if (edi == 0u)
        {
            eax = t29 & 0xffffff00u;
            edx = t30;
            ebx = (ebx & 0xffffff00u) | (t26 & 0xff000000u) == 0u;
        }
        else
        {
            eax = t29 & 0xffffff00u;
            edx = t30;
            ebx = (ebx & 0xffffff00u) | (t26 & 0xff000000u) == 0u;
    COW_AT(10083fd8)
            if (edx != 0u)
            {
    COW_AT(10083fdc)
                if ((rd32(edi + 0x1d0u) & 0x400u) == 0u)
                {
                    eax = 0x400u;
                    ecx = rd32(edi + 0x1d0u);
                    goto L_10084007;
                }
                ecx = rd32(edi + 0x1d0u);
    COW_AT(10083feb)
                if ((rd32(edx + 0x1d0u) & 0x400u) == 0u)
                {
                    eax = 0x400u;
                    goto L_10084007;
                }
    COW_AT(10083ff3)
                if (rd8(edi + 0x1ffu) != rd8(edx + 0x1ffu))
                {
                    eax = rd8(edi + 0x1ffu) | 0x400u;
                    ecx = (ecx & 0xffffff00u) | rd8(edx + 0x1ffu);
                    goto L_10084007;
                }
                eax = rd8(edi + 0x1ffu) | 0x400u;
    COW_AT(10084003)
                eax = eax & 0xffffff00u;
            }
        }
L_10084048: ;
    COW_AT(10084048)
        if (arg3 != 0u) goto L_10084050;
    COW_AT(1008404c)
        zf = (uint8_t)ebx == 0u;
L_10084062: ;
    COW_AT(10084062)
        if (zf)
        {
            loc_58_f = (double)rdf32(sp0 - 0x58u);
            loc_54 = rd32(sp0 - 0x54u);
            goto L_100840d7;
        }
L_10084064: ;
    COW_AT(10084064)
        wr32(sp0 - 0x70u, 1u);
        wr32(sp0 - 0x74u, arg2);
        wr32(sp0 - 0x78u, arg1);
        t35 = rd32(sp0 - 0x50u);
        wr32(sp0 - 0x7cu, t35);
        wr32(sp0 - 0x80u, esi);
        g->eax = t35;
        g->edx = arg1;
        g->esp = sp0 - 0x6cu;
        t36 = cow_cdecl(g, COW_IMG(0x10083430u), 5, esi, t35, arg1, arg2, 1u);
        t37 = g->edx;
        if ((uint8_t)t36 == 0u)
        {
            eax = t36;
            edx = t37;
            loc_58_f = (double)rdf32(sp0 - 0x58u);
            loc_54 = rd32(sp0 - 0x54u);
        }
        else
        {
            eax = t36;
    COW_AT(10084082)
            g->eax = eax;
            g->edx = rd32(esi);
            t38 = rd32(esi);
            g->esp = sp0 - 0x6cu;
            t39 = cow_thiscall(g, rd32(t38 + 0x1bcu), esi, 0);
            t40 = g->edx;
            wr32(sp0 - 0x70u, t39);
            wr32(sp0 - 0x74u, sp0 - 0x4cu);
            g->eax = sp0 - 0x4cu;
            g->edx = t40;
            t41 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x4cu, t39);
            t42 = g->edx;
            d43 = (double)rdf32(sp0 - 0x4cu);
            if (d43 < (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (t41 & 0xffff0000u) | (uint16_t)cow_fsw(g, d43, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                edx = t42;
                loc_58_f = (double)rdf32(sp0 - 0x58u);
                loc_54 = rd32(sp0 - 0x54u);
            }
            else
            {
                eax = (t41 & 0xffff0000u) | (uint16_t)cow_fsw(g, d43, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100840ac)
                wr32(sp0 - 0x70u, sp0 - 0x4cu);
                wr32(sp0 - 0x74u, sp0 - 0x4cu);
                g->eax = eax;
                g->edx = sp0 - 0x4cu;
                g->esp = sp0 - 0x6cu;
                t44 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x4cu, sp0 - 0x4cu);
                t45 = g->edx;
                d46 = cow_take_float(g);
                d47 = (double)rdf32(sp0 - 0x58u);
                if (!(d46 < d47))
                {
                    eax = (t44 & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, d47, 1u);
                    edx = t45;
                    x0 = d46;
    COW_AT(100840d5)
                    loc_58_f = (double)rdf32(sp0 - 0x58u);
                    loc_54 = rd32(sp0 - 0x54u);
                }
                else
                {
                    eax = (t44 & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, d47, 1u);
                    edx = t45;
                    x0 = d46;
    COW_AT(100840cb)
                    wrf32(sp0 - 0x58u, (float)(double)(float)x0);
                    wr32(sp0 - 0x54u, esi);
                    loc_58_f = (double)(float)x0;
                    loc_54 = esi;
                }
            }
        }
L_100840d7: ;
    COW_AT(100840d7)
        g->eax = eax;
        g->esp = sp0 - 0x6cu;
        t48 = cow_fastcall(g, COW_IMG(0x10085270u), esi, edx, 0);
        t49 = g->edx;
        if (t48 != 0u)
        {
            eax = t48;
            esi = t48;
            loc_54 = rd32(sp0 - 0x54u);
            loc_58 = rd32(sp0 - 0x58u);
            loc_68 = rd32(sp0 - 0x68u);
            loc_6c = rd32(sp0 - 0x6cu);
            goto L_10083fb1;
        }
        eax = t48;
        edx = t49;
    COW_AT(100840e8)
        ebx = rd32(sp0 - 0x68u);
        ebp = rd32(sp0 - 0x6cu);
        loc_54 = rd32(sp0 - 0x54u);
    }
    COW_AT(100840ea)
    g->esp = sp0 - 0x64u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x60u);
    g->edi = rd32(sp0 - 0x64u);
    g->ebp = ebp;
    return rd32(sp0 - 0x54u);
L_10084007: ;
    COW_AT(10084007)
    if (rd8(edi + 0x1ffu) < 8u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 0x1ffu);
        goto L_1008402d;
    }
    eax = (eax & 0xffffff00u) | rd8(edi + 0x1ffu);
    COW_AT(10084011)
    if ((uint8_t)eax > 9u) goto L_1008402d;
    COW_AT(10084015)
    if (rd8(edx + 0x1ffu) < 8u)
    {
        eax = (eax & 0xffffff00u) | rd8(edx + 0x1ffu);
        goto L_1008402d;
    }
    eax = (eax & 0xffffff00u) | rd8(edx + 0x1ffu);
    COW_AT(1008401f)
    if ((uint8_t)eax > 9u) goto L_1008402d;
    COW_AT(10084023)
    wr32(sp0 - 0x70u, edx);
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    t31 = cow_call_regs(g, COW_IMG(0x1008e8d0u), eax, edi, g->edx, 0, 1, edx);
    t32 = g->edx;
    eax = t31;
    edx = t32;
L_10084044: ;
    COW_AT(10084044)
    goto L_10084048;
L_1008402d: ;
    COW_AT(1008402d)
    if (rd16(edx + 0x210u) == 0u) goto L_1008403b;
    COW_AT(10084037)
    eax = eax & 0xffffff00u;
    goto L_10084048;
L_1008403b: ;
    COW_AT(1008403b)
    wr32(sp0 - 0x70u, edx);
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t33 = cow_call_regs(g, COW_IMG(0x101cc220u), eax, g->ecx, g->edx, 1, 3, edx, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t34 = g->edx;
    eax = t33;
    edx = t34;
    goto L_10084044;
L_10084050: ;
    COW_AT(10084050)
    if (arg3 != 1u) goto L_1008405b;
    COW_AT(10084055)
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x59u);
L_10084060: ;
    COW_AT(10084060)
    zf = (uint8_t)eax == 0u;
    goto L_10084062;
L_1008405b: ;
    COW_AT(1008405b)
    if (arg3 != 2u) goto L_10084064;
    goto L_10084060;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10083f20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10083f34u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10083f39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10083fabu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x58u, 0x451c4000u);
        wr32(sp0 - 0x54u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10083fb1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10083fd8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10083fdcu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10083febu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->eax = 0x400u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10083ff3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->eax = 0x400u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10084003u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10084007u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10084011u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10084015u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1008401fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10084023u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1008402du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10084037u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1008403bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x10084044u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x10084048u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1008404cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10084050u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10084055u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1008405bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10084060u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10084062u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10084064u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10084082u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100840acu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        wr32(sp0 - 0x74u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x100840cbu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        wr32(sp0 - 0x74u, sp0 - 0x4cu);
        wr32(sp0 - 0x70u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x100840d5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        wr32(sp0 - 0x74u, sp0 - 0x4cu);
        wr32(sp0 - 0x70u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x100840d7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        double loc_58_f;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x6cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100840e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100840eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10083f20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10083f20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
