/* f_0x101b96c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101b96c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        goto L_101b96d1;
    }
    eax = rd32(self + 4u);
    return 0xffffffffu;
L_101b96d1: ;
    if (rd8(arg3) == 0u)
    {
        edx = in_edx;
        ebx = 0u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(arg3);
        edx = in_edx;
        ebx = 0u;
        edi = arg1;
L_101b96e4: ;
        if (rd8(arg3 + ebx) != 0x30u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg3 + ebx);
            goto L_101b96f5;
        }
        esi = rd32(rd32(rd32(self + 4u)) + 0x24u);
L_101b9722: ;
        g->eax = arg2;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, COW_IMG(0x1011fb60u), esi, 5, edi, arg2, arg4, 0u, 0u);
        eax = t1;
        edx = (uint32_t)(int16_t)rd16(esi + 0x20u);
        edi = edi + (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) + 1u;
L_101b974a: ;
        if (rd8(arg3 + ebx + 1u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg3 + ebx + 1u);
            ebx = ebx + 1u;
            goto L_101b96e4;
        }
        ebx = ebx + 1u;
    }
    g->edx = edx;
    return ebx;
L_101b96f5: ;
    if ((int8_t)eax < 97) goto L_101b970e;
    if ((int8_t)eax > 122) goto L_101b970e;
    esi = rd32((uint32_t)(int8_t)eax * 4u + rd32(rd32(self + 4u)) - 0x15cu);
    goto L_101b9722;
L_101b970e: ;
    if ((int8_t)eax < 65) goto L_101b974a;
    if ((int8_t)eax > 90) goto L_101b974a;
    esi = rd32((uint32_t)(int8_t)eax * 4u + rd32(rd32(self + 4u)) - 0x74u);
    goto L_101b9722;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b96c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b96c0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
