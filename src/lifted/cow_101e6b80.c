/* f_0x101e6b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e6b80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x38u, 4u);
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x28u, 6u);
    wr32(sp0 - 0x14u, 6u);
    wr32(sp0 - 0x4cu, 2u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x48u, 2u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x40u, 3u);
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x34u, 2u);
    wr32(sp0 - 0x30u, 5u);
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x20u, 7u);
    wr32(sp0 - 0x1cu, 5u);
    wr32(sp0 - 0x18u, 8u);
    wr32(sp0 - 0x10u, 9u);
    wr32(sp0 - 0xcu, 7u);
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 4u, 0xffffffffu);
    g->esp = sp0 - 0x48u;
    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 2u);
    if (arg1 == 2u)
    {
        eax = 0u;
        goto L_101e6c34;
    }
    eax = 0u;
    ecx = 2u;
L_101e6c26: ;
    if (ecx == 0xffffffffu) goto L_101e6c4c;
    if (rd32(eax * 8u + sp0 - 0x40u) != arg1)
    {
        ecx = rd32(eax * 8u + sp0 - 0x40u);
        eax = eax + 1u;
        goto L_101e6c26;
    }
    eax = eax + 1u;
L_101e6c34: ;
    if ((int32_t)rd32(eax * 8u + sp0 - 0x44u) < 0) goto L_101e6c4c;
    eax = rd32(eax * 8u + sp0 - 0x44u);
    if ((int32_t)eax >= 8) goto L_101e6c4c;
    return COW_IMG(0x1066356au) + eax * 3u;
L_101e6c4c: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e6b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e6b80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
