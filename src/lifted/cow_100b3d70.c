/* f_0x100b3d70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100b3d70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = cow_cdecl(g, COW_IMG(0x100b3660u), 1, arg1);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100b3db1;
    }
    eax = t1;
    if (rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u);
        goto L_100b3db1;
    }
    ecx = rd32(eax);
    eax = rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u);
    if (!(rd32(eax + 0x120u) >> 7u & 1u)) goto L_100b3db1;
    edx = rd32(eax + 0x120u) >> 7u;
    if ((int8_t)rd8(eax + 0x120u) >= 0) goto L_100b3db1;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x100b3820u), eax, rd32(eax + 0xd4u), edx);
L_100b3db1: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b3d70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100b3d70(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
