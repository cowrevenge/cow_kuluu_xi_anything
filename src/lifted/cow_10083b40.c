/* f_0x10083b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10083b40(Guest* g)
{
    double d13;
    double d17;
    double d18;
    double d19;
    double d36;
    double d37;
    double d38;
    double d40;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_64;
    double loc_68_f;
    uint32_t loc_7c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    uint32_t t39;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
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
    cow_frame(g, sp0, 148u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10083b4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); g->ebp = rd32(sp0 - 0x70u); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10083b4f;
    case 0x10083b54u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083b54;
    case 0x10083b5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083b5e;
    case 0x10083b6du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083b6d;
    case 0x10083b7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083b7c;
    case 0x10083b91u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083b91;
    case 0x10083b93u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083b93;
    case 0x10083ba4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083ba4;
    case 0x10083bacu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083bac;
    case 0x10083bb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083bb1;
    case 0x10083bd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083bd4;
    case 0x10083bdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083bdb;
    case 0x10083be5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083be5;
    case 0x10083befu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083bef;
    case 0x10083bf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_7c = rd32(sp0 - 0x7cu); goto E_10083bf6;
    case 0x10083bfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_7c = rd32(sp0 - 0x7cu); goto E_10083bfe;
    case 0x10083c10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083c10;
    case 0x10083c1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083c1b;
    case 0x10083c25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083c25;
    case 0x10083c34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083c34;
    case 0x10083c3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083c3e;
    case 0x10083c52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083c52;
    case 0x10083c63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083c63;
    case 0x10083c72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083c72;
    case 0x10083c7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083c7d;
    case 0x10083c91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083c91;
    case 0x10083c9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083c9c;
    case 0x10083ca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083ca1;
    case 0x10083cb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083cb9;
    case 0x10083ccau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083cca;
    case 0x10083cd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083cd4;
    case 0x10083cd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_7c = rd32(sp0 - 0x7cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); goto E_10083cd6;
    case 0x10083cddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083cdd;
    case 0x10083ce7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083ce7;
    case 0x10083ce8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083ce8;
    case 0x10083cf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083cf1;
    default: break;
    }
#endif

    COW_AT(10083b40)
    wr32(sp0 - 0x70u, in_ebp);
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x78u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10083b4f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t4 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(10083b54)
    wr32(sp0 - 0x7cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, eax);
    t6 = g->edx;
    edx = t6;
    COW_AT(10083b5e)
    g->eax = rd32(arg1);
    g->edx = edx;
    t7 = rd32(arg1);
    g->esp = sp0 - 0x78u;
    t8 = cow_thiscall(g, rd32(t7 + 0x1bcu), arg1, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(10083b6d)
    wr32(sp0 - 0x7cu, eax);
    wr32(sp0 - 0x80u, sp0 - 0x50u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t10 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x50u, eax);
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(10083b7c)
    d13 = (double)rdf32(sp0 - 0x48u);
    if (!(d13 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 - 0x48u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 - 0x48u);
    COW_AT(10083b91)
        x0 = -x0;
    }
    COW_AT(10083b93)
    wrf32(sp0 - 0x6cu, (float)(double)(float)x0);
    if (!(x0 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(10083ba4)
        wr32(sp0 - 0x6cu, 0x3f800000u);
    }
    COW_AT(10083bac)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t14 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    d17 = cow_take_float(g);
    eax = t14;
    ecx = t15;
    edx = t16;
    x0 = d17;
    COW_AT(10083bb1)
    d18 = fr(g, (double)rdf32(sp0 - 0x50u) / (double)rdf32(sp0 - 0x6cu));
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0x45610000u);
    d19 = (double)(float)fr(g, x0 * d18);
    wrf32(sp0 - 0x6cu, (float)d19);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t20 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(10083bd4)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x78u;
    t23 = cow_call_regs(g, COW_IMG(0x10085240u), g->eax, g->ecx, edx, 1, 0);
    t24 = g->ecx;
    t25 = g->edx;
    ecx = t24;
    edx = t25;
    edi = eax;
    eax = t23;
    COW_AT(10083bdb)
    if (eax == 0u)
    {
        ebx = in_ebx;
    }
    else
    {
        esi = eax;
    COW_AT(10083be5)
        wr32(sp0 - 0x7cu, in_ebx);
        ebx = rd32(sp0 + 0xcu);
        loc_7c = in_ebx;
L_10083bf6: ;
    COW_AT(10083bf6)
        if (esi == arg1)
        {
            loc_68_f = (double)rdf32(sp0 - 0x68u);
            loc_64 = rd32(sp0 - 0x64u);
        }
        else
        {
    COW_AT(10083bfe)
            wr32(sp0 - 0x80u, 1u);
            wr32(sp0 - 0x84u, ebx);
            wr32(sp0 - 0x88u, arg2);
            wr32(sp0 - 0x8cu, edi);
            wr32(sp0 - 0x90u, esi);
            g->eax = eax;
            g->edx = arg2;
            g->esp = sp0 - 0x7cu;
            t26 = cow_cdecl(g, COW_IMG(0x10083430u), 5, esi, edi, arg2, ebx, 1u);
            t27 = g->edx;
            eax = t26;
            edx = t27;
    COW_AT(10083c10)
            if ((uint8_t)eax == 0u)
            {
                loc_7c = rd32(sp0 - 0x7cu);
                loc_68_f = (double)rdf32(sp0 - 0x68u);
                loc_64 = rd32(sp0 - 0x64u);
            }
            else
            {
    COW_AT(10083c1b)
                g->eax = rd32(esi);
                g->edx = edx;
                t28 = rd32(esi);
                g->esp = sp0 - 0x7cu;
                t29 = cow_thiscall(g, rd32(t28 + 0x1bcu), esi, 0);
                t30 = g->edx;
                eax = t29;
                edx = t30;
    COW_AT(10083c25)
                wr32(sp0 - 0x80u, eax);
                wr32(sp0 - 0x84u, sp0 - 0x60u);
                g->eax = eax;
                g->esp = sp0 - 0x7cu;
                t31 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x60u, eax);
                t32 = g->ecx;
                eax = t31;
                ecx = t32;
    COW_AT(10083c34)
                wr32(sp0 - 0x80u, sp0 - 0x60u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = sp0 - 0x60u;
                g->esp = sp0 - 0x7cu;
                t33 = cow_cdecl(g, COW_IMG(0x10027600u), 1, sp0 - 0x60u);
                t34 = g->ecx;
                t35 = g->edx;
                d36 = cow_take_float(g);
                eax = t33;
                ecx = t34;
                edx = t35;
                x0 = d36;
    COW_AT(10083c3e)
                if (!(x0 < (double)rdf32(COW_IMG(0x1032d3e0u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032d3e0u)), 0u);
                    loc_7c = rd32(sp0 - 0x7cu);
                    loc_68_f = (double)rdf32(sp0 - 0x68u);
                    loc_64 = rd32(sp0 - 0x64u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032d3e0u)), 0u);
    COW_AT(10083c52)
                    d37 = (double)rdf32(sp0 - 0x58u);
                    if (!(d37 < (double)rdf32(COW_IMG(0x103295d8u))))
                    {
    COW_AT(10083c72)
                        t39 = rd32(sp0 - 0x58u);
                        wr32(sp0 + 0xcu, t39);
                        eax = t39;
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10083c63)
                        d38 = (double)rdf32(sp0 - 0x58u);
                        wrf32(sp0 + 0xcu, (float)-d38);
                    }
    COW_AT(10083c7d)
                    d40 = (double)rdf32(sp0 + 0xcu);
                    if (!(d40 < (double)rdf32(COW_IMG(0x1032961cu))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d40, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d40, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(10083c91)
                        wr32(sp0 + 0xcu, 0x3f800000u);
                    }
    COW_AT(10083c9c)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x7cu;
                    t41 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
                    t42 = g->edx;
                    d43 = cow_take_float(g);
                    eax = t41;
                    edx = t42;
                    x0 = d43;
    COW_AT(10083ca1)
                    d44 = fr(g, x0 * fr(g, (double)rdf32(sp0 - 0x60u) / (double)rdf32(sp0 + 0xcu)));
                    d45 = (double)rdf32(sp0 - 0x6cu);
                    if (!(d44 < d45))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d44, d45, 1u);
                        x0 = d44;
                        goto L_10083cd4;
                    }
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d44, d45, 1u);
                    x0 = d44;
    COW_AT(10083cb9)
                    d46 = fr(g, (double)rdf32(sp0 - 0x6cu) - x0);
                    d47 = (double)rdf32(sp0 - 0x68u);
                    if (!(d46 < d47))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, d47, 1u);
                        x0 = d46;
                        goto L_10083cd4;
                    }
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, d47, 1u);
                    x0 = d46;
    COW_AT(10083cca)
                    wrf32(sp0 - 0x68u, (float)(double)(float)x0);
                    wr32(sp0 - 0x64u, esi);
                    loc_7c = rd32(sp0 - 0x7cu);
                    loc_68_f = (double)(float)x0;
                    loc_64 = esi;
                }
            }
        }
L_10083cd6: ;
    COW_AT(10083cd6)
        g->eax = eax;
        g->esp = sp0 - 0x7cu;
        t48 = cow_fastcall(g, COW_IMG(0x10085270u), esi, edx, 0);
        t49 = g->ecx;
        t50 = g->edx;
        eax = t48;
        ecx = t49;
        edx = t50;
    COW_AT(10083cdd)
        if (eax != 0u)
        {
            esi = eax;
            goto L_10083bef;
        }
    COW_AT(10083ce7)
        ebx = rd32(sp0 - 0x7cu);
    }
    COW_AT(10083ce8)
    g->esp = sp0 - 0x78u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    COW_AT(10083cf1)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    g->ebp = rd32(sp0 - 0x70u);
    return rd32(sp0 - 0x64u);
L_10083bef: ;
    COW_AT(10083bef)
    loc_7c = rd32(sp0 - 0x7cu);
    goto L_10083bf6;
L_10083cd4: ;
    COW_AT(10083cd4)
    loc_7c = rd32(sp0 - 0x7cu);
    loc_68_f = (double)rdf32(sp0 - 0x68u);
    loc_64 = rd32(sp0 - 0x64u);
    goto L_10083cd6;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10083b40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10083b4fu:
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
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10083b54u:
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
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10083b5eu:
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
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10083b6du:
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
        g->esp = sp0 - 0x78u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10083b7cu:
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
        g->esp = sp0 - 0x78u;
        g->ebp = arg1;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083b91u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x78u;
        g->ebp = arg1;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083b93u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x78u;
        g->ebp = arg1;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083ba4u:
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
        g->esp = sp0 - 0x78u;
        g->ebp = arg1;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083bacu:
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
        g->esp = sp0 - 0x78u;
        g->ebp = arg1;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083bb1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x78u;
        g->ebp = arg1;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083bd4u:
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
        g->esp = sp0 - 0x78u;
        g->ebp = arg1;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        wr32(sp0 - 0x68u, 0x45610000u);
        wr32(sp0 - 0x64u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10083bdbu:
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
        g->esp = sp0 - 0x78u;
        g->ebp = arg1;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083be5u:
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
        g->esp = sp0 - 0x78u;
        g->ebp = arg1;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083befu:
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
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x10083bf6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x7cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10083bfeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x10083c10u:
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
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x10083c1bu:
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
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x10083c25u:
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
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x10083c34u:
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
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x84u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083c3eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x84u, sp0 - 0x60u);
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083c52u:
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
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x84u, sp0 - 0x60u);
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083c63u:
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
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x84u, sp0 - 0x60u);
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083c72u:
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
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x84u, sp0 - 0x60u);
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083c7du:
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
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x84u, sp0 - 0x60u);
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083c91u:
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
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x84u, sp0 - 0x60u);
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083c9cu:
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
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x84u, sp0 - 0x60u);
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083ca1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x84u, sp0 - 0x60u);
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083cb9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x84u, sp0 - 0x60u);
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083ccau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x84u, sp0 - 0x60u);
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083cd4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x84u, sp0 - 0x60u);
        wr32(sp0 - 0x80u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x10083cd6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        double loc_68_f;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_7c = rd32(sp0 - 0x7cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x10083cddu:
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
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x10083ce7u:
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
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x10083ce8u:
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
    case 0x10083cf1u:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10083b40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10083b40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
