/* f_0x10270860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10270860(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8c;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t loc_a0;
    uint32_t loc_a4;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 180u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10270886u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x98u); goto E_10270886;
    case 0x10270889u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_8c = rd32(sp0 - 0x8cu); goto E_10270889;
    case 0x102708a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102708a3;
    case 0x102708bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102708bf;
    case 0x102708d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_94 = rd32(sp0 - 0x94u); goto E_102708d0;
    case 0x10270905u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10270905;
    case 0x10270910u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10270910;
    case 0x1027091bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027091b;
    case 0x10270926u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10270926;
    case 0x1027092eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027092e;
    case 0x10270938u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10270938;
    case 0x1027094fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027094f;
    case 0x1027095fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027095f;
    case 0x10270967u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10270967;
    case 0x1027096bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027096b;
    case 0x10270975u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10270975;
    case 0x1027097fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027097f;
    case 0x10270983u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10270983;
    case 0x10270988u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10270988;
    case 0x1027098cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1027098c;
    case 0x102709b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102709b3;
    case 0x102709bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102709bb;
    case 0x102709cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_94 = rd32(sp0 - 0x94u); goto E_102709cf;
    case 0x102709d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_94 = rd32(sp0 - 0x94u); goto E_102709d3;
    case 0x102709e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_94 = rd32(sp0 - 0x94u); loc_8c = rd32(sp0 - 0x8cu); goto E_102709e4;
    case 0x102709e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_8c = rd32(sp0 - 0x8cu); goto E_102709e7;
    default: break;
    }
#endif

    COW_AT(10270860)
    wr32(sp0 - 0x98u, in_esi);
    wr32(sp0 - 0x9cu, sp0 - 0x90u);
    g->edx = in_edx;
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x1026fe80u), 1, sp0 - 0x90u);
    t1 = g->edx;
    wr32(sp0 - 0x8cu, 0u);
    if ((int32_t)rd32(sp0 - 0x90u) <= 0)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_98 = in_esi;
    }
    else
    {
        eax = rd32(sp0 - 0x90u);
        edx = t1;
    COW_AT(10270886)
        wr32(sp0 - 0x9cu, in_ebx);
        wr32(sp0 - 0xa0u, in_ebp);
        wr32(sp0 - 0xa4u, in_edi);
        esi = 0u;
        loc_98 = in_esi;
        loc_9c = in_ebx;
        loc_8c = 0u;
        loc_a0 = in_ebp;
        loc_a4 = in_edi;
L_10270889: ;
    COW_AT(10270889)
        wr32(sp0 - 0xa8u, sp0 - 0x88u);
        wr32(sp0 - 0xacu, esi);
        g->ecx = sp0 - 0x88u;
        g->edx = edx;
        g->esp = sp0 - 0xa4u;
        cow_cdecl(g, COW_IMG(0x1026fec0u), 2, esi, sp0 - 0x88u);
        t2 = g->ecx;
        t3 = g->edx;
        if ((int32_t)rd32(sp0 - 0x88u) < 0)
        {
            edx = t3;
        }
        else
        {
            eax = rd32(sp0 - 0x88u);
            ecx = t2;
    COW_AT(102708a3)
            wr32(sp0 - 0xa8u, 0u);
            wr32(sp0 - 0xacu, sp0 - 0x84u);
            wr32(sp0 - 0xb0u, eax);
            g->edx = sp0 - 0x84u;
            g->esp = sp0 - 0xa4u;
            cow_cdecl(g, COW_IMG(0x10270260u), 3, eax, sp0 - 0x84u, 0u);
            t4 = g->edx;
            if (rd32(sp0 - 0x84u) == 0u)
            {
                edx = t4;
            }
            else
            {
                edx = t4;
                ebp = rd32(sp0 - 0x84u);
    COW_AT(102708bf)
                wr32(sp0 - 0x94u, 0u);
                if ((int32_t)rd32(ebp + 0x58u) <= 0) goto L_102709d3;
                eax = 0u;
                loc_94 = 0u;
L_102708d0: ;
    COW_AT(102708d0)
                t5 = rd32(rd32(ebp + 0x98u) + rd32(eax * 4u + rd32(ebp + 0xa0u)) * 4u);
                wr32(sp0 - 0xa8u, t5);
                wr32(sp0 - 0xacu, 1u);
                wr32(sp0 - 0xb0u, ebp);
                g->eax = t5;
                g->ecx = rd32(ebp + 0xa0u);
                t6 = rd32(ebp + 0xa0u);
                t7 = rd32(eax * 4u + rd32(ebp + 0xa0u));
                g->esp = sp0 - 0xa4u;
                t8 = cow_cdecl(g, COW_IMG(0x10279ad0u), 3, ebp, 1u, t5);
                t9 = g->ecx;
                edi = t8;
                eax = 0u;
                ecx = 0xffffffffu;
                cf = sp0 - 0xa4u < sp0 - 0xb0u;
                pf = PARITY((uint8_t)(sp0 - 0xa4u));
                af = (sp0 - 0xb0u ^ sp0 - 0xa4u) >> 4u & 1u;
                zf = sp0 == 0xa4u;
                sf = (int32_t)(sp0 - 0xa4u) < 0;
                of = ((sp0 - 0xb0u ^ sp0 - 0xa4u) & (sp0 - 0xa4u ^ 0xcu)) >> 0x1fu;
                while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                if ((int32_t)(~ecx - 1u) < 6)
                {
                    edx = t8;
                }
                else
                {
                    ecx = ~ecx - 1u;
                    edx = t8;
                    ebx = t7;
    COW_AT(10270905)
                    if (rd8(ecx + edx - 6u) == 0x43u)
                    {
    COW_AT(10270910)
                        if (rd8(ecx + edx - 5u) == 0x48u)
                        {
    COW_AT(1027091b)
                            if (rd8(ecx + edx - 4u) == 0x47u)
                            {
    COW_AT(10270926)
                                eax = edx;
                                esi = sp0 - 0x80u - edx;
L_1027092e: ;
    COW_AT(1027092e)
                                t10 = rd8(eax);
                                wr8(eax + esi, (uint8_t)t10);
                                if ((uint8_t)t10 != 0u)
                                {
                                    eax = eax + 1u;
                                    edx = (edx & 0xffffff00u) | t10;
                                    goto L_1027092e;
                                }
                                edx = (edx & 0xffffff00u) | t10;
    COW_AT(10270938)
                                t11 = rd32(ebp + 0x34u);
                                wr8(ecx + sp0 - 0x83u, (uint8_t)((uint8_t)arg1 + 0x30u));
                                if ((int32_t)t11 <= 0)
                                {
                                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg1 + 0x30u);
                                    goto L_102709bb;
                                }
                                eax = t11;
                                edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg1 + 0x30u);
                                edi = 0u;
L_1027094f: ;
    COW_AT(1027094f)
                                wr32(sp0 - 0xa8u, edi);
                                wr32(sp0 - 0xacu, 1u);
                                wr32(sp0 - 0xb0u, ebp);
                                g->eax = eax;
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0xa4u;
                                t12 = cow_cdecl(g, COW_IMG(0x10279ad0u), 3, ebp, 1u, edi);
                                t13 = g->ecx;
                                t14 = g->edx;
                                eax = t12;
                                ecx = t13;
                                edx = t14;
                                esi = sp0 - 0x80u;
L_1027095f: ;
    COW_AT(1027095f)
                                if (rd8(eax) != rd8(esi))
                                {
                                    ecx = (ecx & 0xffffff00u) | rd8(eax);
                                    edx = (edx & 0xffffff00u) | rd8(eax);
                                    cf = rd8(eax) < rd8(esi);
                                    goto L_10270983;
                                }
                                ecx = (ecx & 0xffffff00u) | rd8(eax);
                                edx = (edx & 0xffffff00u) | rd8(eax);
    COW_AT(10270967)
                                if ((uint8_t)ecx == 0u) goto L_1027097f;
    COW_AT(1027096b)
                                if (rd8(eax + 1u) != rd8(esi + 1u))
                                {
                                    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
                                    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
                                    cf = rd8(eax + 1u) < rd8(esi + 1u);
                                    goto L_10270983;
                                }
                                ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
                                edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(10270975)
                                if ((uint8_t)ecx != 0u)
                                {
                                    eax = eax + 2u;
                                    esi = esi + 2u;
                                    goto L_1027095f;
                                }
L_1027097f: ;
    COW_AT(1027097f)
                                eax = 0u;
L_10270988: ;
    COW_AT(10270988)
                                if (eax == 0u)
                                {
    COW_AT(1027098c)
                                    t15 = rd32(edi * 4u + rd32(ebp + 0x2cu));
                                    wr32(sp0 - 0xa8u, t15);
                                    t16 = rd32(rd32(ebp + 0x9cu) + rd32(sp0 - 0x94u) * 4u);
                                    wr32(sp0 - 0xacu, t16);
                                    wr32(sp0 - 0xb0u, ebp);
                                    g->ecx = t16;
                                    g->esp = sp0 - 0xa4u;
                                    cow_cdecl(g, COW_IMG(0x10273860u), 3, ebp, t16, t15);
                                    t17 = g->ecx;
                                    t18 = rd32(ebp + 0x98u);
                                    wr32(ebx * 4u + t18, edi);
                                    ecx = t17;
                                    edx = t18;
                                }
    COW_AT(102709b3)
                                if ((int32_t)(edi + 1u) < (int32_t)rd32(ebp + 0x34u))
                                {
                                    eax = rd32(ebp + 0x34u);
                                    edi = edi + 1u;
                                    goto L_1027094f;
                                }
                            }
                        }
                    }
                }
L_102709bb: ;
    COW_AT(102709bb)
                t19 = rd32(sp0 - 0x94u) + 1u;
                t20 = rd32(sp0 - 0x94u);
                wr32(sp0 - 0x94u, t19);
                if ((int32_t)(t20 + 1u) < (int32_t)rd32(ebp + 0x58u))
                {
                    eax = t19;
                    loc_94 = t19;
                    goto L_102708d0;
                }
    COW_AT(102709cf)
                esi = rd32(sp0 - 0x8cu);
            }
        }
L_102709d3: ;
    COW_AT(102709d3)
        wr32(sp0 - 0x8cu, esi + 1u);
        if ((int32_t)(esi + 1u) < (int32_t)rd32(sp0 - 0x90u))
        {
            eax = rd32(sp0 - 0x90u);
            loc_98 = rd32(sp0 - 0x98u);
            loc_9c = rd32(sp0 - 0x9cu);
            loc_8c = esi + 1u;
            esi = esi + 1u;
            loc_a0 = rd32(sp0 - 0xa0u);
            loc_a4 = rd32(sp0 - 0xa4u);
            goto L_10270889;
        }
    COW_AT(102709e4)
        ebx = rd32(sp0 - 0x9cu);
        ebp = rd32(sp0 - 0xa0u);
        edi = rd32(sp0 - 0xa4u);
        loc_98 = rd32(sp0 - 0x98u);
    }
    COW_AT(102709e7)
    g->ebx = ebx;
    g->esi = loc_98;
    g->edi = edi;
    g->ebp = ebp;
    return 0u;
L_10270983: ;
    COW_AT(10270983)
    eax = -cf + 1u - cf;
    goto L_10270988;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10270860(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10270886u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->esi = 0u;
        wr32(sp0 - 0x9cu, sp0 - 0x90u);
        wr32(sp0 - 0x8cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10270889u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102708a3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        wr32(sp0 - 0xa8u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x102708bfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        wr32(sp0 - 0xacu, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x102708d0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_94;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10270905u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10270910u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1027091bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10270926u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1027092eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10270938u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1027094fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1027095fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10270967u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1027096bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10270975u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1027097fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10270983u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10270988u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1027098cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102709b3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102709bbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102709cfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_94;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102709d3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_94;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102709e4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        uint32_t loc_94;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_94 = rd32(sp0 - 0x94u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102709e7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10270860(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10270860(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
