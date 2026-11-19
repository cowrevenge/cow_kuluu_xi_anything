/* f_0x102d1d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102d1d30(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d23;
    double d26;
    double d29;
    double d32;
    double d35;
    double d38;
    double d40;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
    uint32_t loc_110;
    uint32_t t1;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t36;
    uint32_t t37;
    uint32_t t39;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 304u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d1d88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); in_ebx = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_108 = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x114u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_102d1d88;
    case 0x102d1d97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); in_ebx = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_108 = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x114u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_102d1d97;
    case 0x102d1d9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); in_ebx = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_108 = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x114u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_102d1d9b;
    case 0x102d1db4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); in_ebx = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_108 = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x114u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_102d1db4;
    case 0x102d1dc7u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); in_ebx = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_108 = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x114u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_102d1dc7;
    case 0x102d1de3u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); in_ebx = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_108 = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x114u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_102d1de3;
    case 0x102d1deau: ecx = g->ecx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); in_ebx = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_108 = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x114u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_102d1dea;
    case 0x102d1defu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); in_ebx = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_108 = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x114u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_102d1def;
    case 0x102d1df1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); in_ebx = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_108 = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x114u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_102d1df1;
    case 0x102d1e14u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e14;
    case 0x102d1e20u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e20;
    case 0x102d1e28u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e28;
    case 0x102d1e2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e2c;
    case 0x102d1e36u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e36;
    case 0x102d1e40u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e40;
    case 0x102d1e4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e4a;
    case 0x102d1e5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e5f;
    case 0x102d1e6au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e6a;
    case 0x102d1e77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e77;
    case 0x102d1e7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e7d;
    case 0x102d1e7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e7f;
    case 0x102d1e83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e83;
    case 0x102d1e85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e85;
    case 0x102d1e8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e8b;
    case 0x102d1e92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e92;
    case 0x102d1e9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1e9f;
    case 0x102d1eb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1eb5;
    case 0x102d1ec8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1ec8;
    case 0x102d1ecdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1ecd;
    case 0x102d1ee6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_102d1ee6;
    case 0x102d1f00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_102d1f00;
    case 0x102d1f07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_102d1f07;
    case 0x102d1f1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); x0 = ST(0); goto E_102d1f1a;
    case 0x102d1f75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); x0 = ST(0); goto E_102d1f75;
    case 0x102d1f7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_102d1f7f;
    case 0x102d1f87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_102d1f87;
    case 0x102d1f91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_102d1f91;
    case 0x102d20a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_102d20a7;
    default: break;
    }
#endif

    COW_AT(102d1d30)
    wr32(sp0 - 0x114u, in_ebx);
    wr32(sp0 - 0x118u, in_ebp);
    wr32(sp0 - 0x10cu, 0x508b771fu);
    wr32(sp0 - 0x11cu, in_esi);
    wr32(sp0 - 0x120u, in_edi);
    wr32(sp0 - 0x110u, 0x508b771fu);
    t1 = arg1 + arg2 * 0xccu + 0x2a28u;
    wr32(sp0 - 0x108u, t1);
    eax = 0xffffffe0u;
    ecx = t1 + 0x40u;
    ebx = sp0 - 0xc0u - t1;
    esi = t1;
    loc_110 = 0x508b771fu;
    loc_108 = t1;
L_102d1d88: ;
    COW_AT(102d1d88)
    t2 = rd32(ecx);
    wr32(eax * 4u + sp0 - 0x80u, t2);
    if (loc_110 < t2)
    {
        edx = t2;
    COW_AT(102d1d97)
        wr32(sp0 - 0x110u, edx);
        loc_110 = edx;
    }
    COW_AT(102d1d9b)
    t3 = rd32(arg4 + eax * 4u + 0x80u);
    wr32(ebx + ecx, t3);
    wr32(ecx, t3);
    if ((int32_t)(eax + 1u) < 0)
    {
        eax = eax + 1u;
        ecx = ecx + 4u;
        goto L_102d1d88;
    }
    edx = t3;
    COW_AT(102d1db4)
    if (rd32(arg1 + 0x2d64u) == 0u)
    {
        eax = arg2;
        ecx = rd32(arg1 + 0x2d64u);
    }
    else
    {
    COW_AT(102d1dc7)
        if (rd32(arg2 * 4u + arg3 + 0xb68u) == rd32(arg2 * 4u + arg3 + 0xb78u))
        {
            ecx = rd32(arg2 * 4u + arg3 + 0xb68u);
    COW_AT(102d1dea)
            if (ecx == 3u)
            {
                eax = 0xffffffffu;
                edx = arg3;
            }
            else
            {
    COW_AT(102d1def)
                eax = 0u;
                edx = arg3;
            }
        }
        else
        {
            ecx = rd32(arg2 * 4u + arg3 + 0xb68u);
    COW_AT(102d1de3)
            eax = 5u;
            edx = arg3;
        }
    }
    COW_AT(102d1df1)
    wr32(sp0 - 0x124u, eax);
    wr32(sp0 - 0x128u, sp0 - 0x100u);
    wr32(sp0 - 0x12cu, esi);
    g->eax = sp0 - 0x100u;
    g->esp = sp0 - 0xc8u;
    t4 = cow_bridge_indirect(g, COW_IMG(0x102d20c0u), 0u, 25u, (const uint32_t[]){esi, sp0 - 0x100u, eax, in_edi, in_esi, in_ebp, in_ebx, loc_110, 0x508b771fu, loc_108, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu)}, g->ecx, g->edx, g->eax, 100u);
    t5 = rd32(sp0 - 0x110u);
    wr32(esi + 0xc0u, t5);
    wr32(sp0 - 0x10cu, t4);
    if (arg2 != 0u)
    {
        edx = t4;
        loc_10c = t4;
    }
    else
    {
        edx = t4;
        loc_10c = t4;
    COW_AT(102d1e14)
        t6 = rd32(esi + 0xc8u);
        wr32(arg1 + 0x2d58u, t6);
    }
    COW_AT(102d1e20)
    if (edx != 0u) goto L_102d1ee6;
    COW_AT(102d1e28)
    if (arg2 != 0u) goto L_102d1e92;
    COW_AT(102d1e2c)
    if (rd32(arg1 + 0x2d64u) != 0u) goto L_102d1e92;
    COW_AT(102d1e36)
    if (rd32(esi + 0xc8u) != 0u) goto L_102d1e92;
    eax = rd32(esi + 0xc8u);
    COW_AT(102d1e40)
    if (rd32(arg1 + 0x2bbcu) == 0u) goto L_102d1e92;
    ecx = rd32(arg1 + 0x2bbcu);
    COW_AT(102d1e4a)
    d7 = (double)rdf32(esi + 0xc0u);
    if ((cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103456e0u)), 0u) & 0x4100u) == 0u) goto L_102d1e92;
    COW_AT(102d1e5f)
    if ((int32_t)ecx <= 0)
    {
        ebx = 4u;
        edi = 4u;
    }
    else
    {
    COW_AT(102d1e6a)
        edx = arg1 + 0x2b14u;
        ebx = 4u;
        edi = 4u;
L_102d1e77: ;
    COW_AT(102d1e77)
        if ((int32_t)ebx <= (int32_t)rd32(edx))
        {
            eax = rd32(edx);
        }
        else
        {
            eax = rd32(edx);
    COW_AT(102d1e7d)
            ebx = eax;
        }
    COW_AT(102d1e7f)
        if ((int32_t)edi < (int32_t)eax)
        {
    COW_AT(102d1e83)
            edi = eax;
        }
    COW_AT(102d1e85)
        if (ecx != 1u)
        {
            ecx = ecx - 1u;
            edx = edx + 4u;
            goto L_102d1e77;
        }
    }
    COW_AT(102d1e8b)
    if ((int32_t)(edi - ebx) >= 2) goto L_102d1e9f;
L_102d1e92: ;
    COW_AT(102d1e92)
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    return 0u;
L_102d1e9f: ;
    COW_AT(102d1e9f)
    if ((int32_t)(rd32(arg1 + 0x2af4u) + 1u) <= 0)
    {
        edi = rd32(arg1 + 0x2af4u);
        goto L_102d1ecd;
    }
    eax = arg1;
    ecx = 0u;
    edx = rd32(arg1 + 0x2af4u) + 1u;
    edi = rd32(arg1 + 0x2af4u);
L_102d1eb5: ;
    COW_AT(102d1eb5)
    d8 = (double)rdf32(ecx * 4u + sp0 - 0x100u);
    if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103456e0u)), 0u) & 0x4100u) == 0u) goto L_102d1e92;
    eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103456e0u)), 0u) & 0x4100u;
    COW_AT(102d1ec8)
    if ((int32_t)(ecx + 1u) < (int32_t)edx)
    {
        ecx = ecx + 1u;
        goto L_102d1eb5;
    }
L_102d1ecd: ;
    COW_AT(102d1ecd)
    wr32(sp0 - 0x10cu, 1u);
    wr32(esi, edi);
    wr32(esi + 0x20u, 5u);
    edx = 1u;
    loc_10c = 1u;
L_102d1ee6: ;
    COW_AT(102d1ee6)
    t9 = arg1 + arg2 * 4u + 0x1000u;
    wr32(sp0 - 0x104u, t9);
    wr32(edx * 4u + esi + 0x20u, 4u);
    eax = t9;
    ecx = t9;
    ebx = esi + 0x20u;
    edi = 0u;
    loc_104 = t9;
L_102d1f00: ;
    COW_AT(102d1f00)
    if (rd32(ebx) == 4u)
    {
        ebp = rd32(ebx);
        goto L_102d1f7f;
    }
    ebp = rd32(ebx);
    COW_AT(102d1f07)
    if (ecx >= eax + rd32(edi * 4u + esi) * 0x80u)
    {
        x0 = (double)rdf32(COW_IMG(0x10345680u) + ebp * 4u);
        goto L_102d1f75;
    }
    edx = eax + rd32(edi * 4u + esi) * 0x80u;
    x0 = (double)rdf32(COW_IMG(0x10345680u) + ebp * 4u);
L_102d1f1a: ;
    COW_AT(102d1f1a)
    d10 = fr(g, x0 * (double)rdf32(ecx));
    wrf32(ecx, (float)d10);
    d11 = fr(g, x0 * (double)rdf32(ecx + 0x10u));
    wrf32(ecx + 0x10u, (float)d11);
    d12 = fr(g, x0 * (double)rdf32(ecx + 0x20u));
    wrf32(ecx + 0x20u, (float)d12);
    d13 = fr(g, x0 * (double)rdf32(ecx + 0x30u));
    wrf32(ecx + 0x30u, (float)d13);
    d14 = fr(g, x0 * (double)rdf32(ecx + 0x40u));
    wrf32(ecx + 0x40u, (float)d14);
    d15 = fr(g, x0 * (double)rdf32(ecx + 0x50u));
    wrf32(ecx + 0x50u, (float)d15);
    d16 = fr(g, x0 * (double)rdf32(ecx + 0x60u));
    wrf32(ecx + 0x60u, (float)d16);
    d17 = fr(g, x0 * (double)rdf32(ecx + 0x70u));
    wrf32(ecx + 0x70u, (float)d17);
    if (ecx + 0x80u < edx)
    {
        ecx = ecx + 0x80u;
        goto L_102d1f1a;
    }
    ecx = ecx + 0x80u;
L_102d1f75: ;
    COW_AT(102d1f75)
    d18 = fr(g, x0 * (double)rdf32(ecx));
    wrf32(ecx, (float)d18);
    ecx = ecx + 0x10u;
L_102d1f91: ;
    COW_AT(102d1f91)
    t19 = ebp * 7u + rd32(edi * 4u + esi + 0x24u);
    t20 = t19 + rd32(edi * 4u + esi + 0x24u) - ebp;
    t21 = (t19 << 0x14u) + rd32(COW_IMG(0x103456c0u) + (t19 & 7u) * 4u);
    wr32(sp0 - 0x110u, t21);
    t22 = rd32(edi * 4u + esi + 0x24u);
    d23 = fr(g, cow_bits2f(t21) * (double)rdf32(ecx));
    wrf32(ecx, (float)d23);
    t24 = t20 + t22 - ebp;
    t25 = (t20 << 0x14u) + rd32(COW_IMG(0x103456c0u) + (t20 & 7u) * 4u);
    wr32(sp0 - 0x110u, t25);
    d26 = fr(g, cow_bits2f(t25) * (double)rdf32(ecx + 0x10u));
    wrf32(ecx + 0x10u, (float)d26);
    t27 = t22 + t24 - ebp;
    t28 = (t24 << 0x14u) + rd32(COW_IMG(0x103456c0u) + (t24 & 7u) * 4u);
    wr32(sp0 - 0x110u, t28);
    d29 = fr(g, cow_bits2f(t28) * (double)rdf32(ecx + 0x20u));
    wrf32(ecx + 0x20u, (float)d29);
    t30 = t22 + t27 - ebp;
    t31 = (t27 << 0x14u) + rd32(COW_IMG(0x103456c0u) + (t27 & 7u) * 4u);
    wr32(sp0 - 0x110u, t31);
    d32 = fr(g, cow_bits2f(t31) * (double)rdf32(ecx + 0x30u));
    wrf32(ecx + 0x30u, (float)d32);
    t33 = t22 + t30 - ebp;
    t34 = (t30 << 0x14u) + rd32(COW_IMG(0x103456c0u) + (t30 & 7u) * 4u);
    wr32(sp0 - 0x110u, t34);
    d35 = fr(g, cow_bits2f(t34) * (double)rdf32(ecx + 0x40u));
    wrf32(ecx + 0x40u, (float)d35);
    t36 = t22 + t33 - ebp;
    t37 = (t33 << 0x14u) + rd32(COW_IMG(0x103456c0u) + (t33 & 7u) * 4u);
    wr32(sp0 - 0x110u, t37);
    d38 = fr(g, cow_bits2f(t37) * (double)rdf32(ecx + 0x50u));
    wrf32(ecx + 0x50u, (float)d38);
    t39 = (t36 << 0x14u) + rd32(COW_IMG(0x103456c0u) + (t36 & 7u) * 4u);
    wr32(sp0 - 0x110u, t39);
    d40 = fr(g, cow_bits2f(t39) * (double)rdf32(ecx + 0x60u));
    wrf32(ecx + 0x60u, (float)d40);
    eax = loc_104;
    ecx = ecx + 0x70u;
    edx = loc_10c;
    ebx = edi * 4u + esi + 0x24u;
    esi = rd32(sp0 - 0x108u);
    edi = edi + 1u;
    goto L_102d1f00;
L_102d1f7f: ;
    COW_AT(102d1f7f)
    if (edi == edx) goto L_102d20a7;
    COW_AT(102d1f87)
    ecx = eax + rd32(edi * 4u + esi) * 0x80u + 0x10u;
    goto L_102d1f91;
L_102d20a7: ;
    COW_AT(102d20a7)
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    return edx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d1d30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d1d88u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_108;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        in_ebx = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        g->edi = arg4 - (sp0 - 0x100u);
        wr32(sp0 - 0x10cu, 0x508b771fu);
        (void)sp0;
        return 1;
    }
    case 0x102d1d97u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_108;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        in_ebx = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        g->edi = arg4 - (sp0 - 0x100u);
        wr32(sp0 - 0x10cu, 0x508b771fu);
        (void)sp0;
        return 1;
    }
    case 0x102d1d9bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_108;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        in_ebx = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        g->edi = arg4 - (sp0 - 0x100u);
        wr32(sp0 - 0x10cu, 0x508b771fu);
        (void)sp0;
        return 1;
    }
    case 0x102d1db4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_108;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        in_ebx = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        wr32(sp0 - 0x10cu, 0x508b771fu);
        (void)sp0;
        return 1;
    }
    case 0x102d1dc7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_108;
        uint32_t loc_110;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        in_ebx = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        g->eax = arg2;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x10cu, 0x508b771fu);
        (void)sp0;
        return 1;
    }
    case 0x102d1de3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_108;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        in_ebx = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        g->edx = arg3;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x10cu, 0x508b771fu);
        (void)sp0;
        return 1;
    }
    case 0x102d1deau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_108;
        uint32_t loc_110;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        in_ebx = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        g->eax = 0xffffffffu;
        g->edx = arg3;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x10cu, 0x508b771fu);
        (void)sp0;
        return 1;
    }
    case 0x102d1defu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_108;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        in_ebx = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        g->edx = arg3;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x10cu, 0x508b771fu);
        (void)sp0;
        return 1;
    }
    case 0x102d1df1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_108;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        in_ebx = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x10cu, 0x508b771fu);
        (void)sp0;
        return 1;
    }
    case 0x102d1e14u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e20u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e28u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e2cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e36u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e40u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e4au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e5fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e6au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebx = 4u;
        g->ebp = arg2;
        g->edi = 4u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e77u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e7du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e7fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e83u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e85u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e8bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e92u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1e9fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1eb5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1ec8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1ecdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1ee6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x120u;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1f00u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1f07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1f1au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_110;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        x0 = ST(0);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1f75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_110;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        x0 = ST(0);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1f7fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1f87u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d1f91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102d20a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_104;
        uint32_t loc_10c;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d1d30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d1d30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
