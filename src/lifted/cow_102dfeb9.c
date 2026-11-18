/* f_0x102dfeb9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102dfeb9(Guest* g)
{
    double d11;
    double d3;
    double d6;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    double loc_14_f;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102dfed6u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_102dfed6;
    case 0x102dfee3u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_102dfee3;
    case 0x102dfee9u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_102dfee9;
    case 0x102dfef3u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); x0 = ST(1); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_102dfef3;
    case 0x102dfef9u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_102dfef9;
    case 0x102dff23u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102dff23;
    case 0x102dff2du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); goto E_102dff2d;
    case 0x102dff33u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); goto E_102dff33;
    case 0x102dff5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_10_f = rdf32(sp0 - 0x10u); goto E_102dff5e;
    case 0x102dff6au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_10_f = rdf32(sp0 - 0x10u); goto E_102dff6a;
    case 0x102dff6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_10_f = rdf32(sp0 - 0x10u); goto E_102dff6e;
    case 0x102dff7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_10_f = rdf32(sp0 - 0x10u); goto E_102dff7c;
    case 0x102dffa8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102dffa8;
    case 0x102dffb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102dffb6;
    default: break;
    }
#endif

    COW_AT(102dfeb9)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_ebx << 4u);
    g->eax = in_ebx << 4u;
    g->esp = sp0 - 0x18u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, in_ebx << 4u, in_esi, rd32(sp0 - 0x1cu));
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        loc_4 = in_ebp;
        loc_20 = in_esi;
    }
    else
    {
        edx = t2;
        esi = t1;
    COW_AT(102dfed6)
        wr32(sp0 - 0x18u, in_edi);
        wr32(sp0 - 0x1cu, esi);
        if ((int32_t)in_edi >= 0)
        {
            loc_1c = esi;
            x0 = (double)(int32_t)in_edi;
        }
        else
        {
            loc_1c = esi;
    COW_AT(102dfee3)
            x0 = fr(g, (double)(int32_t)in_edi + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102dfee9)
        wr32(sp0 - 0x18u, in_ebx);
        if ((int32_t)in_ebx >= 0)
        {
            x1 = (double)(int32_t)in_ebx;
        }
        else
        {
    COW_AT(102dfef3)
            x1 = fr(g, (double)(int32_t)in_ebx + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102dfef9)
        d3 = (double)(float)fr(g, x0 / x1);
        wrf32(sp0 - 0x14u, (float)d3);
        wr16(sp0 - 8u, (uint16_t)g->fcw);
        t4 = rd32(sp0 - 8u) | 0xc00u;
        wr32(sp0 - 0x10u, t4);
        g->fcw = (uint16_t)t4;
        t5 = rd32(sp0 - 8u);
        wr32(sp0 - 8u, 0u);
        wr32(COW_IMG(0x109b1a48u), t5);
        if (in_ebx == 0u)
        {
            loc_4 = in_ebp;
            loc_20 = in_esi;
            goto L_102dffa8;
        }
        ecx = in_ebx << 4u;
        loc_4 = in_ebp;
        loc_20 = in_esi;
        loc_14_f = d3;
        loc_8 = 0u;
L_102dff23: ;
    COW_AT(102dff23)
        if ((int32_t)loc_8 >= 0)
        {
            eax = loc_8;
            x0 = (double)(int32_t)loc_8;
        }
        else
        {
            eax = loc_8;
            x0 = (double)(int32_t)loc_8;
    COW_AT(102dff2d)
            x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102dff33)
        wr32(sp0 - 0x24u, ecx);
        wr32(sp0 - 0x28u, ecx);
        d6 = fr(g, fr(g, x0 * loc_14_f) - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0xcu, (float)(double)(float)d6);
        wrf64(sp0 - 0x28u, d6);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall_cdecl(g, COW_IMG(0x10316efbu), ecx, 1, cow_dlo(d6));
        t7 = g->edx;
        d8 = cow_take_float(g);
        wrf32(sp0 - 0x10u, (float)(double)(float)d8);
        wr32(sp0 - 0x18u, (uint32_t)fist32(g, (double)(float)d8));
        if ((int32_t)(uint32_t)fist32(g, (double)(float)d8) >= 0)
        {
            eax = (uint32_t)fist32(g, (double)(float)d8);
            ecx = (uint32_t)fist32(g, (double)(float)d8) + 1u;
            edx = t7;
            loc_10_f = (double)(float)d8;
        }
        else
        {
            ecx = (uint32_t)fist32(g, (double)(float)d8) + 1u;
            loc_10_f = (double)(float)d8;
    COW_AT(102dff5e)
            eax = -(arg1 != 0u) & in_edi - 1u;
            edx = in_edi - 1u;
        }
    COW_AT(102dff6a)
        if (ecx >= in_edi)
        {
    COW_AT(102dff6e)
            ecx = ~-(arg1 != 0u) & in_edi - 1u;
            edx = in_edi - 1u;
        }
    COW_AT(102dff7c)
        d9 = (double)rdf32(sp0 - 0xcu);
        wr32(esi, eax);
        wr32(esi + 8u, ecx);
        t10 = rd32(sp0 - 8u) + 1u;
        wr32(sp0 - 8u, t10);
        d11 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d9 - loc_10_f));
        wrf32(esi + 4u, (float)d11);
        wrf32(esi + 0xcu, (float)fr(g, 1.0 - d11));
        if (t10 < in_ebx)
        {
            esi = esi + 0x10u;
            loc_4 = rd32(sp0 - 4u);
            loc_20 = rd32(sp0 - 0x20u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_14_f = (double)rdf32(sp0 - 0x14u);
            loc_8 = t10;
            goto L_102dff23;
        }
        loc_4 = rd32(sp0 - 4u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
L_102dffa8: ;
    COW_AT(102dffa8)
        wr32(sp0 - 0x18u, rd32(COW_IMG(0x109b1a48u)));
        g->fcw = (uint16_t)rd32(COW_IMG(0x109b1a48u));
        eax = loc_1c;
    }
    COW_AT(102dffb6)
    g->esi = loc_20;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102dfeb9(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102dfed6u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ecx = in_ebx << 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfee3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ecx = in_ebx << 4u;
        g->ebp = sp0 - 4u;
        ST(0) = (double)(int32_t)in_edi;
        (void)sp0;
        return 1;
    }
    case 0x102dfee9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        double x0;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x20u;
        g->ecx = in_ebx << 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dfef3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        double x0;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(1);
        g->esp = sp0 - 0x20u;
        g->ecx = in_ebx << 4u;
        g->ebp = sp0 - 4u;
        ST(0) = (double)(int32_t)in_ebx;
        (void)sp0;
        return 1;
    }
    case 0x102dfef9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        double x0;
        double x1;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x20u;
        g->ecx = in_ebx << 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dff23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        double loc_14_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dff2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        double loc_14_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dff33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        double loc_14_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dff5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        double loc_10_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dff6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        double loc_10_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dff6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        double loc_10_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dff7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        double loc_10_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dffa8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        double loc_14_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dffb6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        double loc_14_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102dfeb9(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102dfeb9(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
