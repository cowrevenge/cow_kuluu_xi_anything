/* f_0x10038720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10038720(Guest* g)
{
    double d1;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d24;
    double d33;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_7c_f;
    uint32_t loc_80;
    uint32_t loc_88;
    uint32_t loc_9c;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 176u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10038735u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->esi = rd32(sp0 - 0x98u); goto E_10038735;
    case 0x10038747u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_10038747;
    case 0x10038773u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_edi = g->edi; loc_80 = rd32(sp0 - 0x80u); loc_7c_f = rdf32(sp0 - 0x7cu); goto E_10038773;
    case 0x10038779u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_9c = rd32(sp0 - 0x9cu); loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_7c_f = rdf32(sp0 - 0x7cu); goto E_10038779;
    case 0x10038782u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_9c = rd32(sp0 - 0x9cu); loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_7c_f = rdf32(sp0 - 0x7cu); goto E_10038782;
    case 0x1003878cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_1003878c;
    case 0x1003879eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_1003879e;
    case 0x100387a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100387a3;
    case 0x100387c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100387c5;
    case 0x100387d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100387d7;
    case 0x10038898u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_10038898;
    case 0x100388afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100388af;
    case 0x100388c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100388c9;
    case 0x100388dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100388df;
    case 0x100388e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_9c = rd32(sp0 - 0x9cu); loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_7c_f = rdf32(sp0 - 0x7cu); goto E_100388e5;
    case 0x100388f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100388f8;
    case 0x10038901u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); goto E_10038901;
    case 0x10038909u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); goto E_10038909;
    case 0x1003890au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_7c_f = rdf32(sp0 - 0x7cu); goto E_1003890a;
    default: break;
    }
#endif

    COW_AT(10038720)
    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x98u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    d1 = (double)rdf32(sp0 + 8u);
    fpush(g, d1);
    g->esp = sp0 - 0x98u;
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(10038735)
    wr32(sp0 - 0x84u, eax);
    g->ecx = ecx;
    g->edx = edx;
    d5 = (double)rdf32(sp0 + 0xcu);
    fpush(g, d5);
    g->esp = sp0 - 0x98u;
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    ecx = t7;
    edx = t8;
    ebp = eax;
    eax = t6;
    COW_AT(10038747)
    wr32(sp0 - 0x80u, eax);
    d9 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x1032a1acu)));
    wr32(sp0 - 0x88u, arg1);
    wrf32(sp0 - 0x7cu, (float)(double)(float)d9);
    if (rd8(arg1) == 0u)
    {
        esi = arg1;
        edi = in_edi;
    }
    else
    {
        loc_80 = eax;
        eax = (eax & 0xffffff00u) | rd8(arg1);
        loc_7c_f = (double)(float)d9;
    COW_AT(10038773)
        wr32(sp0 - 0x9cu, in_edi);
        esi = arg1;
        loc_88 = arg1;
        loc_9c = in_edi;
L_10038779: ;
    COW_AT(10038779)
        if (rd8(esi) == 0xau)
        {
    COW_AT(100388e5)
            wr32(sp0 - 0x84u, ebp);
            g->ecx = ecx;
            g->edx = edx;
            d33 = fr(g, (double)(int32_t)loc_80 + (double)rdf32(COW_IMG(0x1032a1acu)));
            fpush(g, d33);
            g->esp = sp0 - 0x9cu;
            t34 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t35 = g->ecx;
            t36 = g->edx;
            eax = t34;
            ecx = t35;
            edx = t36;
    COW_AT(100388f8)
            wr32(sp0 - 0x80u, eax);
            wr32(sp0 - 0x88u, esi + 1u);
            loc_80 = eax;
            loc_88 = esi + 1u;
            esi = esi + 1u;
        }
        else
        {
    COW_AT(10038782)
            wr32(sp0 - 0xa0u, sp0 - 0x88u);
            g->eax = sp0 - 0x88u;
            g->esp = sp0 - 0x94u;
            t10 = cow_cdecl(g, COW_IMG(0x1011ce80u), 3, sp0 - 0x88u, loc_9c, rd32(sp0 - 0x98u));
            eax = t10;
    COW_AT(1003878c)
            if ((int32_t)((uint32_t)(int16_t)eax & 0x8000003fu) >= 0)
            {
                ecx = (uint32_t)(int16_t)eax & 0x8000003fu;
                esi = eax;
                eax = (uint32_t)(int16_t)eax;
            }
            else
            {
                ecx = (uint32_t)(int16_t)eax & 0x8000003fu;
                esi = eax;
                eax = (uint32_t)(int16_t)eax;
    COW_AT(1003879e)
                ecx = (ecx - 1u | 0xffffffc0u) + 1u;
            }
    COW_AT(100387a3)
            wr32(sp0 - 0x8cu, ecx);
            t11 = (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 0x3fu)) >> 6u);
            wr32(sp0 - 0x8cu, t11);
            eax = sp0 - 0x64u;
            x1 = (double)(int32_t)t11;
            x0 = (double)(int32_t)ecx;
            ecx = 4u;
L_100387c5: ;
    COW_AT(100387c5)
            wr32(eax - 4u, 0u);
            wr32(eax, 0x3f800000u);
            wr32(eax + 4u, 0x80808080u);
            if (ecx != 1u)
            {
                eax = eax + 0x1cu;
                ecx = ecx - 1u;
                goto L_100387c5;
            }
            eax = eax + 0x1cu;
            ecx = ecx - 1u;
    COW_AT(100387d7)
            wr32(sp0 - 0x78u, 0u);
            wr32(sp0 - 0xa0u, sp0 - 0x78u);
            wr32(sp0 - 0xa4u, esi);
            d12 = (double)(float)(double)(int32_t)rd32(sp0 - 0x84u);
            wrf32(sp0 - 0x8cu, (float)d12);
            d13 = fr(g, (double)(int32_t)rd32(sp0 - 0x84u) - (double)rdf32(COW_IMG(0x10329a08u)));
            wr32(sp0 - 0x74u, 0u);
            wrf32(sp0 - 0x38u, (float)(double)(float)d13);
            wrf32(sp0 - 0x70u, (float)(double)(float)d13);
            d14 = fr(g, fr(g, d12 + (double)rdf32(sp0 - 0x7cu)) - (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x1cu, (float)(double)(float)d14);
            wrf32(sp0 - 0x54u, (float)(double)(float)d14);
            d15 = fr(g, (double)(int32_t)rd32(sp0 - 0x80u) - (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x50u, (float)(double)(float)d15);
            wrf32(sp0 - 0x6cu, (float)(double)(float)d15);
            d16 = fr(g, fr(g, (double)(int32_t)rd32(sp0 - 0x80u) + (double)rdf32(sp0 - 0x7cu)) - (double)rdf32(COW_IMG(0x10329a08u)));
            wrf32(sp0 - 0x18u, (float)(double)(float)d16);
            wrf32(sp0 - 0x34u, (float)(double)(float)d16);
            d17 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a9e8u)));
            wrf32(sp0 - 0x24u, (float)(double)(float)d17);
            wrf32(sp0 - 0x5cu, (float)(double)(float)d17);
            d18 = fr(g, fr(g, x0 + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1032a9e8u)));
            wrf32(sp0 - 8u, (float)(double)(float)d18);
            wrf32(sp0 - 0x40u, (float)(double)(float)d18);
            d19 = fr(g, (double)rdf32(COW_IMG(0x1032a778u)) * x1);
            wrf32(sp0 - 0x3cu, (float)(double)(float)d19);
            wrf32(sp0 - 0x58u, (float)(double)(float)d19);
            d20 = fr(g, fr(g, x1 + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1032a778u)));
            wrf32(sp0 - 4u, (float)(double)(float)d20);
            wrf32(sp0 - 0x20u, (float)(double)(float)d20);
            g->ecx = ecx;
            g->edx = sp0 - 0x78u;
            g->esp = sp0 - 0x9cu;
            t21 = cow_call_regs(g, COW_IMG(0x1011d840u), eax, g->ecx, g->edx, 1, 2, esi, sp0 - 0x78u);
            t22 = g->ecx;
            t23 = g->edx;
            eax = t21;
            ecx = t22;
            edx = t23;
    COW_AT(10038898)
            g->edx = edx;
            d24 = fr(g, fr(g, (double)(int32_t)rd32(sp0 - 0x78u) * (double)rdf32(sp0 + 0x10u)) + (double)rdf32(sp0 - 0x8cu));
            fpush(g, d24);
            g->esp = sp0 - 0x9cu;
            t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t26 = g->edx;
            eax = t25;
            edx = t26;
    COW_AT(100388af)
            wr32(sp0 - 0x84u, eax);
            wr32(sp0 - 0xa0u, 0x144u);
            t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xa4u, t27);
            g->eax = t27;
            g->esp = sp0 - 0x9cu;
            t28 = cow_thiscall(g, rd32(rd32(t27) + 0x130u), rd32(t27), 2, t27, 0x144u);
            eax = t28;
    COW_AT(100388c9)
            wr32(sp0 - 0xa0u, 0x1cu);
            wr32(sp0 - 0xa4u, sp0 - 0x70u);
            wr32(sp0 - 0xa8u, 2u);
            wr32(sp0 - 0xacu, 5u);
            g->ebx = 0u;
            g->eax = eax;
            g->edx = sp0 - 0x70u;
            t29 = rd32(COW_IMG(0x1045666cu));
            g->esp = sp0 - 0x9cu;
            t30 = cow_thiscall(g, COW_IMG(0x1000cd00u), t29, 4, 5u, 2u, sp0 - 0x70u, 0x1cu);
            t31 = g->ecx;
            t32 = g->edx;
            eax = t30;
            ecx = t31;
            edx = t32;
    COW_AT(100388df)
            esi = rd32(sp0 - 0x88u);
            loc_80 = rd32(sp0 - 0x80u);
            loc_88 = rd32(sp0 - 0x88u);
        }
    COW_AT(10038901)
        if (rd8(esi) != 0u)
        {
            loc_7c_f = (double)rdf32(sp0 - 0x7cu);
            loc_9c = rd32(sp0 - 0x9cu);
            goto L_10038779;
        }
    COW_AT(10038909)
        edi = rd32(sp0 - 0x9cu);
    }
    COW_AT(1003890a)
    g->ebx = rd32(sp0 - 0x90u);
    g->esi = rd32(sp0 - 0x98u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x94u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10038720(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10038735u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x10038747u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x10038773u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        double loc_7c_f;
        uint32_t loc_80;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_edi = g->edi;
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x88u, arg1);
        (void)sp0;
        return 1;
    }
    case 0x10038779u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_7c_f;
        uint32_t loc_80;
        uint32_t loc_88;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        g->esp = sp0 - 0x9cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10038782u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_7c_f;
        uint32_t loc_80;
        uint32_t loc_88;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        g->esp = sp0 - 0x9cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x1003878cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xa0u;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        wr32(sp0 - 0xa0u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x1003879eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        wr32(sp0 - 0xa0u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x100387a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        wr32(sp0 - 0xa0u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x100387c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x9cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        wr32(sp0 - 0xa0u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x100387d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x9cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        wr32(sp0 - 0xa0u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x10038898u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xa4u;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        wr32(sp0 - 0xa0u, sp0 - 0x78u);
        (void)sp0;
        return 1;
    }
    case 0x100388afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        wr32(sp0 - 0xa0u, sp0 - 0x78u);
        (void)sp0;
        return 1;
    }
    case 0x100388c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x100388dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        wr32(sp0 - 0xa4u, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x100388e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_7c_f;
        uint32_t loc_80;
        uint32_t loc_88;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        g->esp = sp0 - 0x9cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x100388f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10038901u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        g->ebx = 0u;
        g->edi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x10038909u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x1003890au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_7c_f;
        uint32_t loc_80;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c_f = rdf32(sp0 - 0x7cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10038720(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10038720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
