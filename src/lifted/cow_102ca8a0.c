/* f_0x102ca8a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102ca8a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = cow_divs(g, arg2 << 0xbu, arg1);
    t2 = cow_mods(g, arg2 << 0xbu, arg1);
    eax = t1;
    ecx = 0u;
L_102ca8b2: ;
    if ((int32_t)rd32(COW_IMG(0x10344dccu) + ecx * 4u) >= (int32_t)eax) goto L_102ca8c1;
    if ((int32_t)(ecx + 1u) < 31)
    {
        ecx = ecx + 1u;
        goto L_102ca8b2;
    }
    ecx = ecx + 1u;
L_102ca8c1: ;
    wr32(arg3 + 0x2d5cu, ecx + 1u);
    wr32(arg4 + 0xb64u, 0xffffffffu);
    if (rd32(arg3 + 0x2d64u) != 0u)
    {
        t3 = (uint32_t)((int32_t)(eax + (uint8_t)(uint32_t)((int32_t)(eax + 0xffu) >> 0x1fu) + 0xffu) >> 8u);
        wr32(arg4 + 0xb64u, t3);
        if ((int32_t)(uint32_t)((int32_t)(eax + (uint8_t)(uint32_t)((int32_t)(eax + 0xffu) >> 0x1fu) + 0xffu) >> 8u) < 1)
        {
            wr32(arg4 + 0xb64u, 1u);
        }
    }
    t4 = (uint32_t)((int32_t)(rd32(COW_IMG(0x10344dc8u) + rd32(arg3 + 0x2d5cu) * 4u) * arg1 + ((uint32_t)((int32_t)(rd32(COW_IMG(0x10344dc8u) + rd32(arg3 + 0x2d5cu) * 4u) * arg1) >> 0x1fu) & 0x3ffu)) >> 0xau) - (uint32_t)((int32_t)(uint32_t)((int32_t)(rd32(COW_IMG(0x10344dc8u) + rd32(arg3 + 0x2d5cu) * 4u) * arg1 + ((uint32_t)((int32_t)(rd32(COW_IMG(0x10344dc8u) + rd32(arg3 + 0x2d5cu) * 4u) * arg1) >> 0x1fu) & 0x3ffu)) >> 0xau) >> 0x1fu);
    return (uint32_t)((int32_t)t4 >> 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ca8a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ca8a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
