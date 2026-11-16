/* f_0x10112c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10112c20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 != 0u)
    {
        edx = in_edx;
        goto L_10112c69;
    }
    if (rd32(COW_IMG(0x10662dccu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662dccu));
        goto L_10112c3e;
    }
    return 3u;
L_10112c3e: ;
    if (rd32(self + 0x900u) == 0u) goto L_10112c57;
    eax = rd32(self + 0x900u);
    if (rd8(eax) == 0u) goto L_10112c57;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101c4b60u), ecx, 2, eax, 0u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
L_10112c63: ;
    wr32(self + 0x8f8u, eax);
L_10112c69: ;
    if ((int32_t)rd32(self + 0x8f8u) > 0) goto L_10112c7c;
    g->edx = edx;
    return 3u;
L_10112c57: ;
    t3 = rd32(self + 0x8f4u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x101c4af0u), ecx, 1, t3);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    goto L_10112c63;
L_10112c7c: ;
    wr32(self + 0x8fcu, 0u);
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10112c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10112c20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
