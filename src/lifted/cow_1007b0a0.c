/* f_0x1007b0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007b0a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(rd32(COW_IMG(0x103551e0u)) + 4u) != 0u)
    {
        ecx = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        goto L_1007b0b3;
    }
    return -arg3;
L_1007b0b3: ;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = rd32(COW_IMG(0x10456a28u));
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = rd32(COW_IMG(0x10456a28u));
        if (eax == 2u) goto L_1007b0cf;
        if (eax != 3u) goto L_1007b0d4;
L_1007b0cf: ;
        eax = 1u;
    }
L_1007b0d4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100ec350u), 4, eax, ecx, COW_IMG(0x1007b0f0u), 0u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = arg3;
        edx = t2;
    }
    else
    {
        edx = t2;
        eax = -arg3;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007b0a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007b0a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
