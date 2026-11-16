/* f_0x1015c050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1015c050(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr32(arg1 + 0x14c8u, COW_IMG(0x103d3c84u));
    eax = 0u;
    ecx = arg1 + 8u;
L_1015c067: ;
    wr32(ecx, COW_IMG(0x103d3c84u));
    wr8(arg1 + eax + 4u, 0u);
    if ((int32_t)(eax + 1u) < 2)
    {
        eax = eax + 1u;
        ecx = ecx + 4u;
        goto L_1015c067;
    }
    ecx = ecx + 4u;
    g->ecx = ecx;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x102574f0u), 1, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 1u)
    {
        ecx = t2;
        edx = t3;
        g->esp = sp0 - 8u;
        t4 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 0u);
        wr32(arg1 + 8u, t4);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015c050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1015c050(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
