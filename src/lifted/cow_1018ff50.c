/* f_0x1018ff50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018ff50(Guest* g)
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
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(COW_IMG(0x10456a28u));
    edi = arg1;
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
    if ((int8_t)rd8(t1 + 0x18u) >= 0)
    {
        eax = t2;
        ecx = (t2 & 0xffffff00u) | rd8(t1 + 0x18u);
        edx = t1;
        esi = rd32(t1 + 8u);
        loc_4 = t2;
        goto L_1018ff8b;
    }
    eax = t2;
    ecx = (t2 & 0xffffff00u) | rd8(t1 + 0x18u);
    edx = t1;
    esi = rd32(t1 + 8u);
    loc_4 = t2;
    if (esi == 2u) goto L_1019000e;
    if (esi == 3u) goto L_1019000e;
L_1018ff8b: ;
    if (esi == 2u)
    {
        if ((int32_t)eax <= 0)
        {
            loc_c = 0u;
            goto L_10190008;
        }
        ebx = in_ebx;
        ebp = 0u;
        esi = 1u;
        loc_10 = rd32(sp0 - 0x10u) & 0xffffffu;
        loc_c = 0u;
        loc_8 = rd32(sp0 - 8u);
L_1018ffa6: ;
        if (esi == 0u) goto L_10190008;
        t3 = (loc_8 & 0xffffff00u) | rd8(arg1 + ebp);
        g->ecx = ecx;
        g->edx = edx;
        t4 = rd8(arg1 + ebp);
        g->esp = sp0 - 0x20u;
        t5 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, t3, 0u);
        t6 = g->ecx;
        t7 = g->edx;
        g->edx = t7;
        g->esp = sp0 - 0x28u;
        t8 = cow_cdecl(g, COW_IMG(0x1018fa20u), 2, t3, 0u);
        t9 = g->edx;
        if (t8 != 0u)
        {
            edx = t9;
            ebx = (ebx & 0xffffff00u) | t4;
            esi = t5;
            loc_8 = (loc_8 & 0xffffff00u) | t4;
        }
        else
        {
            eax = t8;
            edx = t9;
            ebx = (ebx & 0xffffff00u) | t4;
            esi = t5;
            loc_8 = (loc_8 & 0xffffff00u) | t4;
            if ((uint8_t)ebx == 0x22u)
            {
                if (loc_10 >> 0x18u != 0u)
                {
                    loc_10 = loc_10 & 0xffffffu;
                }
                else
                {
                    loc_10 = (loc_10 & 0xffffffu) | 0x1000000u;
                    loc_c = loc_c + 1u;
                }
            }
        }
        if ((int32_t)(ebp + esi) < (int32_t)loc_4)
        {
            ecx = esi + loc_c;
            ebp = ebp + esi;
            loc_c = esi + loc_c;
            goto L_1018ffa6;
        }
        loc_c = esi + loc_c;
L_10190008: ;
        eax = loc_c;
    }
L_1019000e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018ff50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018ff50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
