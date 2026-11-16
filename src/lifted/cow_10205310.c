/* f_0x10205310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10205310(Guest* g)
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
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), self, 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1020533d;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
L_1020531e: ;
    if ((rd8(eax + 0x34u) & 0x10u) != 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x100e9420u), 3, 0u, eax + 2u, 5u);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_1020531e;
    }
    eax = t6;
    edx = t8;
L_1020533d: ;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385498u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10205310(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
