/* f_0x10064230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10064230(Guest* g)
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
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1006bb10u), self, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1006bb40u), self, 0);
    t4 = g->edx;
    t5 = cow_thiscall(g, COW_IMG(0x1006bb40u), self, 0);
    if (t5 == 0u) goto L_10064276;
    eax = t5;
    esi = t5;
L_10064252: ;
    ecx = rd32(esi + 0xcu);
    edx = arg1;
L_10064257: ;
    if (rd8(ecx) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx);
        goto L_1006427e;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx);
    if ((uint8_t)eax == 0x28u) goto L_1006427e;
    if ((uint8_t)eax != rd8(edx)) goto L_10064269;
    ecx = ecx + 1u;
    edx = edx + 1u;
    goto L_10064257;
L_10064269: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x1006bb40u), self, 0);
    if (t6 != 0u)
    {
        eax = t6;
        esi = t6;
        goto L_10064252;
    }
L_10064276: ;
    eax = 0u;
L_10064278: ;
    return eax;
L_1006427e: ;
    if ((uint8_t)arg2 == 0u) goto L_1006429d;
    if (rd32(esi + 0x10u) != 3u) goto L_1006429d;
    t7 = rd32(esi + 0x18u);
    g->eax = t7;
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall(g, COW_IMG(0x10064230u), self, 2, t7, 1u);
    if (t8 != 0u)
    {
        eax = t8;
        goto L_10064278;
    }
L_1006429d: ;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10064230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10064230(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
