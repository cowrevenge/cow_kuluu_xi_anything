/* f_0x10083d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10083d00(Guest* g)
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
    case 0x10083d0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); g->ebp = rd32(sp0 - 0x70u); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_10083d0f;
    case 0x10083d14u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083d14;
    case 0x10083d1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083d1e;
    case 0x10083d2du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083d2d;
    case 0x10083d3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083d3c;
    case 0x10083d51u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083d51;
    case 0x10083d53u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083d53;
    case 0x10083d64u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083d64;
    case 0x10083d6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083d6c;
    case 0x10083d71u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083d71;
    case 0x10083d94u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083d94;
    case 0x10083d9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083d9b;
    case 0x10083da5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083da5;
    case 0x10083dafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083daf;
    case 0x10083db6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_7c = rd32(sp0 - 0x7cu); goto E_10083db6;
    case 0x10083dbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_7c = rd32(sp0 - 0x7cu); goto E_10083dbe;
    case 0x10083dd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083dd0;
    case 0x10083ddbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083ddb;
    case 0x10083de5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083de5;
    case 0x10083df4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083df4;
    case 0x10083dfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083dfe;
    case 0x10083e12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083e12;
    case 0x10083e23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083e23;
    case 0x10083e32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083e32;
    case 0x10083e3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083e3d;
    case 0x10083e51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083e51;
    case 0x10083e5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083e5c;
    case 0x10083e61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083e61;
    case 0x10083e7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083e7b;
    case 0x10083e8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083e8c;
    case 0x10083e96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10083e96;
    case 0x10083e98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_7c = rd32(sp0 - 0x7cu); loc_68_f = rdf32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); goto E_10083e98;
    case 0x10083e9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083e9f;
    case 0x10083ea9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083ea9;
    case 0x10083eaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083eaa;
    case 0x10083eb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10083eb3;
    default: break;
    }
#endif

    COW_AT(10083d00)
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
    COW_AT(10083d0f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t4 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(10083d14)
    wr32(sp0 - 0x7cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, eax);
    t6 = g->edx;
    edx = t6;
    COW_AT(10083d1e)
    g->eax = rd32(arg1);
    g->edx = edx;
    t7 = rd32(arg1);
    g->esp = sp0 - 0x78u;
    t8 = cow_thiscall(g, rd32(t7 + 0x1bcu), arg1, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(10083d2d)
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
    COW_AT(10083d3c)
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
    COW_AT(10083d51)
        x0 = -x0;
    }
    COW_AT(10083d53)
    wrf32(sp0 - 0x6cu, (float)(double)(float)x0);
    if (!(x0 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(10083d64)
        wr32(sp0 - 0x6cu, 0x3f800000u);
    }
    COW_AT(10083d6c)
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
    COW_AT(10083d71)
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
    COW_AT(10083d94)
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
    COW_AT(10083d9b)
    if (eax == 0u)
    {
        ebx = in_ebx;
    }
    else
    {
        esi = eax;
    COW_AT(10083da5)
        wr32(sp0 - 0x7cu, in_ebx);
        ebx = rd32(sp0 + 0xcu);
        loc_7c = in_ebx;
L_10083db6: ;
    COW_AT(10083db6)
        if (esi == arg1)
        {
            loc_68_f = (double)rdf32(sp0 - 0x68u);
            loc_64 = rd32(sp0 - 0x64u);
        }
        else
        {
    COW_AT(10083dbe)
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
    COW_AT(10083dd0)
            if ((uint8_t)eax == 0u)
            {
                loc_7c = rd32(sp0 - 0x7cu);
                loc_68_f = (double)rdf32(sp0 - 0x68u);
                loc_64 = rd32(sp0 - 0x64u);
            }
            else
            {
    COW_AT(10083ddb)
                g->eax = rd32(esi);
                g->edx = edx;
                t28 = rd32(esi);
                g->esp = sp0 - 0x7cu;
                t29 = cow_thiscall(g, rd32(t28 + 0x1bcu), esi, 0);
                t30 = g->edx;
                eax = t29;
                edx = t30;
    COW_AT(10083de5)
                wr32(sp0 - 0x80u, eax);
                wr32(sp0 - 0x84u, sp0 - 0x60u);
                g->eax = eax;
                g->esp = sp0 - 0x7cu;
                t31 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x60u, eax);
                t32 = g->ecx;
                eax = t31;
                ecx = t32;
    COW_AT(10083df4)
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
    COW_AT(10083dfe)
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
    COW_AT(10083e12)
                    d37 = (double)rdf32(sp0 - 0x58u);
                    if (!(d37 < (double)rdf32(COW_IMG(0x103295d8u))))
                    {
    COW_AT(10083e32)
                        t39 = rd32(sp0 - 0x58u);
                        wr32(sp0 + 0xcu, t39);
                        eax = t39;
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10083e23)
                        d38 = (double)rdf32(sp0 - 0x58u);
                        wrf32(sp0 + 0xcu, (float)-d38);
                    }
    COW_AT(10083e3d)
                    d40 = (double)rdf32(sp0 + 0xcu);
                    if (!(d40 < (double)rdf32(COW_IMG(0x1032961cu))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d40, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d40, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(10083e51)
                        wr32(sp0 + 0xcu, 0x3f800000u);
                    }
    COW_AT(10083e5c)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x7cu;
                    t41 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
                    t42 = g->edx;
                    d43 = cow_take_float(g);
                    eax = t41;
                    edx = t42;
                    x0 = d43;
    COW_AT(10083e61)
                    d44 = fr(g, x0 * fr(g, (double)rdf32(sp0 - 0x60u) / (double)rdf32(sp0 + 0xcu)));
                    d45 = (double)rdf32(sp0 - 0x6cu);
                    if ((cow_fsw(g, d44, d45, 1u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d44, d45, 1u) & 0x4100u;
                        x0 = d44;
                        goto L_10083e96;
                    }
                    eax = cow_fsw(g, d44, d45, 1u) & 0x4100u;
                    x0 = d44;
    COW_AT(10083e7b)
                    d46 = fr(g, x0 - (double)rdf32(sp0 - 0x6cu));
                    d47 = (double)rdf32(sp0 - 0x68u);
                    if (!(d46 < d47))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, d47, 1u);
                        x0 = d46;
                        goto L_10083e96;
                    }
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, d47, 1u);
                    x0 = d46;
    COW_AT(10083e8c)
                    wrf32(sp0 - 0x68u, (float)(double)(float)x0);
                    wr32(sp0 - 0x64u, esi);
                    loc_7c = rd32(sp0 - 0x7cu);
                    loc_68_f = (double)(float)x0;
                    loc_64 = esi;
                }
            }
        }
L_10083e98: ;
    COW_AT(10083e98)
        g->eax = eax;
        g->esp = sp0 - 0x7cu;
        t48 = cow_fastcall(g, COW_IMG(0x10085270u), esi, edx, 0);
        t49 = g->ecx;
        t50 = g->edx;
        eax = t48;
        ecx = t49;
        edx = t50;
    COW_AT(10083e9f)
        if (eax != 0u)
        {
            esi = eax;
            goto L_10083daf;
        }
    COW_AT(10083ea9)
        ebx = rd32(sp0 - 0x7cu);
    }
    COW_AT(10083eaa)
    g->esp = sp0 - 0x78u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    COW_AT(10083eb3)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    g->ebp = rd32(sp0 - 0x70u);
    return rd32(sp0 - 0x64u);
L_10083daf: ;
    COW_AT(10083daf)
    loc_7c = rd32(sp0 - 0x7cu);
    goto L_10083db6;
L_10083e96: ;
    COW_AT(10083e96)
    loc_7c = rd32(sp0 - 0x7cu);
    loc_68_f = (double)rdf32(sp0 - 0x68u);
    loc_64 = rd32(sp0 - 0x64u);
    goto L_10083e98;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10083d00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10083d0fu:
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
    case 0x10083d14u:
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
    case 0x10083d1eu:
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
    case 0x10083d2du:
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
    case 0x10083d3cu:
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
    case 0x10083d51u:
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
    case 0x10083d53u:
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
    case 0x10083d64u:
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
    case 0x10083d6cu:
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
    case 0x10083d71u:
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
    case 0x10083d94u:
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
    case 0x10083d9bu:
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
    case 0x10083da5u:
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
    case 0x10083dafu:
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
    case 0x10083db6u:
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
    case 0x10083dbeu:
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
    case 0x10083dd0u:
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
    case 0x10083ddbu:
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
    case 0x10083de5u:
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
    case 0x10083df4u:
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
    case 0x10083dfeu:
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
    case 0x10083e12u:
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
    case 0x10083e23u:
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
    case 0x10083e32u:
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
    case 0x10083e3du:
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
    case 0x10083e51u:
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
    case 0x10083e5cu:
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
    case 0x10083e61u:
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
    case 0x10083e7bu:
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
    case 0x10083e8cu:
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
    case 0x10083e96u:
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
    case 0x10083e98u:
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
    case 0x10083e9fu:
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
    case 0x10083ea9u:
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
    case 0x10083eaau:
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
    case 0x10083eb3u:
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
void cow_adapter_10083d00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10083d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
