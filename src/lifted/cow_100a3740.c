/* f_0x100a3740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100a3740(Guest* g)
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
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x100a3610u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->eax = arg1;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x100a36f0u), 3, t1, arg1, arg2);
    t5 = g->edx;
    if (arg2 == 0u)
    {
        ecx = t4;
        goto L_100a377a;
    }
    ecx = t4;
    edx = t5;
    esi = t1;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t6 = cow_stdcall(g, COW_IMG(0x100a3680u), 0);
    t7 = g->ecx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t7;
        goto L_100a377c;
    }
    eax = t7;
    if (esi == 0u) goto L_100a377c;
    wr32(arg2, 0x80404040u);
    return eax;
L_100a377a: ;
    eax = ecx;
L_100a377c: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a3740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a3740(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
