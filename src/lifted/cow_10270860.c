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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 180u);

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
    }
    else
    {
        eax = rd32(sp0 - 0x90u);
        edx = t1;
        wr32(sp0 - 0x9cu, in_ebx);
        wr32(sp0 - 0xa0u, in_ebp);
        wr32(sp0 - 0xa4u, in_edi);
        esi = 0u;
        loc_8c = 0u;
L_10270889: ;
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
                wr32(sp0 - 0x94u, 0u);
                if ((int32_t)rd32(ebp + 0x58u) <= 0) goto L_102709d3;
                eax = 0u;
                loc_94 = 0u;
L_102708d0: ;
                t5 = rd32(rd32(ebp + 0x98u) + rd32(eax * 4u + rd32(ebp + 0xa0u)) * 4u);
                wr32(sp0 - 0xa8u, t5);
                wr32(sp0 - 0xacu, 1u);
                wr32(sp0 - 0xb0u, ebp);
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
                    if (rd8(ecx + edx - 6u) == 0x43u)
                    {
                        if (rd8(ecx + edx - 5u) == 0x48u)
                        {
                            if (rd8(ecx + edx - 4u) == 0x47u)
                            {
                                eax = edx;
                                esi = sp0 - 0x80u - edx;
L_1027092e: ;
                                t10 = rd8(eax);
                                wr8(eax + esi, (uint8_t)t10);
                                if ((uint8_t)t10 != 0u)
                                {
                                    eax = eax + 1u;
                                    edx = (edx & 0xffffff00u) | t10;
                                    goto L_1027092e;
                                }
                                edx = (edx & 0xffffff00u) | t10;
                                t11 = rd32(ebp + 0x34u);
                                wr8(ecx + sp0 - 0x83u, (uint8_t)((uint8_t)arg1 + 0x30u));
                                if ((int32_t)t11 <= 0)
                                {
                                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg1 + 0x30u);
                                    goto L_102709bb;
                                }
                                edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg1 + 0x30u);
                                edi = 0u;
L_1027094f: ;
                                wr32(sp0 - 0xa8u, edi);
                                wr32(sp0 - 0xacu, 1u);
                                wr32(sp0 - 0xb0u, ebp);
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
                                if (rd8(eax) != rd8(esi))
                                {
                                    ecx = (ecx & 0xffffff00u) | rd8(eax);
                                    edx = (edx & 0xffffff00u) | rd8(eax);
                                    cf = rd8(eax) < rd8(esi);
                                    goto L_10270983;
                                }
                                ecx = (ecx & 0xffffff00u) | rd8(eax);
                                edx = (edx & 0xffffff00u) | rd8(eax);
                                if ((uint8_t)ecx == 0u) goto L_1027097f;
                                if (rd8(eax + 1u) != rd8(esi + 1u))
                                {
                                    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
                                    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
                                    cf = rd8(eax + 1u) < rd8(esi + 1u);
                                    goto L_10270983;
                                }
                                ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
                                edx = (edx & 0xffffff00u) | rd8(eax + 1u);
                                if ((uint8_t)ecx != 0u)
                                {
                                    eax = eax + 2u;
                                    esi = esi + 2u;
                                    goto L_1027095f;
                                }
L_1027097f: ;
                                eax = 0u;
L_10270988: ;
                                if (eax == 0u)
                                {
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
                                if ((int32_t)(edi + 1u) < (int32_t)rd32(ebp + 0x34u))
                                {
                                    edi = edi + 1u;
                                    goto L_1027094f;
                                }
                            }
                        }
                    }
                }
L_102709bb: ;
                t19 = rd32(sp0 - 0x94u) + 1u;
                wr32(sp0 - 0x94u, t19);
                if ((int32_t)(rd32(sp0 - 0x94u) + 1u) < (int32_t)rd32(ebp + 0x58u))
                {
                    eax = t19;
                    loc_94 = t19;
                    goto L_102708d0;
                }
                esi = rd32(sp0 - 0x8cu);
            }
        }
L_102709d3: ;
        wr32(sp0 - 0x8cu, esi + 1u);
        if ((int32_t)(esi + 1u) < (int32_t)rd32(sp0 - 0x90u))
        {
            eax = rd32(sp0 - 0x90u);
            loc_8c = esi + 1u;
            esi = esi + 1u;
            goto L_10270889;
        }
        ebx = rd32(sp0 - 0x9cu);
        ebp = rd32(sp0 - 0xa0u);
        edi = rd32(sp0 - 0xa4u);
    }
    g->ebx = ebx;
    g->edi = edi;
    g->ebp = ebp;
    return 0u;
L_10270983: ;
    eax = -cf + 1u - cf;
    goto L_10270988;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10270860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10270860(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
