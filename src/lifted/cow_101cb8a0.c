/* f_0x101cb8a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101cb8a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint16_t)rd32(COW_IMG(0x1037d378u)) == 0u) goto L_101cb8c4;
    eax = rd32(COW_IMG(0x1037d378u));
    ecx = COW_IMG(0x1037d378u);
L_101cb8b3: ;
    if ((uint16_t)arg1 == (uint16_t)eax) goto L_101cb8eb;
    if (rd16(ecx + 2u) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(ecx + 2u);
        ecx = ecx + 2u;
        goto L_101cb8b3;
    }
L_101cb8c4: ;
    g->edx = arg1;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100fee70u), 3, arg1, arg2, arg3);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101cb8f6;
    }
    eax = t1;
    edx = t2;
    if (arg4 != 0u)
    {
        t3 = rd8(eax + 1u);
        wr8(arg4, (uint8_t)t3);
        edx = (edx & 0xffffff00u) | t3;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101cb8eb: ;
    if (arg4 == 0u)
    {
        eax = arg4;
        edx = arg1;
    }
    else
    {
        wr8(arg4, 0u);
        eax = arg4;
        edx = arg1;
    }
L_101cb8f6: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cb8a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cb8a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
