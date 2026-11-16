/* f_0x101b9760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101b9760(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t esi;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        goto L_101b9771;
    }
    eax = rd32(self + 4u);
    return 0xffffffffu;
L_101b9771: ;
    if (rd8(arg3) == 0u)
    {
        ebp = 0u;
        goto L_101b982e;
    }
    eax = (eax & 0xffffff00u) | rd8(arg3);
    ebp = 0u;
    edi = arg1;
L_101b9788: ;
    if (rd8(arg3 + ebp) != 0x30u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + ebp);
        goto L_101b9799;
    }
    esi = rd32(rd32(rd32(self + 4u)) + 0x24u);
L_101b97df: ;
    if ((int32_t)(edi + (uint32_t)(int16_t)rd16(esi + 0x22u) - arg1 - (uint32_t)(int16_t)rd16(esi + 0x20u)) >= (int32_t)arg5) goto L_101b982e;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1011fb60u), esi, 5, edi, arg2, arg4, 0u, 0u);
    eax = (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u);
    edi = edi + (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) + 1u;
L_101b9821: ;
    if (rd8(arg3 + ebp + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + ebp + 1u);
        ebp = ebp + 1u;
        goto L_101b9788;
    }
    ebp = ebp + 1u;
L_101b982e: ;
    return ebp;
L_101b9799: ;
    if ((int8_t)eax < 49) goto L_101b97b2;
    if ((int8_t)eax > 57) goto L_101b97b2;
    esi = rd32((uint32_t)(int8_t)eax * 4u + rd32(rd32(self + 4u)) - 0xc4u);
    goto L_101b97df;
L_101b97b2: ;
    if ((int8_t)eax < 97) goto L_101b97cb;
    if ((int8_t)eax > 122) goto L_101b97cb;
    esi = rd32((uint32_t)(int8_t)eax * 4u + rd32(rd32(self + 4u)) - 0x15cu);
    goto L_101b97df;
L_101b97cb: ;
    if ((int8_t)eax < 65) goto L_101b9821;
    if ((int8_t)eax > 90) goto L_101b9821;
    esi = rd32((uint32_t)(int8_t)eax * 4u + rd32(rd32(self + 4u)) - 0x74u);
    goto L_101b97df;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b9760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b9760(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
