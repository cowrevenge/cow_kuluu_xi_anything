/* f_0x102a2210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102a2210(Guest* g)
{
    double d10;
    double d11;
    double d12;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_5c;
    int64_t q38;
    uint32_t t1;
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
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 156u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a223fu: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x68u); in_esi = rd32(sp0 - 0x64u); in_ebp = rd32(sp0 - 0x60u); g->ebp = rd32(sp0 - 0x60u); g->edi = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x64u); goto E_102a223f;
    case 0x102a2247u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x68u); in_esi = rd32(sp0 - 0x64u); in_ebp = rd32(sp0 - 0x60u); g->ebp = rd32(sp0 - 0x60u); g->edi = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x64u); goto E_102a2247;
    case 0x102a225bu: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x68u); in_esi = rd32(sp0 - 0x64u); in_ebp = rd32(sp0 - 0x60u); g->ebp = rd32(sp0 - 0x60u); g->edi = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x64u); goto E_102a225b;
    case 0x102a2269u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x68u); in_esi = rd32(sp0 - 0x64u); in_ebp = rd32(sp0 - 0x60u); g->ebp = rd32(sp0 - 0x60u); g->edi = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x64u); goto E_102a2269;
    case 0x102a229bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a229b;
    case 0x102a22e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a22e2;
    case 0x102a22fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a22fd;
    case 0x102a231bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a231b;
    case 0x102a231eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a231e;
    case 0x102a2365u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a2365;
    case 0x102a2369u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_102a2369;
    case 0x102a2374u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_102a2374;
    case 0x102a2378u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_102a2378;
    case 0x102a237bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_102a237b;
    case 0x102a23aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_102a23ae;
    case 0x102a23b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_102a23b2;
    case 0x102a23b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_102a23b5;
    case 0x102a23eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a23ea;
    case 0x102a23f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a23f1;
    case 0x102a2407u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a2407;
    case 0x102a2411u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a2411;
    case 0x102a2428u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); goto E_102a2428;
    case 0x102a2434u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x68u); in_esi = rd32(sp0 - 0x64u); in_ebp = rd32(sp0 - 0x60u); g->ebp = rd32(sp0 - 0x60u); g->edi = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x64u); goto E_102a2434;
    default: break;
    }
#endif

    COW_AT(102a2210)
    wr32(sp0 - 0x60u, in_ebp);
    wr32(sp0 - 0x64u, in_esi);
    wr32(sp0 - 0x68u, in_edi);
    t1 = rd32(sp0 + 0xcu);
    t2 = rd32(sp0 + 4u);
    t3 = rd32(rd32(sp0 + 4u) + 0x24u);
    wr32(sp0 + 0xcu, 0u);
    if (rd32(arg2 + 0xcu) == 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1 * 0xcu + t3;
        goto L_102a225b;
    }
    ecx = t2;
    edx = t3;
    esi = t1 * 0xcu + t3;
    edi = rd32(arg2 + 0xcu);
    COW_AT(102a223f)
    if (rd32(edi) == 0xa0009u) goto L_102a2269;
    COW_AT(102a2247)
    wr32(sp0 - 0x6cu, COW_IMG(0x103bd5a0u));
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd5a0u), in_edi);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_102a225b: ;
    COW_AT(102a225b)
    if (rd32(rd32(arg2)) != 0xa0009u) goto L_102a2434;
    edi = rd32(arg2);
L_102a2269: ;
    COW_AT(102a2269)
    wr32(sp0 - 0x6cu, in_ebx);
    t4 = rd32(arg2 + 4u);
    wr32(sp0 - 0x70u, t4);
    wr32(sp0 - 0x74u, sp0 - 0x40u);
    t5 = rd32(rd32(edi + 0x48u));
    wr32(sp0 - 0x5cu, t5);
    t6 = rd32(edi + 0x48u);
    g->esp = sp0 - 0x6cu;
    cow_cdecl(g, COW_IMG(0x1027f100u), 2, sp0 - 0x40u, t4);
    t7 = rd32(rd32(esi) + 0x30u) == 0u;
    t8 = rd32(esi + 4u);
    t9 = rd32(rd32(esi) + 0x30u);
    wr32(sp0 + 4u, t7);
    if (t9 == 0u)
    {
        eax = t8;
        ebx = t6;
    COW_AT(102a22e2)
        t13 = rd32(eax + 0xcu);
        wr32(sp0 - 0x58u, t13);
        t14 = rd32(rd32(esi + 4u) + 0x1cu);
        wr32(sp0 - 0x54u, t14);
        t15 = rd32(rd32(esi + 4u) + 0x2cu);
        wr32(sp0 - 0x50u, t15);
    }
    else
    {
        eax = t8;
        ebx = t6;
    COW_AT(102a229b)
        d10 = fr(g, (double)rdf32(eax + 8u) * (double)rdf32(COW_IMG(0x1032a3f0u)));
        wrf32(sp0 - 0x58u, (float)(double)(float)d10);
        d11 = fr(g, (double)rdf32(rd32(esi + 4u) + 0x18u) * (double)rdf32(COW_IMG(0x1032a3f0u)));
        wrf32(sp0 - 0x54u, (float)(double)(float)d11);
        d12 = fr(g, (double)rdf32(rd32(esi + 4u) + 0x28u) * (double)rdf32(COW_IMG(0x1032a3f0u)));
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x14u, 0u);
        wrf32(sp0 - 0x50u, (float)(double)(float)d12);
    }
    COW_AT(102a22fd)
    wr32(sp0 - 0x70u, sp0 - 0x58u);
    wr32(sp0 - 0x74u, sp0 - 0x40u);
    wr32(sp0 - 0x78u, sp0 - 0x4cu);
    g->esp = sp0 - 0x6cu;
    cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x4cu, sp0 - 0x40u, sp0 - 0x58u);
    if (rd32(edi + 0x34u) == 0u)
    {
        eax = rd32(edi + 0x34u);
    }
    else
    {
        eax = rd32(edi + 0x34u);
    COW_AT(102a231b)
        eax = rd32(eax + 0x54u);
    }
    COW_AT(102a231e)
    wr32(sp0 - 0x70u, sp0 - 0x4cu);
    t16 = rd32(rd32(esi) + 0x30u) == 0u;
    wr32(sp0 - 0x74u, t16);
    t17 = rd32(edi + 0x48u);
    wr32(sp0 - 0x78u, t17);
    wr32(sp0 - 0x7cu, eax);
    t18 = rd32(edi + 0x44u);
    wr32(sp0 - 0x80u, t18);
    t19 = rd32(edi + 0x54u);
    wr32(sp0 - 0x84u, t19);
    t20 = rd32(arg2 + 0x14u);
    wr32(sp0 - 0x88u, t20);
    g->eax = t20;
    g->edx = arg2;
    g->esp = sp0 - 0x6cu;
    t21 = cow_cdecl(g, COW_IMG(0x10297fb0u), 7, t20, t19, t18, eax, t17, t16, sp0 - 0x4cu);
    t22 = g->edx;
    t23 = rd32(edi + 0x44u);
    wr32(sp0 - 0x8cu, t23);
    g->ecx = t23;
    g->edx = t22;
    g->esp = sp0 - 0x88u;
    cow_cdecl(g, COW_IMG(0x10298200u), 1, t23);
    t24 = g->ecx;
    t25 = g->edx;
    if (rd32(sp0 - 0x5cu) == 0u)
    {
        eax = rd32(sp0 - 0x5cu);
        ecx = t24;
        edx = t25;
    }
    else
    {
        eax = rd32(sp0 - 0x5cu);
    COW_AT(102a2365)
        wr32(sp0 - 0x5cu, eax);
        ebp = 2u;
        loc_5c = eax;
L_102a2369: ;
    COW_AT(102a2369)
        if ((int32_t)rd32(ebp * 4u + ebx - 4u) <= 0)
        {
            eax = rd32(edi + 0x34u);
            esi = rd32(ebp * 4u + ebx - 4u);
    COW_AT(102a23ae)
            if (eax != 0u)
            {
    COW_AT(102a23b2)
                eax = rd32(eax + 0x54u);
            }
    COW_AT(102a23b5)
            wr32(sp0 - 0x70u, 1u);
            wr32(sp0 - 0x74u, 0x447a0000u);
            wr32(sp0 - 0x78u, sp0 - 0x4cu);
            t32 = rd32(sp0 + 4u);
            wr32(sp0 - 0x7cu, t32);
            t33 = rd32(arg2 + 0x14u);
            wr32(sp0 - 0x80u, t33);
            t34 = rd32(edi + 0x58u);
            wr32(sp0 - 0x84u, t34);
            wr32(sp0 - 0x88u, ebx);
            wr32(sp0 - 0x8cu, eax);
            wr32(sp0 - 0x90u, ebp);
            t35 = rd32(sp0 + 0xcu);
            wr32(sp0 - 0x94u, t35);
            wr32(sp0 - 0x98u, -esi);
            g->ecx = t34;
            g->edx = t35;
            g->esp = sp0 - 0x3cu;
            cow_bridge_indirect(g, COW_IMG(0x10297b30u), 0u, 23u, (const uint32_t[]){-esi, t35, ebp, eax, ebx, t34, t33, t32, sp0 - 0x4cu, 0x447a0000u, 1u, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), loc_5c, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u)}, g->ecx, g->edx, g->eax, 92u);
            t36 = g->ecx;
            t37 = g->edx;
            ecx = t36;
            edx = t37;
        }
        else
        {
            eax = rd32(edi + 0x34u);
            esi = rd32(ebp * 4u + ebx - 4u);
    COW_AT(102a2374)
            if (eax != 0u)
            {
    COW_AT(102a2378)
                eax = rd32(eax + 0x54u);
            }
    COW_AT(102a237b)
            wr32(sp0 - 0x70u, 1u);
            wr32(sp0 - 0x74u, 0x447a0000u);
            wr32(sp0 - 0x78u, sp0 - 0x4cu);
            t26 = rd32(sp0 + 4u);
            wr32(sp0 - 0x7cu, t26);
            t27 = rd32(arg2 + 0x14u);
            wr32(sp0 - 0x80u, t27);
            t28 = rd32(edi + 0x58u);
            wr32(sp0 - 0x84u, t28);
            wr32(sp0 - 0x88u, ebx);
            wr32(sp0 - 0x8cu, eax);
            wr32(sp0 - 0x90u, ebp);
            t29 = rd32(sp0 + 0xcu);
            wr32(sp0 - 0x94u, t29);
            wr32(sp0 - 0x98u, esi);
            g->ecx = t27;
            g->edx = t28;
            g->esp = sp0 - 0x6cu;
            cow_cdecl(g, COW_IMG(0x10297a00u), 11, esi, t29, ebp, eax, ebx, t28, t27, t26, sp0 - 0x4cu, 0x447a0000u, 1u);
            t30 = g->ecx;
            t31 = g->edx;
            ecx = t30;
            edx = t31;
        }
    COW_AT(102a23ea)
        if ((int32_t)esi <= 0)
        {
    COW_AT(102a2407)
            eax = rd32(sp0 + 0xcu) - esi - 2u;
            edx = rd32(sp0 + 0xcu);
            esi = -esi;
        }
        else
        {
    COW_AT(102a23f1)
            q38 = (int64_t)cow_muls(0x55555556u, esi);
            eax = cow_qhi(q38) + (cow_qhi(q38) >> 0x1fu) + rd32(sp0 + 0xcu);
            ecx = cow_qhi(q38) >> 0x1fu;
            edx = cow_qhi(q38) + (cow_qhi(q38) >> 0x1fu);
        }
    COW_AT(102a2411)
        wr32(sp0 + 0xcu, eax);
        t39 = rd32(sp0 - 0x5cu) - 1u;
        t40 = rd32(sp0 - 0x5cu);
        wr32(sp0 - 0x5cu, t39);
        if (t40 != 1u)
        {
            ebp = ebp + esi + 1u;
            loc_5c = t39;
            goto L_102a2369;
        }
        eax = t39;
    }
    COW_AT(102a2428)
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x64u);
    g->edi = rd32(sp0 - 0x68u);
    g->ebp = rd32(sp0 - 0x60u);
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x102982c0u), eax, ecx, edx);
    return;
L_102a2434: ;
    COW_AT(102a2434)
    wr32(sp0 - 0x6cu, COW_IMG(0x103bd56cu));
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd56cu), in_edi);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a2210(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a223fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x68u);
        in_esi = rd32(sp0 - 0x64u);
        in_ebp = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x68u;
        g->eax = arg2;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102a2247u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x68u);
        in_esi = rd32(sp0 - 0x64u);
        in_ebp = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x68u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102a225bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x68u);
        in_esi = rd32(sp0 - 0x64u);
        in_ebp = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x68u;
        g->eax = arg2;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102a2269u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x68u);
        in_esi = rd32(sp0 - 0x64u);
        in_ebp = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x68u;
        g->eax = arg2;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102a229bu:
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
        g->esp = sp0 - 0x6cu;
        g->ebp = 2u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x102a22e2u:
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
        g->esp = sp0 - 0x6cu;
        g->ebp = 2u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x102a22fdu:
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
        g->esp = sp0 - 0x6cu;
        g->ebp = 2u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x102a231bu:
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
        g->esp = sp0 - 0x6cu;
        g->ebp = 2u;
        wr32(sp0 - 0x78u, sp0 - 0x4cu);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x70u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x102a231eu:
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
        g->esp = sp0 - 0x6cu;
        g->ebp = 2u;
        wr32(sp0 - 0x78u, sp0 - 0x4cu);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x70u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x102a2365u:
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
        g->esp = sp0 - 0x6cu;
        g->ebp = 2u;
        wr32(sp0 - 0x70u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x102a2369u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102a2374u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102a2378u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102a237bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102a23aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102a23b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102a23b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102a23eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0x78u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x102a23f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x78u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x102a2407u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x78u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x102a2411u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x78u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x102a2428u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x102a2434u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x68u);
        in_esi = rd32(sp0 - 0x64u);
        in_ebp = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x68u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a2210(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102a2210(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
