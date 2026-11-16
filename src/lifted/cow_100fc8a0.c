/* f_0x100fc8a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100fc8a0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311ef0u), arg1, g->ecx, in_edx, 1, 2, arg1, arg2);
    t2 = g->ecx;
    if (t1 == 0u)
    {
        edx = t1;
    }
    else
    {
        ecx = t2;
        edx = t1;
        edi = arg2;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if (rd8(edx + ~ecx - 1u) == 0u)
        {
            edx = edx + ~ecx - 1u;
            goto L_100fc8db;
        }
        eax = (eax & 0xffffff00u) | rd8(edx + ~ecx - 1u);
        edx = edx + ~ecx - 1u;
L_100fc8cb: ;
        if ((uint8_t)eax == 0x20u) goto L_100fc8d3;
        if ((uint8_t)eax != 9u) goto L_100fc8db;
L_100fc8d3: ;
        if (rd8(edx + 1u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(edx + 1u);
            edx = edx + 1u;
            goto L_100fc8cb;
        }
        edx = edx + 1u;
    }
L_100fc8db: ;
    return edx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fc8a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fc8a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
