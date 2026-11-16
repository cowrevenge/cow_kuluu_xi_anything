/* f_0x101d7bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101d7bc0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10663444u)) == 0u) goto L_101d7c04;
    ecx = rd32(COW_IMG(0x10663444u));
    if (rd8(arg1 + 6u) != 1u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(arg1 + 6u);
        goto L_101d7bf2;
    }
    t1 = (rd32(arg1 + 0x10u) & 0xffffff00u) | rd32(arg1 + 0x10u) == 0u;
    t2 = rd32(arg1 + 8u);
    t3 = (t2 & 0xffff0000u) | rd16(arg1 + 0xeu);
    t4 = (arg1 & 0xffffff00u) | rd8(arg1 + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x101d73a0u), ecx, 4, t4, t3, t2, t1);
    return;
L_101d7bf2: ;
    if ((uint8_t)edx == 0xf3u)
    {
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x6du);
    }
L_101d7c04: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d7bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d7bc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
