/* f_0x100dfbe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=4 */
uint32_t cow_fn_100dfbe0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg1 < 0) goto L_100dfbf3;
    if ((int32_t)arg1 < 8)
    {
        eax = (in_eax & 0xffffff00u) | 1u;
        goto L_100dfbf5;
    }
L_100dfbf3: ;
    eax = in_eax & 0xffffff00u;
L_100dfbf5: ;
    if ((int32_t)arg2 < 1) goto L_100dfc06;
    if ((int32_t)arg2 <= 65535) goto L_100dfc08;
L_100dfc06: ;
    eax = eax & 0xffffff00u;
L_100dfc08: ;
    if ((int32_t)arg3 < 1) goto L_100dfc19;
    if ((int32_t)arg3 <= 999999999) goto L_100dfc1b;
L_100dfc19: ;
    eax = eax & 0xffffff00u;
L_100dfc1b: ;
    if ((int32_t)arg4 < 0) goto L_100dfc66;
    if ((int32_t)arg4 > 99) goto L_100dfc66;
    if ((uint8_t)eax == 0u) goto L_100dfc68;
    g->eax = eax;
    g->ecx = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x100df8e0u), 1, 0xeu);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100dfc66;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x100dfa80u), 1, arg1);
    t5 = g->ecx;
    t6 = g->edx;
    wr8(esi + 5u, (uint8_t)arg1);
    wr32(esi + 8u, arg3);
    wr16(esi + 0xcu, (uint16_t)arg2);
    wr32(esi + 0x10u, arg4);
    g->eax = (t4 & 0xffff0000u) | (uint16_t)arg2;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x100df930u), 2, esi, 0u);
    return (t7 & 0xffffff00u) | 1u;
L_100dfc66: ;
    eax = eax & 0xffffff00u;
L_100dfc68: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dfbe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100dfbe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
