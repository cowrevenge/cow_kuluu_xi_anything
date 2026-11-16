/* f_0x10270a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10270a00(Guest* g)
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
    uint32_t loc_90;
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
    cow_frame(g, sp0, 176u);

    wr32(sp0 - 0x94u, in_esi);
    wr32(sp0 - 0x98u, sp0 - 0x8cu);
    g->edx = in_edx;
    g->esp = sp0 - 0x94u;
    cow_cdecl(g, COW_IMG(0x1026ff10u), 1, sp0 - 0x8cu);
    t1 = g->edx;
    wr32(sp0 - 0x90u, 0u);
    if ((int32_t)rd32(sp0 - 0x8cu) <= 0)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        eax = rd32(sp0 - 0x8cu);
        edx = t1;
        wr32(sp0 - 0x98u, in_ebx);
        wr32(sp0 - 0x9cu, in_ebp);
        wr32(sp0 - 0xa0u, in_edi);
        esi = 0u;
        loc_90 = 0u;
L_10270a29: ;
        wr32(sp0 - 0xa4u, sp0 - 0x88u);
        wr32(sp0 - 0xa8u, esi);
        g->ecx = sp0 - 0x88u;
        g->edx = edx;
        g->esp = sp0 - 0xa0u;
        cow_cdecl(g, COW_IMG(0x1026ff50u), 2, esi, sp0 - 0x88u);
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
            wr32(sp0 - 0xa4u, 0u);
            wr32(sp0 - 0xa8u, sp0 - 0x84u);
            wr32(sp0 - 0xacu, eax);
            g->edx = sp0 - 0x84u;
            g->esp = sp0 - 0xa0u;
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
                if ((int32_t)rd32(ebp + 0x58u) <= 0) goto L_10270b5a;
                ebx = 0u;
L_10270a6c: ;
                t5 = rd32(ebx * 4u + rd32(ebp + 0x98u));
                wr32(sp0 - 0xa4u, t5);
                wr32(sp0 - 0xa8u, 1u);
                wr32(sp0 - 0xacu, ebp);
                g->ecx = t5;
                t6 = rd32(ebp + 0x98u);
                g->esp = sp0 - 0xa0u;
                t7 = cow_cdecl(g, COW_IMG(0x10279ad0u), 3, ebp, 1u, t5);
                t8 = g->ecx;
                edi = t7;
                eax = 0u;
                ecx = 0xffffffffu;
                cf = sp0 - 0xa0u < sp0 - 0xacu;
                pf = PARITY((uint8_t)(sp0 - 0xa0u));
                af = (sp0 - 0xacu ^ sp0 - 0xa0u) >> 4u & 1u;
                zf = sp0 == 0xa0u;
                sf = (int32_t)(sp0 - 0xa0u) < 0;
                of = ((sp0 - 0xacu ^ sp0 - 0xa0u) & (sp0 - 0xa0u ^ 0xcu)) >> 0x1fu;
                while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                if ((int32_t)(~ecx - 1u) < 6)
                {
                    edx = t7;
                }
                else
                {
                    ecx = ~ecx - 1u;
                    edx = t7;
                    if (rd8(ecx + edx - 6u) == 0x43u)
                    {
                        if (rd8(ecx + edx - 5u) == 0x48u)
                        {
                            if (rd8(ecx + edx - 4u) == 0x47u)
                            {
                                eax = edx;
                                esi = sp0 - 0x80u - edx;
L_10270ac1: ;
                                t9 = rd8(eax);
                                wr8(eax + esi, (uint8_t)t9);
                                if ((uint8_t)t9 != 0u)
                                {
                                    eax = eax + 1u;
                                    edx = (edx & 0xffffff00u) | t9;
                                    goto L_10270ac1;
                                }
                                edx = (edx & 0xffffff00u) | t9;
                                t10 = rd32(ebp + 0x34u);
                                wr8(ecx + sp0 - 0x83u, (uint8_t)((uint8_t)arg1 + 0x30u));
                                if ((int32_t)t10 <= 0)
                                {
                                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg1 + 0x30u);
                                    goto L_10270b4a;
                                }
                                edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg1 + 0x30u);
                                edi = 0u;
L_10270ae2: ;
                                wr32(sp0 - 0xa4u, edi);
                                wr32(sp0 - 0xa8u, 1u);
                                wr32(sp0 - 0xacu, ebp);
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0xa0u;
                                t11 = cow_cdecl(g, COW_IMG(0x10279ad0u), 3, ebp, 1u, edi);
                                t12 = g->ecx;
                                t13 = g->edx;
                                eax = t11;
                                ecx = t12;
                                edx = t13;
                                esi = sp0 - 0x80u;
L_10270af2: ;
                                if (rd8(eax) != rd8(esi))
                                {
                                    ecx = (ecx & 0xffffff00u) | rd8(eax);
                                    edx = (edx & 0xffffff00u) | rd8(eax);
                                    cf = rd8(eax) < rd8(esi);
                                    goto L_10270b16;
                                }
                                ecx = (ecx & 0xffffff00u) | rd8(eax);
                                edx = (edx & 0xffffff00u) | rd8(eax);
                                if ((uint8_t)ecx == 0u) goto L_10270b12;
                                if (rd8(eax + 1u) != rd8(esi + 1u))
                                {
                                    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
                                    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
                                    cf = rd8(eax + 1u) < rd8(esi + 1u);
                                    goto L_10270b16;
                                }
                                ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
                                edx = (edx & 0xffffff00u) | rd8(eax + 1u);
                                if ((uint8_t)ecx != 0u)
                                {
                                    eax = eax + 2u;
                                    esi = esi + 2u;
                                    goto L_10270af2;
                                }
L_10270b12: ;
                                eax = 0u;
L_10270b1b: ;
                                if (eax == 0u)
                                {
                                    t14 = rd32(edi * 4u + rd32(ebp + 0x2cu));
                                    wr32(sp0 - 0xa4u, t14);
                                    t15 = rd32(ebx * 4u + rd32(ebp + 0x9cu));
                                    wr32(sp0 - 0xa8u, t15);
                                    wr32(sp0 - 0xacu, ebp);
                                    g->edx = rd32(ebp + 0x9cu);
                                    t16 = rd32(ebp + 0x9cu);
                                    g->esp = sp0 - 0xa0u;
                                    cow_cdecl(g, COW_IMG(0x10273860u), 3, ebp, t15, t14);
                                    t17 = g->edx;
                                    t18 = rd32(ebp + 0x98u);
                                    wr32(ebx * 4u + t18, edi);
                                    ecx = t18;
                                    edx = t17;
                                }
                                if ((int32_t)(edi + 1u) < (int32_t)rd32(ebp + 0x34u))
                                {
                                    edi = edi + 1u;
                                    goto L_10270ae2;
                                }
                            }
                        }
                    }
                }
L_10270b4a: ;
                if ((int32_t)(ebx + 1u) < (int32_t)rd32(ebp + 0x58u))
                {
                    ebx = ebx + 1u;
                    goto L_10270a6c;
                }
                esi = rd32(sp0 - 0x90u);
            }
        }
L_10270b5a: ;
        wr32(sp0 - 0x90u, esi + 1u);
        if ((int32_t)(esi + 1u) < (int32_t)rd32(sp0 - 0x8cu))
        {
            eax = rd32(sp0 - 0x8cu);
            loc_90 = esi + 1u;
            esi = esi + 1u;
            goto L_10270a29;
        }
        ebx = rd32(sp0 - 0x98u);
        ebp = rd32(sp0 - 0x9cu);
        edi = rd32(sp0 - 0xa0u);
    }
    g->ebx = ebx;
    g->edi = edi;
    g->ebp = ebp;
    return 0u;
L_10270b16: ;
    eax = -cf + 1u - cf;
    goto L_10270b1b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10270a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10270a00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
