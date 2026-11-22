/* f_0x102d9f24 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_102d9f24(Guest* g)
{
    double d16;
    double d17;
    double d18;
    double d29;
    double d30;
    double d31;
    double d33;
    double d34;
    double d35;
    double d37;
    double d38;
    double d39;
    double d7;
    double d8;
    double d9;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    uint32_t t3;
    uint32_t t32;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 244u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d9f3fu: ecx = g->ecx; in_edx = g->edx; in_edi = rd32(sp1 - 0xd0u); in_esi = rd32(sp1 - 0xccu); in_ebp = rd32(sp0 - 4u); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0xd0u); g->esi = rd32(sp1 - 0xccu); goto E_102d9f3f;
    case 0x102d9f49u: ecx = g->ecx; in_edx = g->edx; in_edi = rd32(sp1 - 0xd0u); in_esi = rd32(sp1 - 0xccu); in_ebp = rd32(sp0 - 4u); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0xd0u); g->esi = rd32(sp1 - 0xccu); goto E_102d9f49;
    case 0x102d9fb6u: ecx = g->ecx; edx = g->edx; goto E_102d9fb6;
    case 0x102d9fc6u: ecx = g->ecx; edx = g->edx; goto E_102d9fc6;
    case 0x102d9fd3u: ecx = g->ecx; edx = g->edx; goto E_102d9fd3;
    case 0x102da04bu: ecx = g->ecx; edx = g->edx; goto E_102da04b;
    case 0x102da057u: ecx = g->ecx; edx = g->edx; goto E_102da057;
    case 0x102da063u: ecx = g->ecx; edx = g->edx; goto E_102da063;
    case 0x102da082u: ecx = g->ecx; edx = g->edx; goto E_102da082;
    case 0x102da08bu: ecx = g->ecx; edx = g->edx; goto E_102da08b;
    case 0x102da097u: ecx = g->ecx; edx = g->edx; goto E_102da097;
    case 0x102da0a3u: ecx = g->ecx; edx = g->edx; goto E_102da0a3;
    case 0x102da0a8u: ecx = g->ecx; in_edx = g->edx; in_edi = rd32(sp1 - 0xd0u); in_esi = rd32(sp1 - 0xccu); in_ebp = rd32(sp0 - 4u); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0xd0u); g->esi = rd32(sp1 - 0xccu); goto E_102da0a8;
    case 0x102da0fcu: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp1 - 0xd0u); in_esi = rd32(sp1 - 0xccu); in_ebp = rd32(sp0 - 4u); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0xd0u); g->esi = rd32(sp1 - 0xccu); goto E_102da0fc;
    case 0x102da14cu: ecx = g->ecx; edx = g->edx; goto E_102da14c;
    case 0x102da152u: ecx = g->ecx; edx = g->edx; goto E_102da152;
    case 0x102da15fu: ecx = g->ecx; edx = g->edx; goto E_102da15f;
    case 0x102da16du: ecx = g->ecx; edx = g->edx; goto E_102da16d;
    case 0x102da18cu: ecx = g->ecx; edx = g->edx; goto E_102da18c;
    case 0x102da1a8u: ecx = g->ecx; edx = g->edx; goto E_102da1a8;
    case 0x102da1adu: ecx = g->ecx; edx = g->edx; goto E_102da1ad;
    case 0x102da1b4u: ecx = g->ecx; edx = g->edx; goto E_102da1b4;
    case 0x102da1ceu: ecx = g->ecx; edx = g->edx; goto E_102da1ce;
    default: break;
    }
#endif

    COW_AT(102d9f24)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0xccu, in_esi);
    wr32(sp1 - 0xd0u, in_edi);
    if (arg4 == 0u)
    {
    COW_AT(102da0fc)
        wrf32(arg1 + 0x38u, (float)0.0);
        wrf32(arg1 + 0x34u, (float)0.0);
        wrf32(arg1 + 0x30u, (float)0.0);
        wrf32(arg1 + 0x2cu, (float)0.0);
        wrf32(arg1 + 0x24u, (float)0.0);
        wrf32(arg1 + 0x20u, (float)0.0);
        wrf32(arg1 + 0x1cu, (float)0.0);
        wrf32(arg1 + 0x18u, (float)0.0);
        wrf32(arg1 + 0x10u, (float)0.0);
        wrf32(arg1 + 0xcu, (float)0.0);
        wrf32(arg1 + 8u, (float)0.0);
        wrf32(arg1 + 4u, (float)0.0);
        wrf32(arg1 + 0x3cu, (float)1.0);
        wrf32(arg1 + 0x28u, (float)1.0);
        wrf32(arg1 + 0x14u, (float)1.0);
        wrf32(arg1, (float)1.0);
        ecx = self;
        edx = in_edx;
    }
    else
    {
    COW_AT(102d9f3f)
        if (arg3 == 0u)
        {
    COW_AT(102da0a8)
            wrf32(arg1 + 0x38u, (float)0.0);
            wrf32(arg1 + 0x34u, (float)0.0);
            wrf32(arg1 + 0x30u, (float)0.0);
            wrf32(arg1 + 0x2cu, (float)0.0);
            wrf32(arg1 + 0x24u, (float)0.0);
            wrf32(arg1 + 0x20u, (float)0.0);
            wrf32(arg1 + 0x1cu, (float)0.0);
            wrf32(arg1 + 0x18u, (float)0.0);
            wrf32(arg1 + 0x10u, (float)0.0);
            wrf32(arg1 + 0xcu, (float)0.0);
            wrf32(arg1 + 8u, (float)0.0);
            wrf32(arg1 + 4u, (float)0.0);
            wr32(arg1, rd32(arg4));
            t25 = rd32(arg4 + 4u);
            wr32(arg1 + 0x14u, t25);
            t26 = rd32(arg4 + 8u);
            wrf32(arg1 + 0x3cu, (float)1.0);
            wr32(arg1 + 0x28u, t26);
            ecx = t25;
            edx = in_edx;
        }
        else
        {
    COW_AT(102d9f49)
            wrf32(sp1 - 0x88u, (float)(double)(float)0.0);
            wr32(sp1 - 0xd4u, arg3);
            wrf32(sp1 - 0x8cu, (float)(double)(float)0.0);
            wr32(sp1 - 0xc0u, rd32(arg4));
            wrf32(sp1 - 0x90u, (float)(double)(float)0.0);
            t1 = rd32(arg4 + 8u);
            wr32(sp1 - 0x98u, t1);
            wrf32(sp1 - 0x94u, (float)(double)(float)0.0);
            wr32(sp1 - 0xd8u, sp1 - 0x80u);
            t2 = rd32(arg4 + 4u);
            wr32(sp1 - 0xacu, t2);
            wrf32(sp1 - 0x9cu, (float)(double)(float)0.0);
            wrf32(sp1 - 0xa0u, (float)(double)(float)0.0);
            wrf32(sp1 - 0xa4u, (float)(double)(float)0.0);
            wrf32(sp1 - 0xa8u, (float)(double)(float)0.0);
            wrf32(sp1 - 0xb0u, (float)(double)(float)0.0);
            wrf32(sp1 - 0xb4u, (float)(double)(float)0.0);
            wrf32(sp1 - 0xb8u, (float)(double)(float)0.0);
            wrf32(sp1 - 0xbcu, (float)(double)(float)0.0);
            wrf32(sp1 - 0x84u, (float)(double)(float)1.0);
            g->ecx = t2;
            g->edx = in_edx;
            g->esp = sp1 - 0xd0u;
            cow_stdcall(g, COW_IMG(0x102d7d56u), 2, sp1 - 0x80u, arg3);
            t3 = g->ecx;
            t4 = g->edx;
            ecx = t3;
            edx = t4;
    COW_AT(102d9fb6)
            wr32(sp1 - 0xd4u, sp1 - 0x80u);
            if (arg2 == 0u)
            {
    COW_AT(102da082)
                wr32(sp1 - 0xd8u, arg1);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0xd0u;
                cow_stdcall(g, COW_IMG(0x102d716cu), 2, arg1, sp1 - 0x80u);
                t19 = g->ecx;
                t20 = g->edx;
                ecx = t19;
                edx = t20;
    COW_AT(102da08b)
                wr32(sp1 - 0xd4u, sp1 - 0xc0u);
                wr32(sp1 - 0xd8u, arg1);
                wr32(sp1 - 0xdcu, arg1);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0xd0u;
                cow_stdcall(g, COW_IMG(0x102d6f23u), 3, arg1, arg1, sp1 - 0xc0u);
                t21 = g->ecx;
                t22 = g->edx;
                ecx = t21;
                edx = t22;
    COW_AT(102da097)
                wr32(sp1 - 0xd4u, sp1 - 0x80u);
                wr32(sp1 - 0xd8u, arg1);
                wr32(sp1 - 0xdcu, arg1);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0xd0u;
                cow_stdcall(g, COW_IMG(0x102d6f23u), 3, arg1, arg1, sp1 - 0x80u);
                t23 = g->ecx;
                t24 = g->edx;
                ecx = t23;
                edx = t24;
    COW_AT(102da0a3)
            }
            else
            {
    COW_AT(102d9fc6)
                wr32(sp1 - 0xd8u, sp1 - 0x40u);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0xd0u;
                cow_stdcall(g, COW_IMG(0x102d716cu), 2, sp1 - 0x40u, sp1 - 0x80u);
                t5 = g->ecx;
                t6 = g->edx;
                ecx = t5;
                edx = t6;
    COW_AT(102d9fd3)
                wrf32(arg1 + 0x38u, (float)0.0);
                wrf32(arg1 + 0x34u, (float)0.0);
                wr32(sp1 - 0xd4u, sp1 - 0x40u);
                wr32(sp1 - 0xd8u, arg1);
                wr32(sp1 - 0xdcu, arg1);
                wrf32(arg1 + 0x30u, (float)0.0);
                wrf32(arg1 + 0x2cu, (float)0.0);
                wrf32(arg1 + 0x24u, (float)0.0);
                wrf32(arg1 + 0x20u, (float)0.0);
                wrf32(arg1 + 0x1cu, (float)0.0);
                wrf32(arg1 + 0x18u, (float)0.0);
                wrf32(arg1 + 0x10u, (float)0.0);
                wrf32(arg1 + 0xcu, (float)0.0);
                wrf32(arg1 + 8u, (float)0.0);
                wrf32(arg1 + 4u, (float)0.0);
                wrf32(arg1 + 0x3cu, (float)1.0);
                wrf32(arg1 + 0x28u, (float)1.0);
                wrf32(arg1 + 0x14u, (float)1.0);
                wrf32(arg1, (float)1.0);
                d7 = (double)rdf32(arg2);
                wrf32(arg1 + 0x30u, (float)-d7);
                d8 = (double)rdf32(arg2 + 4u);
                wrf32(arg1 + 0x34u, (float)-d8);
                d9 = (double)rdf32(arg2 + 8u);
                wrf32(arg1 + 0x38u, (float)-d9);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0xd0u;
                cow_stdcall(g, COW_IMG(0x102d6f23u), 3, rd32(sp1 - 0xdcu), rd32(sp1 - 0xd8u), rd32(sp1 - 0xd4u));
                t10 = g->ecx;
                t11 = g->edx;
                ecx = t10;
                edx = t11;
    COW_AT(102da04b)
                wr32(sp1 - 0xd4u, sp1 - 0xc0u);
                wr32(sp1 - 0xd8u, arg1);
                wr32(sp1 - 0xdcu, arg1);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0xd0u;
                cow_stdcall(g, COW_IMG(0x102d6f23u), 3, arg1, arg1, sp1 - 0xc0u);
                t12 = g->ecx;
                t13 = g->edx;
                ecx = t12;
                edx = t13;
    COW_AT(102da057)
                wr32(sp1 - 0xd4u, sp1 - 0x80u);
                wr32(sp1 - 0xd8u, arg1);
                wr32(sp1 - 0xdcu, arg1);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0xd0u;
                cow_stdcall(g, COW_IMG(0x102d6f23u), 3, arg1, arg1, sp1 - 0x80u);
                t14 = g->ecx;
                t15 = g->edx;
                ecx = t14;
                edx = t15;
    COW_AT(102da063)
                d16 = fr(g, (double)rdf32(arg1 + 0x30u) + (double)rdf32(arg2));
                wrf32(arg1 + 0x30u, (float)d16);
                d17 = fr(g, (double)rdf32(arg2 + 4u) + (double)rdf32(arg1 + 0x34u));
                wrf32(arg1 + 0x34u, (float)d17);
                d18 = fr(g, (double)rdf32(arg1 + 0x38u) + (double)rdf32(arg2 + 8u));
                wrf32(arg1 + 0x38u, (float)d18);
            }
        }
    }
    COW_AT(102da14c)
    if (arg6 != 0u)
    {
    COW_AT(102da152)
        wr32(sp1 - 0xd4u, arg6);
        wr32(sp1 - 0xd8u, sp1 - 0x80u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0xd0u;
        cow_stdcall(g, COW_IMG(0x102d7d56u), 2, sp1 - 0x80u, arg6);
        t27 = g->ecx;
        t28 = g->edx;
        ecx = t27;
        edx = t28;
    COW_AT(102da15f)
        wr32(sp1 - 0xd4u, sp1 - 0x80u);
        wr32(sp1 - 0xd8u, arg1);
        wr32(sp1 - 0xdcu, arg1);
        if (arg5 == 0u)
        {
    COW_AT(102da1a8)
            g->edx = edx;
            g->esp = sp1 - 0xd0u;
            cow_stdcall(g, COW_IMG(0x102d6f23u), 3, arg1, arg1, sp1 - 0x80u);
            t36 = g->edx;
            edx = t36;
        }
        else
        {
    COW_AT(102da16d)
            d29 = fr(g, (double)rdf32(arg1 + 0x30u) - (double)rdf32(arg5));
            wrf32(arg1 + 0x30u, (float)d29);
            d30 = fr(g, (double)rdf32(arg1 + 0x34u) - (double)rdf32(arg5 + 4u));
            wrf32(arg1 + 0x34u, (float)d30);
            d31 = fr(g, (double)rdf32(arg1 + 0x38u) - (double)rdf32(arg5 + 8u));
            wrf32(arg1 + 0x38u, (float)d31);
            g->edx = edx;
            g->esp = sp1 - 0xd0u;
            cow_stdcall(g, COW_IMG(0x102d6f23u), 3, rd32(sp1 - 0xdcu), rd32(sp1 - 0xd8u), rd32(sp1 - 0xd4u));
            t32 = g->edx;
            edx = t32;
    COW_AT(102da18c)
            d33 = fr(g, (double)rdf32(arg1 + 0x30u) + (double)rdf32(arg5));
            wrf32(arg1 + 0x30u, (float)d33);
            d34 = fr(g, (double)rdf32(arg1 + 0x34u) + (double)rdf32(arg5 + 4u));
            wrf32(arg1 + 0x34u, (float)d34);
            d35 = fr(g, (double)rdf32(arg1 + 0x38u) + (double)rdf32(arg5 + 8u));
            wrf32(arg1 + 0x38u, (float)d35);
        }
    }
    COW_AT(102da1ad)
    if (arg7 != 0u)
    {
    COW_AT(102da1b4)
        d37 = fr(g, (double)rdf32(arg1 + 0x30u) + (double)rdf32(arg7));
        wrf32(arg1 + 0x30u, (float)d37);
        d38 = fr(g, (double)rdf32(arg7 + 4u) + (double)rdf32(arg1 + 0x34u));
        wrf32(arg1 + 0x34u, (float)d38);
        d39 = fr(g, (double)rdf32(arg7 + 8u) + (double)rdf32(arg1 + 0x38u));
        wrf32(arg1 + 0x38u, (float)d39);
    }
    COW_AT(102da1ce)
    g->esi = rd32(sp1 - 0xccu);
    g->edi = rd32(sp1 - 0xd0u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d9f24(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    switch (at)
    {
    case 0x102d9f3fu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp1 - 0xd0u);
        in_esi = rd32(sp1 - 0xccu);
        in_ebp = rd32(sp0 - 4u);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0xd0u;
        g->eax = arg4;
        g->ebp = sp0 - 4u;
        ST(0) = 0.0;
        (void)sp0;
        return 1;
    }
    case 0x102d9f49u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp1 - 0xd0u);
        in_esi = rd32(sp1 - 0xccu);
        in_ebp = rd32(sp0 - 4u);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0xd0u;
        g->eax = arg4;
        g->ebp = sp0 - 4u;
        ST(0) = 0.0;
        (void)sp0;
        return 1;
    }
    case 0x102d9fb6u:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d9fc6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd4u;
        g->eax = sp1 - 0x80u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        wr32(sp1 - 0xd4u, sp1 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102d9fd3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102da04bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102da057u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102da063u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102da082u:
    {
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd4u;
        g->eax = sp1 - 0x80u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0xd4u, sp1 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102da08bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102da097u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102da0a3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102da0a8u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp1 - 0xd0u);
        in_esi = rd32(sp1 - 0xccu);
        in_ebp = rd32(sp0 - 4u);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0xd0u;
        g->eax = arg4;
        g->ebp = sp0 - 4u;
        ST(0) = 0.0;
        (void)sp0;
        return 1;
    }
    case 0x102da0fcu:
    {
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp1 - 0xd0u);
        in_esi = rd32(sp1 - 0xccu);
        in_ebp = rd32(sp0 - 4u);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        ST(0) = 0.0;
        (void)sp0;
        return 1;
    }
    case 0x102da14cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102da152u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102da15fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102da16du:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xdcu;
        g->eax = sp1 - 0x80u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg5;
        wr32(sp1 - 0xdcu, arg1);
        wr32(sp1 - 0xd8u, arg1);
        wr32(sp1 - 0xd4u, sp1 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102da18cu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102da1a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xdcu;
        g->eax = sp1 - 0x80u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp1 - 0xdcu, arg1);
        wr32(sp1 - 0xd8u, arg1);
        wr32(sp1 - 0xd4u, sp1 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102da1adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102da1b4u:
    {
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->eax = arg7;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102da1ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp1 - 0xd0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d9f24(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d9f24(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
