/* f_0x1025bb20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025bb20(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
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
    if (~ecx - 1u < 2u)
    {
        edx = in_edx;
        goto L_1025bb66;
    }
    ecx = ~ecx - 1u;
    if (rd32(COW_IMG(0x1038acccu)) == 0u)
    {
        edx = in_edx;
        goto L_1025bb66;
    }
    eax = COW_IMG(0x1038acccu);
    edx = in_edx;
    esi = COW_IMG(0x1038acccu);
L_1025bb48: ;
    g->edx = edx;
    t1 = rd32(eax);
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, t1, 2u, in_edi, in_esi);
    t3 = g->edx;
    if (t2 == 0u)
    {
        edx = t3;
        goto L_1025bb6c;
    }
    edx = t3;
    if (rd32(esi + 4u) != 0u)
    {
        eax = esi + 4u;
        ecx = rd32(esi + 4u);
        esi = esi + 4u;
        goto L_1025bb48;
    }
L_1025bb66: ;
    g->edx = edx;
    return 0u;
L_1025bb6c: ;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025bb20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025bb20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
