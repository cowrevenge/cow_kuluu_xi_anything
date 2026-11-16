/* f_0x10313e0b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10313e0b(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    t1 = rd32(rd32(sp0 + 4u) + 0x10u);
    if ((int32_t)rd32(rd32(sp0 + 4u) + 4u) >= 0)
    {
        esi = t1;
        edi = rd32(sp0 + 4u);
        loc_10 = t1;
    }
    else
    {
        esi = t1;
        edi = rd32(sp0 + 4u);
        loc_10 = t1;
        wr32(edi + 4u, 0u);
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t2 = cow_cdecl(g, COW_IMG(0x1031f0f0u), 3, esi, 0u, 1u);
    t3 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        edx = t3;
        goto L_10313e99;
    }
    eax = t2;
    edx = t3;
    loc_8 = t2;
    if ((rd32(edi + 0xcu) & 0x108u) != 0u)
    {
        ecx = rd32(edi + 0xcu);
        goto L_10313e4c;
    }
    eax = eax - rd32(edi + 4u);
L_10313f67: ;
    g->edx = edx;
    return eax;
L_10313e4c: ;
    t4 = rd32(edi) - rd32(edi + 8u);
    if ((ecx & 3u) == 0u)
    {
        eax = rd32(edi);
        edx = rd32(edi + 8u);
        loc_c = t4;
        goto L_10313e89;
    }
    eax = rd32(edi);
    edx = rd32(edi + 8u);
    loc_c = t4;
    if ((rd8((esi & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)esi >> 5u) * 4u) + 4u) & 0x80u) != 0u)
    {
        ecx = edx;
L_10313e7a: ;
        if (ecx >= eax) goto L_10313ea1;
        if (rd8(ecx) == 0xau)
        {
            loc_c = loc_c + 1u;
        }
        ecx = ecx + 1u;
        goto L_10313e7a;
    }
L_10313ea1: ;
    if (loc_8 != 0u)
    {
        if (rd8(edi + 0xcu) & 1u)
        {
            if (rd32(edi + 4u) != 0u)
            {
                ecx = rd32(edi + 4u);
                t7 = eax + ecx - edx;
                wr32(sp0 + 4u, t7);
                if ((rd8((esi & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)esi >> 5u) * 4u) + 4u) & 0x80u) != 0u)
                {
                    ebx = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)esi >> 5u) * 4u;
                    esi = (esi & 0x1fu) * 0x24u;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t8 = cow_cdecl(g, COW_IMG(0x1031f0f0u), 3, loc_10, 0u, 2u);
                    t9 = g->ecx;
                    t10 = g->edx;
                    if (t8 != loc_8)
                    {
                        ecx = t9;
                        edx = t10;
                        g->edx = edx;
                        g->esp = sp0 - 0x1cu;
                        cow_cdecl(g, COW_IMG(0x1031f0f0u), 3, loc_10, loc_8, 0u);
                        t11 = g->edx;
                        if (rd32(sp0 + 4u) > 0x200u)
                        {
                            edx = t11;
                            goto L_10313f47;
                        }
                        edx = t11;
                        if ((rd32(edi + 0xcu) & 8u) == 0u) goto L_10313f47;
                        ecx = rd32(edi + 0xcu);
                        if ((ecx >> 8u & 4u) == 0u)
                        {
                            eax = 0x200u;
                            goto L_10313f4a;
                        }
L_10313f47: ;
                        eax = rd32(edi + 0x18u);
L_10313f4a: ;
                        wr32(sp0 + 4u, eax);
                        zf = (rd8(esi + rd32(ebx) + 4u) & 4u) == 0u;
                    }
                    else
                    {
                        edx = t10;
                        eax = rd32(edi + 8u);
                        ecx = rd32(edi + 8u) + rd32(sp0 + 4u);
L_10313f0b: ;
                        if (eax >= ecx) goto L_10313f1a;
                        if (rd8(eax) == 0xau)
                        {
                            wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
                        }
                        eax = eax + 1u;
                        goto L_10313f0b;
                    }
L_10313f54: ;
                    if (!zf)
                    {
                        wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
                    }
                }
                t12 = loc_8 - rd32(sp0 + 4u);
                loc_8 = t12;
            }
            else
            {
                ecx = rd32(edi + 4u);
                loc_c = loc_c & ecx;
            }
        }
        eax = loc_8 + loc_c;
    }
    else
    {
        eax = loc_c;
    }
    goto L_10313f67;
L_10313e89: ;
    if ((ecx & 0x80u) != 0u) goto L_10313ea1;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t5 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t6 = g->edx;
    wr32(t5, 0x16u);
    eax = t5;
    edx = t6;
L_10313e99: ;
    eax = 0xffffffffu;
    goto L_10313f67;
L_10313f1a: ;
    zf = (rd8(edi + 0xdu) & 0x20u) == 0u;
    goto L_10313f54;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10313e0b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10313e0b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
