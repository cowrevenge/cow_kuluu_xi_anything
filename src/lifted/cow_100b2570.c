/* f_0x100b2570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_100b2570(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x10663888u)) != 0u)
    {
        if (arg1 != (uint32_t)(int8_t)rd8(COW_IMG(0x104882b4u)))
        {
            eax = ((uint32_t)(int8_t)rd8(COW_IMG(0x104882b4u)) & 0xffff0000u) | rd16(COW_IMG(0x104896e6u));
            edx = in_edx;
            goto L_100b25af;
        }
        eax = ((uint32_t)(int8_t)rd8(COW_IMG(0x104882b4u)) & 0xffff0000u) | rd16(COW_IMG(0x104896e6u));
        if (arg2 != (uint32_t)(int16_t)eax)
        {
            edx = in_edx;
            goto L_100b25af;
        }
        if ((int32_t)arg3 < 0) goto L_100b25ec;
        if (arg3 == (uint32_t)(int16_t)rd16(COW_IMG(0x104897f6u))) goto L_100b25ec;
        edx = (uint32_t)(int16_t)rd16(COW_IMG(0x104897f6u));
L_100b25af: ;
        if ((uint16_t)eax != 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1035d2c0u));
            t1 = g->edx;
            edx = t1;
        }
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x101f78e0u), arg5, g->ecx, g->edx, 1, 5, arg1, arg2, arg3, arg4, arg5);
        wr8(COW_IMG(0x104882b4u), (uint8_t)arg1);
        wr16(COW_IMG(0x104896e6u), (uint16_t)arg2);
        wr16(COW_IMG(0x104897f6u), (uint16_t)arg3);
    }
L_100b25ec: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b2570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b2570(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
