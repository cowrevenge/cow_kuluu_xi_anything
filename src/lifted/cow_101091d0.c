/* f_0x101091d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101091d0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 4u) == 0u)
    {
        edx = rd32(self + 4u);
        goto L_101091e3;
    }
    edx = rd32(self + 4u);
    if (rd32(edx + 4u) != 0u)
    {
        ebx = rd32(edx + 4u);
        goto L_1010920e;
    }
L_101091e3: ;
    eax = in_eax;
    ecx = self;
    ebx = 0u;
    esi = 0u;
L_101091e7: ;
    if (edx != 0u) goto L_10109238;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x101085c0u), 2, 8u, edx);
    t3 = g->edx;
    if (t2 == 0u)
    {
        edx = t3;
        eax = 0u;
    }
    else
    {
        eax = t2;
        edx = t3;
        wr32(eax + 4u, 0u);
        wr16(eax, 0u);
        wr16(eax + 2u, 1u);
    }
    wr32(self + 4u, eax);
    if (eax != 0u) goto L_10109238;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10109100u), self, 0);
    t4 = g->edx;
    edx = t4;
L_10109230: ;
    g->edx = edx;
    return 0u;
L_1010920e: ;
    edi = ebx;
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
    ecx = t1;
    esi = t1;
    goto L_101091e7;
L_10109238: ;
    t5 = arg1 + esi + 1u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x10109000u), rd32(self + 4u), 3, t5, ebx, esi);
    t7 = g->edx;
    if (t6 == 0u)
    {
        edx = t7;
        goto L_10109230;
    }
    eax = t6;
    edx = t7;
    g->edx = edx;
    return eax + esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101091d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101091d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
