/* f_0x10277910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10277910(Guest* g)
{
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg2 > 0) goto L_1027793c;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37b4u));
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3758u), arg2);
    esi = 1u;
L_10277962: ;
L_10277965: ;
    t7 = esi * 2u - 2u | (rd32(arg1 + 0x68u) & 0xfffffff9u);
    wr32(arg1 + 0x68u, t7);
    return;
L_1027793c: ;
    if ((int32_t)arg2 <= 4)
    {
        esi = arg2;
        goto L_10277965;
    }
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37b4u));
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b36f8u), arg2);
    esi = 4u;
    goto L_10277962;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10277910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10277910(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
