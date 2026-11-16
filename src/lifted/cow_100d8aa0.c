/* f_0x100d8aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100d8aa0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_100d8ad9;
    t1 = rd32(arg1 + 0x46cu);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x103291c8u)), 2, t1, 0x32u);   /* kernel32.dll!WaitForSingleObject */
    t3 = g->edx;
    if (t2 != 0u) goto L_100d8ad9;
    eax = t2;
    edx = t3;
    t4 = rd32(arg1 + 0x46cu);
    t5 = rd32(arg1);
    g->esp = sp0 - 8u;
    cow_stdcall(g, rd32(COW_IMG(0x103291ccu)), 1, t4);   /* kernel32.dll!ReleaseMutex */
    if (t5 == 0u) goto L_100d8ad9;
    return arg1 + 0x47cu;
L_100d8ad9: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d8aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d8aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
