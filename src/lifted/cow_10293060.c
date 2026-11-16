/* f_0x10293060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10293060(Guest* g)
{
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 0x1cu) + 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t1, 4u, COW_IMG(0x103bb254u), 0x46bu, in_edi);
    t3 = g->edx;
    if ((int32_t)rd32(arg1 + 0x1cu) < 0)
    {
        eax = 0u;
        ecx = rd32(arg1 + 0x1cu);
        edx = t3;
        edi = t2;
        goto L_10293099;
    }
    eax = 0u;
    edx = t3;
    edi = t2;
L_1029308a: ;
    d4 = (double)rdf32(sp0 + 8u);
    wrf32(eax * 4u + edi, (float)d4);
    if ((int32_t)(eax + 1u) <= (int32_t)rd32(arg1 + 0x1cu))
    {
        eax = eax + 1u;
        goto L_1029308a;
    }
    eax = eax + 1u;
    ecx = rd32(arg1 + 0x1cu);
L_10293099: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102930c0u), 2, arg1, edi);
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103bb254u), 0x470u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10293060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10293060(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
