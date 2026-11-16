/* f_0x102f20f9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102f20f9(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((rd8(arg1 + 0x10cu) & 0x20u) == 0u) goto L_102f2115;
    if ((rd32(arg1 + 0x5cu) & 0x300u) != 0x300u)
    {
        ecx = 0x300u;
        edx = rd32(arg1 + 0x5cu) & 0x300u;
        goto L_102f211b;
    }
    edx = rd32(arg1 + 0x5cu) & 0x300u;
    g->edx = edx;
    return;
L_102f2115: ;
    if ((rd8(arg1 + 0x5du) & 8u) != 0u)
    {
        edx = in_edx;
        goto L_102f2137;
    }
    ecx = self;
    edx = in_edx;
L_102f211b: ;
    t1 = rd32(arg1 + 0x100u);
    g->edx = edx;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x102f89fbu), 4, t1, arg2, arg3, in_esi);
    t3 = g->edx;
    wr32(arg1 + 0x100u, t2);
    edx = t3;
L_102f2137: ;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f20f9(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f20f9(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
