/* f_0x100f8cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f8cc0(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100f8ce1;
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xa0u, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_100f8ce5;
    }
    eax = t1;
L_100f8ce1: ;
    return eax & 0xffffff00u;
L_100f8ce5: ;
    wr8(esi + 4u, (uint8_t)arg1);
    if (arg2 == 0u)
    {
        edi = esi + 5u;
        wr8(edi, 0u);
    }
    else
    {
        edi = esi + 5u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10312090u), arg2, g->ecx, g->edx, 1, 3, edi, arg2, 0x97u);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    wr8(esi + 0x9bu, 0u);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t6 = ~ecx - 1u;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, esi, 6u, t6);
    return (t7 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f8cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f8cc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
