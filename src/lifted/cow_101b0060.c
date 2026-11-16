/* f_0x101b0060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b0060(Guest* g)
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
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    t1 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), in_edx, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
        goto L_101b008f;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x10160c80u), eax, COW_IMG(0x10621838u), g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        edx = t5;
        goto L_101b008f;
    }
    ecx = t4;
    edx = t5;
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u) goto L_101b008f;
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_stdcall(g, COW_IMG(0x10087010u), 0);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        edx = t7;
        goto L_101b00a3;
    }
    edx = t7;
L_101b008f: ;
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x40u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)));
        goto L_101b00a3;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)));
    if (eax == 0u) goto L_101b00a3;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101b00a3: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b0060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b0060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
