/* f_0x10083a10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10083a10(Guest* g)
{
    double d27;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_64;
    double loc_68_f;
    uint32_t loc_78;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 144u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10083a1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebp = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_10083a1f;
    case 0x10083a24u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083a24;
    case 0x10083a2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083a2e;
    case 0x10083a3du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083a3d;
    case 0x10083a4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083a4c;
    case 0x10083a61u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083a61;
    case 0x10083a68u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083a68;
    case 0x10083a72u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083a72;
    case 0x10083a7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10083a7c;
    case 0x10083a80u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); goto E_10083a80;
    case 0x10083a88u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); goto E_10083a88;
    case 0x10083a9au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10083a9a;
    case 0x10083aa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10083aa1;
    case 0x10083aabu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10083aab;
    case 0x10083abau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10083aba;
    case 0x10083acbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10083acb;
    case 0x10083ad5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083ad5;
    case 0x10083ae5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10083ae5;
    case 0x10083af4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10083af4;
    case 0x10083b09u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083b09;
    case 0x10083b13u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083b13;
    case 0x10083b15u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_68_f = rdf32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); goto E_10083b15;
    case 0x10083b1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10083b1c;
    case 0x10083b26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083b26;
    case 0x10083b27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083b27;
    case 0x10083b30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083b30;
    default: break;
    }
#endif

    COW_AT(10083a10)
    wr32(sp0 - 0x6cu, in_ebp);
    wr32(sp0 - 0x70u, in_esi);
    wr32(sp0 - 0x74u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x74u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10083a1f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t4 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(10083a24)
    wr32(sp0 - 0x78u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, eax);
    t6 = g->edx;
    edx = t6;
    COW_AT(10083a2e)
    g->eax = rd32(arg1);
    g->edx = edx;
    t7 = rd32(arg1);
    g->esp = sp0 - 0x74u;
    t8 = cow_thiscall(g, rd32(t7 + 0x1bcu), arg1, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(10083a3d)
    wr32(sp0 - 0x78u, eax);
    wr32(sp0 - 0x7cu, sp0 - 0x50u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t10 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x50u, eax);
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(10083a4c)
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0x45610000u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t13 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(10083a61)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x74u;
    t16 = cow_call_regs(g, COW_IMG(0x10085240u), g->eax, g->ecx, edx, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    ecx = t17;
    edx = t18;
    edi = eax;
    eax = t16;
    COW_AT(10083a68)
    if (eax == 0u)
    {
        ebx = in_ebx;
    }
    else
    {
        esi = eax;
    COW_AT(10083a72)
        wr32(sp0 - 0x78u, in_ebx);
        loc_78 = in_ebx;
L_10083a80: ;
    COW_AT(10083a80)
        if (esi == arg1)
        {
            loc_68_f = (double)rdf32(sp0 - 0x68u);
            loc_64 = rd32(sp0 - 0x64u);
        }
        else
        {
    COW_AT(10083a88)
            wr32(sp0 - 0x7cu, 1u);
            wr32(sp0 - 0x80u, arg3);
            wr32(sp0 - 0x84u, arg2);
            wr32(sp0 - 0x88u, edi);
            wr32(sp0 - 0x8cu, esi);
            g->eax = eax;
            g->edx = arg2;
            g->esp = sp0 - 0x78u;
            t19 = cow_cdecl(g, COW_IMG(0x10083430u), 5, esi, edi, arg2, arg3, 1u);
            t20 = g->edx;
            eax = t19;
            edx = t20;
    COW_AT(10083a9a)
            if ((uint8_t)eax == 0u)
            {
                loc_78 = rd32(sp0 - 0x78u);
                loc_68_f = (double)rdf32(sp0 - 0x68u);
                loc_64 = rd32(sp0 - 0x64u);
            }
            else
            {
    COW_AT(10083aa1)
                g->eax = rd32(esi);
                g->edx = edx;
                t21 = rd32(esi);
                g->esp = sp0 - 0x78u;
                t22 = cow_thiscall(g, rd32(t21 + 0x1bcu), esi, 0);
                t23 = g->edx;
                eax = t22;
                edx = t23;
    COW_AT(10083aab)
                wr32(sp0 - 0x7cu, eax);
                wr32(sp0 - 0x80u, sp0 - 0x60u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x78u;
                t24 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x60u, eax);
                t25 = g->ecx;
                t26 = g->edx;
                eax = t24;
                ecx = t25;
                edx = t26;
    COW_AT(10083aba)
                d27 = (double)rdf32(sp0 - 0x60u);
                if (d27 < (double)rdf32(COW_IMG(0x103295d8u)))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                    loc_78 = rd32(sp0 - 0x78u);
                    loc_68_f = (double)rdf32(sp0 - 0x68u);
                    loc_64 = rd32(sp0 - 0x64u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10083acb)
                    wr32(sp0 - 0x7cu, sp0 - 0x60u);
                    g->eax = eax;
                    g->edx = sp0 - 0x60u;
                    g->esp = sp0 - 0x78u;
                    t28 = cow_cdecl(g, COW_IMG(0x10027600u), 1, sp0 - 0x60u);
                    t29 = g->edx;
                    d30 = cow_take_float(g);
                    eax = t28;
                    edx = t29;
                    x0 = d30;
    COW_AT(10083ad5)
                    if (!(x0 < (double)rdf32(COW_IMG(0x1032d3e0u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032d3e0u)), 0u);
                        loc_78 = rd32(sp0 - 0x78u);
                        loc_68_f = (double)rdf32(sp0 - 0x68u);
                        loc_64 = rd32(sp0 - 0x64u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032d3e0u)), 0u);
    COW_AT(10083ae5)
                        d31 = (double)rdf32(sp0 - 0x5cu);
                        d32 = (double)rdf32(sp0 - 0x4cu);
                        if (!(d31 <= d32))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, d32, 0u);
                            loc_78 = rd32(sp0 - 0x78u);
                            loc_68_f = (double)rdf32(sp0 - 0x68u);
                            loc_64 = rd32(sp0 - 0x64u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, d32, 0u);
    COW_AT(10083af4)
                            d33 = fr(g, (double)rdf32(sp0 - 0x60u) - (double)rdf32(sp0 - 0x50u));
                            d34 = (double)rdf32(sp0 - 0x68u);
                            if (!(d33 < d34))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, d34, 1u);
                                x0 = d33;
    COW_AT(10083b13)
                                loc_78 = rd32(sp0 - 0x78u);
                                loc_68_f = (double)rdf32(sp0 - 0x68u);
                                loc_64 = rd32(sp0 - 0x64u);
                            }
                            else
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, d34, 1u);
                                x0 = d33;
    COW_AT(10083b09)
                                wrf32(sp0 - 0x68u, (float)(double)(float)x0);
                                wr32(sp0 - 0x64u, esi);
                                loc_78 = rd32(sp0 - 0x78u);
                                loc_68_f = (double)(float)x0;
                                loc_64 = esi;
                            }
                        }
                    }
                }
            }
        }
    COW_AT(10083b15)
        g->eax = eax;
        g->esp = sp0 - 0x78u;
        t35 = cow_fastcall(g, COW_IMG(0x10085270u), esi, edx, 0);
        t36 = g->ecx;
        t37 = g->edx;
        eax = t35;
        ecx = t36;
        edx = t37;
    COW_AT(10083b1c)
        if (eax != 0u)
        {
            esi = eax;
            goto L_10083a7c;
        }
    COW_AT(10083b26)
        ebx = rd32(sp0 - 0x78u);
    }
    COW_AT(10083b27)
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t38 = g->edx;
    edx = t38;
    COW_AT(10083b30)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x70u);
    g->edi = rd32(sp0 - 0x74u);
    g->ebp = rd32(sp0 - 0x6cu);
    g->edx = edx;
    return rd32(sp0 - 0x64u);
L_10083a7c: ;
    COW_AT(10083a7c)
    loc_78 = rd32(sp0 - 0x78u);
    goto L_10083a80;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10083a10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10083a1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebp = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10083a24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10083a2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10083a3du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x74u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10083a4cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x74u;
        g->ebp = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083a61u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x74u;
        g->ebp = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x50u);
        wr32(sp0 - 0x68u, 0x45610000u);
        wr32(sp0 - 0x64u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10083a68u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x74u;
        g->ebp = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083a72u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x74u;
        g->ebp = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083a7cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10083a80u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x78u;
        g->ebx = arg3;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10083a88u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x78u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10083a9au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10083aa1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10083aabu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10083abau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = arg3;
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083acbu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = arg3;
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083ad5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x7cu;
        g->ebx = arg3;
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        wr32(sp0 - 0x7cu, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083ae5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = arg3;
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        wr32(sp0 - 0x7cu, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083af4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = arg3;
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        wr32(sp0 - 0x7cu, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083b09u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x78u;
        g->ebx = arg3;
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        wr32(sp0 - 0x7cu, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083b13u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x78u;
        g->ebx = arg3;
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        wr32(sp0 - 0x7cu, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083b15u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        double loc_68_f;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x78u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10083b1cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10083b26u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10083b27u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10083b30u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10083a10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10083a10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
