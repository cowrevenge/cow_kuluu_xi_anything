/* f_0x10029b60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10029b60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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

    ecx = self;
    edx = in_edx;
    esi = COW_IMG(0x10457148u);
L_10029b66: ;
    if (rd32(esi) == 0u)
    {
        eax = rd32(esi);
    }
    else
    {
        eax = rd32(esi);
        g->eax = eax;
        g->edx = edx;
        t1 = rd32(eax);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1 + 8u), t1, 1, eax);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(esi, 0u);
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x10457158u))
    {
        esi = esi + 4u;
        goto L_10029b66;
    }
    wr32(COW_IMG(0x10457548u), 0u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t5 = cow_fastcall(g, COW_IMG(0x10025220u), ecx, edx, 0);
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    t8 = cow_stdcall(g, COW_IMG(0x10025be0u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    t11 = cow_fastcall(g, COW_IMG(0x100389c0u), t9, t10, 0);
    t12 = g->ecx;
    t13 = g->edx;
    t14 = cow_fastcall(g, COW_IMG(0x100336d0u), t12, t13, 0);
    t15 = g->ecx;
    t16 = g->edx;
    g->esp = sp0;
    g->edx = t16;
    cow_tailcall(g, COW_IMG(0x1001d110u), t14, t15, t16);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10029b60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10029b60(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
