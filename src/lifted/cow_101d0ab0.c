/* f_0x101d0ab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101d0ab0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_101d0af4;
    }
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        goto L_101d0af4;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10160700u), eax, COW_IMG(0x10621838u), g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        goto L_101d0af4;
    }
    edx = t2;
    if (rd32(rd32(COW_IMG(0x10663888u)) + 8u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10663888u)) + 8u);
        goto L_101d0af4;
    }
    eax = rd32(rd32(COW_IMG(0x10663888u)) + 8u);
    ecx = rd32(COW_IMG(0x10663888u));
    wr16(COW_IMG(0x10663178u), 2u);
    g->eax = eax;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10037fb0u), ecx, 0);
    wr8(COW_IMG(0x106218eau), 1u);
    return (t3 & 0xffffff00u) | 1u;
L_101d0af4: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d0ab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d0ab0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
