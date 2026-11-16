/* f_0x102acd00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102acd00(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(arg1 + 0x34u) == 0u)
    {
        g->esp = sp0 - 8u;
        t1 = cow_stdcall(g, COW_IMG(0x102a9540u), 0);
        wr32(arg1 + 0x34u, t1);
    }
    t2 = rd32(arg1 + 0x34u);
    wr32(t2 + 0x14u, arg2);
    t3 = rd32(arg1 + 0x34u);
    g->ecx = arg3;
    g->edx = t3;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102a9910u), 4, t3, 0u, arg3, 3u);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd32(arg1 + 0x34u) != 0u)
    {
        eax = rd32(arg1 + 0x34u);
        ecx = t4;
        edx = t5;
        goto L_102acd4c;
    }
    eax = rd32(arg1 + 0x34u);
    ecx = t4;
    edx = t5;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1028da40u), 3, arg1 + 0x14u, eax, arg2);
    return;
L_102acd4c: ;
    t6 = rd32(eax + 0x54u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1028da40u), 3, arg1 + 0x14u, t6, arg2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102acd00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102acd00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
