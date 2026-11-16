/* f_0x101dcc50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101dcc50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->ecx = rd32(COW_IMG(0x106631d4u));
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x106631d4u));
    t2 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u) goto L_101dcc8b;
    ecx = t3;
    edx = t4;
    if ((rd8(rd32(sp0 + 4u) + 0x11u) & 0x40u) == 0u) goto L_101dcc8b;
    eax = rd32(sp0 + 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x128u);
    t6 = g->edx;
    if (t5 == 0u) goto L_101dcc8b;
    eax = t5;
    edx = t6;
    t7 = rd32(COW_IMG(0x10578158u));
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10129e80u), eax, t7, edx);
    return;
L_101dcc8b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dcc50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101dcc50(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
