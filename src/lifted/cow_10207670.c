/* f_0x10207670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10207670(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        edx = in_edx;
        goto L_102076f7;
    }
    if (rd8(COW_IMG(0x10485640u)) == 0x12u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
        goto L_102076f1;
    }
    edx = (in_edx & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
    if (rd8(COW_IMG(0x10485642u)) != 0x12u) goto L_102076f7;
    wr8(self + 0x1cu, 1u);
L_10207691: ;
    g->esp = sp0;
    cow_fastcall(g, COW_IMG(0x101ec220u), rd32(COW_IMG(0x106636a0u)), edx, 4, 0xfffffc19u, 0xfffffc19u, 0u, 0u);
    t1 = g->edx;
    cow_fastcall(g, COW_IMG(0x101ebf10u), rd32(COW_IMG(0x1066369cu)), t1, 4, rd32(COW_IMG(0x10664438u)), 0xfffffc19u, 0xfffffc19u, 0x81u);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385554u), 1u, 0u);
    t3 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385540u), 1u, 0u);
    return;
L_102076f1: ;
    wr8(self + 0x1cu, 0u);
    goto L_10207691;
L_102076f7: ;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x57u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10207670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10207670(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
