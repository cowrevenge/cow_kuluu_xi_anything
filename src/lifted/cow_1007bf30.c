/* f_0x1007bf30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_1007bf30(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_cc_f;
    uint32_t loc_d0;
    uint32_t loc_d4;
    uint32_t loc_d8;
    uint32_t loc_dc;
    uint32_t t1;
    uint32_t t10;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 244u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1007bf47u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xdcu); in_esi = rd32(sp0 - 0xd8u); in_ebp = rd32(sp0 - 0xd4u); g->ebp = rd32(sp0 - 0xd4u); g->edi = rd32(sp0 - 0xdcu); g->esi = rd32(sp0 - 0xd8u); goto E_1007bf47;
    case 0x1007bf54u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xdcu); in_esi = rd32(sp0 - 0xd8u); in_ebp = rd32(sp0 - 0xd4u); g->ebp = rd32(sp0 - 0xd4u); g->edi = rd32(sp0 - 0xdcu); g->esi = rd32(sp0 - 0xd8u); goto E_1007bf54;
    case 0x1007bf63u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xdcu); in_esi = rd32(sp0 - 0xd8u); in_ebp = rd32(sp0 - 0xd4u); g->ebp = rd32(sp0 - 0xd4u); g->edi = rd32(sp0 - 0xdcu); g->esi = rd32(sp0 - 0xd8u); goto E_1007bf63;
    case 0x1007bf71u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xdcu); in_esi = rd32(sp0 - 0xd8u); in_ebp = rd32(sp0 - 0xd4u); g->ebp = rd32(sp0 - 0xd4u); g->edi = rd32(sp0 - 0xdcu); g->esi = rd32(sp0 - 0xd8u); goto E_1007bf71;
    case 0x1007bf7au: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xdcu); in_esi = rd32(sp0 - 0xd8u); in_ebp = rd32(sp0 - 0xd4u); g->ebp = rd32(sp0 - 0xd4u); g->edi = rd32(sp0 - 0xdcu); g->esi = rd32(sp0 - 0xd8u); goto E_1007bf7a;
    case 0x1007bf7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007bf7f;
    case 0x1007bf87u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007bf87;
    case 0x1007bf8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007bf8c;
    case 0x1007bf94u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007bf94;
    case 0x1007bfb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007bfb3;
    case 0x1007bfbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007bfbb;
    case 0x1007bfcau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007bfca;
    case 0x1007bfd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007bfd2;
    case 0x1007bfe3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007bfe3;
    case 0x1007bff4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007bff4;
    case 0x1007c074u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007c074;
    case 0x1007c077u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_cc_f = rdf32(sp0 - 0xccu); goto E_1007c077;
    case 0x1007c0ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_cc_f = rdf32(sp0 - 0xccu); goto E_1007c0ec;
    case 0x1007c0f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_cc_f = rdf32(sp0 - 0xccu); goto E_1007c0f7;
    case 0x1007c12au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007c12a;
    case 0x1007c13du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_cc_f = rdf32(sp0 - 0xccu); goto E_1007c13d;
    case 0x1007c148u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_cc_f = rdf32(sp0 - 0xccu); goto E_1007c148;
    case 0x1007c14du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_cc_f = rdf32(sp0 - 0xccu); goto E_1007c14d;
    case 0x1007c166u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007c166;
    case 0x1007c16du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007c16d;
    case 0x1007c17bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007c17b;
    case 0x1007c182u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007c182;
    case 0x1007c192u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007c192;
    case 0x1007c1a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007c1a5;
    case 0x1007c1b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1007c1b0;
    case 0x1007c1bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc_f = rdf32(sp0 - 0xccu); goto E_1007c1bd;
    default: break;
    }
#endif

    COW_AT(1007bf30)
    wr32(sp0 - 0xd0u, in_ebx);
    wr32(sp0 - 0xd4u, in_ebp);
    wr32(sp0 - 0xd8u, in_esi);
    wr32(sp0 - 0xdcu, in_edi);
    if (rd8(COW_IMG(0x10487e48u)) != 0u)
    {
        loc_d0 = in_ebx;
        loc_d4 = in_ebp;
        loc_d8 = in_esi;
        loc_dc = in_edi;
        goto L_1007c1bd;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
    COW_AT(1007bf47)
    if (rd8(COW_IMG(0x10482f18u)) != 0u)
    {
        loc_d0 = in_ebx;
        loc_d4 = in_ebp;
        loc_d8 = in_esi;
        loc_dc = in_edi;
        goto L_1007c1bd;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10482f18u));
    COW_AT(1007bf54)
    if (arg1 == 0u)
    {
        loc_d0 = in_ebx;
        loc_d4 = in_ebp;
        loc_d8 = in_esi;
        loc_dc = in_edi;
        goto L_1007c1bd;
    }
    COW_AT(1007bf63)
    if (rd16(COW_IMG(0x10485f7au)) == 0u)
    {
        loc_d0 = in_ebx;
        loc_d4 = in_ebp;
        loc_d8 = in_esi;
        loc_dc = in_edi;
        goto L_1007c1bd;
    }
    COW_AT(1007bf71)
    if (rd32(arg1) == 0u)
    {
        loc_d0 = in_ebx;
        loc_d4 = in_ebp;
        loc_d8 = in_esi;
        loc_dc = in_edi;
        goto L_1007c1bd;
    }
    COW_AT(1007bf7a)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xdcu;
    t1 = cow_call_regs(g, COW_IMG(0x101cbe50u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1007bf7f)
    if ((uint8_t)eax != 0u) goto L_1007c1a5;
    COW_AT(1007bf87)
    g->edx = edx;
    g->esp = sp0 - 0xdcu;
    t4 = cow_call_regs(g, COW_IMG(0x101cbe60u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(1007bf8c)
    if ((uint8_t)eax != 0u) goto L_1007c1a5;
    COW_AT(1007bf94)
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) == 0u)
    {
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
        goto L_1007c1bd;
    }
    eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    edx = rd32(arg1);
    esi = rd32(COW_IMG(0x10480af0u) + rd32(arg1) * 4u);
    COW_AT(1007bfb3)
    if (esi == 0u)
    {
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
        goto L_1007c1bd;
    }
    COW_AT(1007bfbb)
    if ((rd32(arg1 + 4u) & 0xff000000u) == 0u)
    {
        ebx = in_ebx;
        goto L_1007c0ec;
    }
    ebp = rd32(arg1 + 4u);
    COW_AT(1007bfca)
    if (edx < 0x700u) goto L_1007bfe3;
    COW_AT(1007bfd2)
    if (!(rd32(esi + 0x12cu) >> 0x1eu & 1u))
    {
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
        goto L_1007c1bd;
    }
L_1007bfe3: ;
    COW_AT(1007bfe3)
    if (!(rd32(ecx + 0x120u) >> 9u & 1u))
    {
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
        goto L_1007c1bd;
    }
    COW_AT(1007bff4)
    if ((uint8_t)arg4 != 0u) goto L_1007c028;
    COW_AT(1007bfff)
    if (!(rd32(esi + 0x120u) >> 9u & 1u))
    {
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
        goto L_1007c1bd;
    }
    COW_AT(1007c010)
    if (rd32(esi + 0xa0u) == 0u) goto L_1007c028;
    eax = rd32(esi + 0xa0u);
    COW_AT(1007c01a)
    if (rd16(eax + 0xb2u) != 0u)
    {
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg4;
        goto L_1007c0ec;
    }
L_1007c028: ;
    COW_AT(1007c028)
    if (!(rd32(ecx + 0x128u) >> 6u & 1u)) goto L_1007c087;
    eax = rd32(ecx + 0x128u) >> 6u;
    COW_AT(1007c035)
    if ((uint8_t)arg5 == 0u)
    {
    COW_AT(1007c040)
        t6 = rd32(ecx + 0x78u);
        wr32(sp0 - 0xa8u, t6);
        wr32(sp0 - 0xa4u, t6);
        wr16(sp0 - 0xa0u, 0xacu);
        wr32(sp0 - 0xe0u, sp0 - 0xa8u);
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0x98u, 0u);
        wr8(sp0 - 0x58u, 0u);
        wr8(sp0 - 0x57u, 0u);
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg4;
        g->esp = sp0 - 0xdcu;
        cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0xa8u);
    COW_AT(1007c074)
    }
L_1007c077: ;
    COW_AT(1007c077)
    g->ebx = rd32(sp0 - 0xd0u);
    g->esi = rd32(sp0 - 0xd8u);
    g->edi = rd32(sp0 - 0xdcu);
    g->ebp = rd32(sp0 - 0xd4u);
    return 1u;
L_1007c087: ;
    COW_AT(1007c087)
    if ((uint8_t)arg4 != 0u)
    {
        loc_cc_f = (double)rdf32(sp0 - 0xccu);
        goto L_1007c13d;
    }
    COW_AT(1007c08f)
    t7 = rd32(esi + 0xcu);
    d8 = fr(g, (double)rdf32(esi + 4u) - (double)rdf32(ecx + 4u));
    wr32(sp0 - 0xb0u, t7);
    t9 = rd32(ecx + 8u);
    wr32(sp0 - 0xc4u, t9);
    wrf32(sp0 - 0xccu, (float)(double)(float)d8);
    t10 = rd32(ecx + 0xcu);
    wr32(sp0 - 0xc0u, t10);
    d11 = fr(g, cow_bits2f(t7) - cow_bits2f(t10));
    d12 = fr(g, (double)rdf32(esi + 8u) - cow_bits2f(t9));
    d13 = fr(g, sqrt(fr(g, fr(g, fr(g, d11 * d11) + fr(g, d12 * d12)) + fr(g, (double)(float)d8 * (double)(float)d8))));
    if ((cow_fsw(g, d13, rdf64(COW_IMG(0x1032cf50u)), 2u) & 0x4100u) != 0u)
    {
        loc_cc_f = (double)(float)d8;
        goto L_1007c13d;
    }
    eax = cow_fsw(g, d13, rdf64(COW_IMG(0x1032cf50u)), 2u) & 0x4100u;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg4;
L_1007c0ec: ;
    COW_AT(1007c0ec)
    if ((uint8_t)arg5 != 0u) goto L_1007c077;
    COW_AT(1007c0f7)
    t17 = rd32(ecx + 0x78u);
    wr32(sp0 - 0x54u, t17);
    t18 = rd32(ecx + 0x78u);
    wr32(sp0 - 0x50u, t18);
    wr32(sp0 - 0xe0u, sp0 - 0x54u);
    wr16(sp0 - 0x4cu, 9u);
    wr8(sp0 - 4u, 0u);
    g->ebx = ebx;
    g->esp = sp0 - 0xdcu;
    cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    COW_AT(1007c12a)
    g->ebx = rd32(sp0 - 0xd0u);
    g->esi = rd32(sp0 - 0xd8u);
    g->edi = rd32(sp0 - 0xdcu);
    g->ebp = rd32(sp0 - 0xd4u);
    return 1u;
L_1007c13d: ;
    COW_AT(1007c13d)
    if ((int32_t)rd32(esi + 0x170u) < 2) goto L_1007c14d;
    eax = rd32(esi + 0x170u);
    COW_AT(1007c148)
    if ((int32_t)eax <= 3)
    {
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
        goto L_1007c1bd;
    }
L_1007c14d: ;
    COW_AT(1007c14d)
    wr32(sp0 - 0xe0u, arg3);
    wr32(sp0 - 0xe4u, arg2);
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xecu, ebp);
    wr32(sp0 - 0xf0u, edx);
    g->eax = arg3;
    g->ecx = arg2;
    g->esp = sp0 - 0xc4u;
    t14 = cow_cdecl(g, COW_IMG(0x100780a0u), 11, edx, ebp, 0u, arg2, arg3, rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), cow_f2bits(loc_cc_f), rd32(sp0 - 0xc8u));
    t15 = g->ecx;
    eax = t14;
    ecx = t15;
    COW_AT(1007c166)
    if (eax != 0u)
    {
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
        goto L_1007c1bd;
    }
    COW_AT(1007c16d)
    if (rd32(esi + 0x128u) >> 5u & 1u)
    {
        edx = rd32(esi + 0x128u) >> 5u;
    }
    else
    {
        edx = rd32(esi + 0x128u) >> 5u;
    COW_AT(1007c17b)
        wr8(COW_IMG(0x10482f18u), 1u);
    }
    COW_AT(1007c182)
    wr8(COW_IMG(0x10485a70u), 0u);
    t16 = (eax & 0xffff0000u) | rd16(arg1);
    wr32(sp0 - 0xe0u, t16);
    g->esp = sp0 - 0xdcu;
    cow_thiscall_cdecl(g, COW_IMG(0x100fc320u), ecx, 1, t16);
    COW_AT(1007c192)
    g->ebx = rd32(sp0 - 0xd0u);
    g->esi = rd32(sp0 - 0xd8u);
    g->edi = rd32(sp0 - 0xdcu);
    g->ebp = rd32(sp0 - 0xd4u);
    return 1u;
L_1007c1a5: ;
    COW_AT(1007c1a5)
    if ((uint8_t)arg5 != 0u)
    {
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg5;
    COW_AT(1007c1b0)
        wr32(sp0 - 0xe0u, 0x4bu);
        g->ebx = in_ebx;
        g->esp = sp0 - 0xdcu;
        cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x4bu);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
    }
L_1007c1bd: ;
    COW_AT(1007c1bd)
    g->ebx = loc_d0;
    g->esi = loc_d8;
    g->edi = loc_dc;
    g->ebp = loc_d4;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1007bf30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1007bf47u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xdcu);
        in_esi = rd32(sp0 - 0xd8u);
        in_ebp = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0xd0u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1007bf54u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xdcu);
        in_esi = rd32(sp0 - 0xd8u);
        in_ebp = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0xd0u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1007bf63u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xdcu);
        in_esi = rd32(sp0 - 0xd8u);
        in_ebp = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        wr32(sp0 - 0xd0u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1007bf71u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xdcu);
        in_esi = rd32(sp0 - 0xd8u);
        in_ebp = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        wr32(sp0 - 0xd0u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1007bf7au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xdcu);
        in_esi = rd32(sp0 - 0xd8u);
        in_ebp = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        wr32(sp0 - 0xd0u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1007bf7fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007bf87u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007bf8cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007bf94u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007bfb3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007bfbbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007bfcau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007bfd2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007bfe3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007bff4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007c074u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0xe0u, sp0 - 0xa8u);
        (void)sp0;
        return 1;
    }
    case 0x1007c077u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    case 0x1007c0ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    case 0x1007c0f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    case 0x1007c12au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0xe0u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1007c13du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007c148u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007c14du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007c166u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xf0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007c16du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007c17bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007c182u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007c192u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1007c1a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    case 0x1007c1b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    case 0x1007c1bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_cc_f;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc_f = rdf32(sp0 - 0xccu);
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1007bfff: holds in_ebx, which no location here says
     1007c010: holds in_ebx, which no location here says
     1007c01a: holds in_ebx, which no location here says
     1007c028: holds in_ebx, which no location here says
     1007c035: holds in_ebx, which no location here says
     1007c040: holds in_ebx, which no location here says
     1007c087: holds in_ebx, which no location here says
     1007c08f: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1007bf30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1007bf30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
