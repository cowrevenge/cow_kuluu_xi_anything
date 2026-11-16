/* f_0x10278e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10278e30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10277a70u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        esi = t1;
        goto L_10278e6f;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 + 8u, COW_IMG(0x103b3c14u));
    wr32(sp0 + 4u, COW_IMG(0x103b3ae4u));
    g->esp = sp0;
    g->edx = t7;
    cow_tailcall(g, COW_IMG(0x102858b0u), t5, t6, t7);
    return;
L_10278e6f: ;
    if (rd32(sp0 + 8u) != 0xffffffffu)
    {
        eax = rd32(sp0 + 8u);
        goto L_10278e8b;
    }
    t8 = rd32(esi + 0xa8u) ^ 0x8000u;
    wr32(esi + 0xa8u, t8);
    return;
L_10278e8b: ;
    if (eax == 0u)
    {
        eax = rd32(esi + 0xa8u);
        goto L_10278ea0;
    }
    eax = rd32(esi + 0xa8u);
    t9 = (eax & 0xffff00ffu) | (uint8_t)(eax >> 8u | 0x80u) << 8u;
    wr32(esi + 0xa8u, t9);
    return;
L_10278ea0: ;
    t10 = (eax & 0xffff00ffu) | (eax >> 8u & 0x7fu) << 8u;
    wr32(esi + 0xa8u, t10);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10278e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10278e30(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
