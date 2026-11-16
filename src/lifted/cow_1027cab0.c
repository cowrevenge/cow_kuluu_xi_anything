/* f_0x1027cab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1027cab0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    ecx = self;
    edx = in_edx;
    esi = arg1;
L_1027caba: ;
    t1 = rd32(esi + 0x64u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10291920u), 3, t1, arg2, in_edi);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(esi + 0x6cu) == 0u)
    {
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = rd32(esi + 0x6cu);
        ecx = t2;
        edx = t3;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1027cab0u), 2, eax, arg2);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    if (rd32(esi + 0x70u) != 0u)
    {
        esi = rd32(esi + 0x70u);
        goto L_1027caba;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027cab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027cab0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
