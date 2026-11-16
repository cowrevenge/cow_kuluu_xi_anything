/* f_0x1018fd30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018fd30(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

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
    t1 = ~ecx - 1u;
    if ((int32_t)t1 <= 0)
    {
        edi = 0u;
        goto L_1018fd7a;
    }
    ecx = t1;
    edx = in_edx;
    ebp = t1;
    esi = 0u;
    edi = 0u;
L_1018fd4e: ;
    t2 = (eax & 0xffffff00u) | rd8(arg1 + esi + 1u);
    t3 = (ecx & 0xffffff00u) | rd8(arg1 + esi);
    g->ecx = t3;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x1018fa20u), 2, t3, t2);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 3u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_1018fd73;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    if (eax == 2u) goto L_1018fd73;
    t7 = rd8(arg1 + esi);
    wr8(arg1 + edi, (uint8_t)t7);
    edx = (edx & 0xffffff00u) | t7;
    esi = esi + 1u;
    edi = edi + 1u;
L_1018fd76: ;
    if ((int32_t)esi < (int32_t)ebp) goto L_1018fd4e;
L_1018fd7a: ;
    wr8(arg1 + edi, 0u);
    return edi;
L_1018fd73: ;
    esi = esi + 2u;
    goto L_1018fd76;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018fd30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018fd30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
