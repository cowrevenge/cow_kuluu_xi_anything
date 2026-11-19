/* f_0x10087480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10087480(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d7;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    double loc_c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10087495u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10087495;
    case 0x100874afu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100874af;
    case 0x100874b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100874b7;
    case 0x100874beu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100874be;
    case 0x100874e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100874e3;
    case 0x100874edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100874ed;
    case 0x100874fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100874fa;
    case 0x10087509u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10087509;
    case 0x10087512u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10087512;
    case 0x1008751cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1008751c;
    case 0x10087526u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10087526;
    case 0x10087559u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10087559;
    case 0x10087568u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10087568;
    case 0x10087571u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10087571;
    case 0x10087580u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10087580;
    case 0x10087586u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10087586;
    case 0x1008758au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1008758a;
    case 0x1008759fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1008759f;
    case 0x100875adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100875ad;
    case 0x100875b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100875b4;
    default: break;
    }
#endif

    COW_AT(10087480)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_100875b4;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    COW_AT(10087495)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    d7 = cow_take_float(g);
    fpush(g, d7);
    t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), t4, g->ecx, g->edx, 1, 0);
    if ((int32_t)(uint8_t)rd32(COW_IMG(0x10487e54u)) <= (int32_t)t8)
    {
        eax = t8;
    COW_AT(100874b7)
        wr8(COW_IMG(0x10487e54u), 0u);
    }
    else
    {
        eax = t8;
    COW_AT(100874af)
        wr8(COW_IMG(0x10487e54u), (uint8_t)(rd8(COW_IMG(0x10487e54u)) - (uint8_t)eax));
    }
    COW_AT(100874be)
    t9 = rd32(esi + 4u);
    t10 = rd32(esi + 0xcu);
    eax = t10;
    edx = COW_IMG(0x10480af0u);
    ebx = (in_ebx & 0xffffff00u) | rd8(COW_IMG(0x10487e54u)) == 0u;
    edi = 0u;
    loc_8 = t9;
    loc_4 = t10;
    x0 = (double)rdf32(COW_IMG(0x1032d68cu));
L_100874e3: ;
    COW_AT(100874e3)
    if (rd32(edx) == 0u)
    {
        ecx = rd32(edx);
    }
    else
    {
        ecx = rd32(edx);
    COW_AT(100874ed)
        if (!(rd32(ecx + 0x120u) >> 9u & 1u))
        {
            eax = rd32(ecx + 0x120u) >> 9u;
        }
        else
        {
    COW_AT(100874fa)
            if ((rd32(ecx + 0x78u) & 0xff000000u) != 0x1000000u)
            {
                eax = rd32(ecx + 0x78u) & 0xff000000u;
            }
            else
            {
                eax = rd32(ecx + 0x78u) & 0xff000000u;
    COW_AT(10087509)
                if (rd8(ecx + 0xeeu) == 3u)
                {
    COW_AT(10087512)
                    if (rd32(ecx + 0xa0u) == 0u)
                    {
                        eax = rd32(ecx + 0xa0u);
                    }
                    else
                    {
                        eax = rd32(ecx + 0xa0u);
    COW_AT(1008751c)
                        if (rd16(eax + 0xb2u) == 0u)
                        {
    COW_AT(10087526)
                            d11 = fr(g, (double)rdf32(ecx + 0xcu) - cow_bits2f(loc_4));
                            d12 = fr(g, (double)rdf32(ecx + 4u) - cow_bits2f(loc_8));
                            d13 = (double)(float)fr(g, fr(g, d11 * d11) + fr(g, d12 * d12));
                            if ((cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1032a3a0u)), 1u) & 0x4100u) == 0u)
                            {
                                eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1032a3a0u)), 1u) & 0x4100u;
                            }
                            else
                            {
                                eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1032a3a0u)), 1u) & 0x4100u;
                                loc_c_f = d13;
    COW_AT(10087559)
                                if ((cow_fsw(g, loc_c_f, x0, 1u) & 0x4100u) == 0u)
                                {
                                    eax = cow_fsw(g, loc_c_f, x0, 1u) & 0x4100u;
                                }
                                else
                                {
                                    eax = cow_fsw(g, loc_c_f, x0, 1u) & 0x4100u;
    COW_AT(10087568)
                                    edi = ecx + 0x74u;
                                    x0 = loc_c_f;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    COW_AT(10087571)
    if ((int32_t)(edx + 4u) < (int32_t)COW_IMG(0x10482ef0u))
    {
        edx = edx + 4u;
        goto L_100874e3;
    }
    edx = edx + 4u;
    COW_AT(10087580)
    if (edi == 0u) goto L_100875ad;
    COW_AT(10087586)
    if ((uint8_t)ebx == 0u) goto L_100875b4;
    COW_AT(1008758a)
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t14 = cow_call_regs(g, COW_IMG(0x1007bf30u), eax, g->ecx, g->edx, 1, 5, edi, 0u, 0u, 0u, 1u);
    t15 = g->edx;
    if (t14 == 0u)
    {
        eax = t14;
        edx = t15;
        goto L_100875b4;
    }
    eax = t14;
    edx = t15;
    COW_AT(1008759f)
    wr8(COW_IMG(0x10487e54u), 0x96u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_100875ad: ;
    COW_AT(100875ad)
    wr8(COW_IMG(0x10487e54u), 0u);
L_100875b4: ;
    COW_AT(100875b4)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10087480(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10087495u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x10u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100874afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x10u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100874b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x10u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100874beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x10u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100874e3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100874edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100874fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10087509u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10087512u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1008751cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10087526u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10087559u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10087568u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10087571u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10087580u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10087586u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1008758au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1008759fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100875adu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100875b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10087480(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10087480(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
