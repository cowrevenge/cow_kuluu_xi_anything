/* f_0x1018fc40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018fc40(Guest* g)
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
    uint32_t t14;
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

    t1 = rd32(sp0 + 4u);
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
    wr32(sp0 + 4u, 0u);
    if ((int32_t)(~ecx - 1u) <= 0)
    {
        ebx = t1;
        esi = 0u;
        loc_4 = t2;
        goto L_1018fcb9;
    }
    ecx = t2;
    edx = in_edx;
    ebx = t1;
    esi = 0u;
    loc_4 = t2;
L_1018fc63: ;
    t3 = (ecx & 0xffffff00u) | rd8(ebx + rd32(sp0 + 4u));
    g->ecx = t3;
    t4 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, t3, 0u);
    t6 = g->ecx;
    t7 = (t5 & 0xffffff00u) | rd8(ebx + rd32(sp0 + 4u) + 1u);
    t8 = (t6 & 0xffffff00u) | rd8(ebx + t4);
    g->edx = rd32(sp0 + 4u);
    t9 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x1cu;
    t10 = cow_cdecl(g, COW_IMG(0x1018fa20u), 2, t8, t7);
    t11 = g->edx;
    if (t10 == 3u) goto L_1018fcb9;
    eax = t10;
    edx = t11;
    ebp = t5;
    edi = ebx + t4;
    if (eax == 2u) goto L_1018fcb9;
    if ((int32_t)ebp <= 0) goto L_1018fca7;
    eax = 0u;
L_1018fc9b: ;
    t12 = rd8(eax + edi);
    wr8(ebx + esi, (uint8_t)t12);
    if ((int32_t)(eax + 1u) < (int32_t)ebp)
    {
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t12;
        esi = esi + 1u;
        goto L_1018fc9b;
    }
    edx = (edx & 0xffffff00u) | t12;
    esi = esi + 1u;
L_1018fca7: ;
    t13 = ebp + rd32(sp0 + 4u);
    t14 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t13);
    if ((int32_t)(ebp + t14) < (int32_t)loc_4)
    {
        ecx = loc_4;
        goto L_1018fc63;
    }
L_1018fcb9: ;
    wr8(ebx + esi, 0u);
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018fc40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018fc40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
