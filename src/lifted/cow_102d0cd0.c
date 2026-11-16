/* f_0x102d0cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102d0cd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(COW_IMG(0x10344ac0u) + arg1 * 4u);
    eax = rd32(COW_IMG(0x10344bf4u) + rd32(arg1 * 4u + arg3) * 4u) * t1 + 0x3cu;
    ecx = arg2 + (uint32_t)((int32_t)rd32(COW_IMG(0x10344dc8u) + arg1 * 4u) >> 2u) * 4u;
    edx = rd32(COW_IMG(0x10344bd8u) + rd32(arg1 * 4u + arg3) * 4u);
    ebx = arg2 + (uint32_t)((int32_t)t1 >> 2u) * 4u + (uint32_t)((int32_t)rd32(COW_IMG(0x10344dc8u) + arg1 * 4u) >> 2u) * 4u;
    esi = rd32(arg1 * 4u + arg3 + 0x80u) - rd32(COW_IMG(0x10344c10u) + rd32(arg1 * 4u + arg3) * 4u);
L_102d0d22: ;
    if ((int32_t)rd32(ecx) >= (int32_t)esi)
    {
        ecx = ecx + 4u;
    }
    else
    {
        ecx = ecx + 4u;
        eax = eax - edx;
    }
    if ((int32_t)rd32(ecx) >= (int32_t)esi)
    {
        ecx = ecx + 4u;
    }
    else
    {
        ecx = ecx + 4u;
        eax = eax - edx;
    }
    if (ecx < ebx) goto L_102d0d22;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d0cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d0cd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
