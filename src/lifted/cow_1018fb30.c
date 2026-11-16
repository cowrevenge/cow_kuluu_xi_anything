/* f_0x1018fb30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1018fb30(Guest* g)
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
    uint32_t loc_4;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(sp0 + 8u);
    edi = t1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t2 = ~ecx - 1u;
    if ((int32_t)(~ecx - 1u) <= 0)
    {
        loc_4 = t2;
        goto L_1018fc20;
    }
    ecx = t2;
    ebx = t1;
    loc_4 = t2;
    edx = in_edx;
    esi = 0u;
    edi = 0u;
L_1018fb55: ;
    t3 = (eax & 0xffffff00u) | rd8(ebx + edi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, t3, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    t7 = (t5 & 0xffffff00u) | rd8(ebx + edi + 1u);
    t8 = (t6 & 0xffffff00u) | rd8(ebx + edi);
    wr32(sp0 + 8u, t4);
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0x1cu;
    t9 = cow_cdecl(g, COW_IMG(0x1018fa20u), 2, t8, t7);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 - 1u > 3u)
    {
        edx = t11;
        ebp = ebx + edi;
        goto L_1018fbf3;
    }
    eax = t9 - 1u;
    ecx = t10;
    edx = t11;
    ebp = ebx + edi;
    t12 = rd32(COW_IMG(0x1018fc30u) + eax * 4u);
    switch (t12 - RD)
    {
    case 0x1018fb85u: goto L_1018fb85;
    case 0x1018fbd2u: goto L_1018fbd2;
    case 0x1018fbfeu: goto L_1018fbfe;
    default: rt_fatal(g, COW_IMG(0x1018fb7eu), "switch");
    }
    return 0;
L_1018fb85: ;
    if (rd8(ebp) == 0xfdu)
    {
        if (rd8(ebx + edi + 1u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(ebx + edi + 1u);
            if (rd8(ebx + edi + 2u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(ebx + edi + 2u);
                if (rd8(ebx + edi + 3u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(ebx + edi + 3u);
                    if (rd8(ebx + edi + 4u) != 0u)
                    {
                        if (rd8(ebx + edi + 5u) == 0xfdu)
                        {
                            if ((int32_t)rd32(sp0 + 8u) <= 0) goto L_1018fbfe;
                            eax = 0u;
                            ecx = rd32(sp0 + 8u);
L_1018fbbc: ;
                            wr8(arg1 + esi, rd8(eax + ebp));
                            if ((int32_t)(eax + 1u) < (int32_t)rd32(sp0 + 8u))
                            {
                                eax = eax + 1u;
                                ecx = rd32(sp0 + 8u);
                                esi = esi + 1u;
                                goto L_1018fbbc;
                            }
                            esi = esi + 1u;
                            edx = arg1;
                        }
                    }
                }
            }
        }
    }
L_1018fbfe: ;
    if ((int32_t)(edi + rd32(sp0 + 8u)) < (int32_t)loc_4)
    {
        eax = loc_4;
        ecx = rd32(sp0 + 8u);
        edi = edi + rd32(sp0 + 8u);
        goto L_1018fb55;
    }
    wr8(arg1 + esi, 0u);
    return esi;
L_1018fbd2: ;
    if (rd8(ebp) == 0u) goto L_1018fbfe;
    ecx = (ecx & 0xffffff00u) | rd8(ebp);
    if (rd8(ebx + edi + 1u) == 0u) goto L_1018fbfe;
    wr8(arg1 + esi, (uint8_t)ecx);
    wr8(arg1 + esi + 1u, rd8(ebx + edi + 1u));
    esi = esi + 1u;
L_1018fbfd: ;
    esi = esi + 1u;
    goto L_1018fbfe;
L_1018fbf3: ;
    t13 = rd8(ebp);
    wr8(arg1 + esi, (uint8_t)t13);
    edx = (edx & 0xffffff00u) | t13;
    goto L_1018fbfd;
L_1018fc20: ;
    wr8(arg1, 0u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018fb30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018fb30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
