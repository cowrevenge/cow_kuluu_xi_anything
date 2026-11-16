/* f_0x101b6d50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101b6d50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0xf110u) != 5u)
    {
        ecx = self;
        edx = in_edx;
        goto L_101b6d87;
    }
    if (arg2 == 2u)
    {
        eax = in_eax;
        goto L_101b6e27;
    }
    g->eax = (uint16_t)arg1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x1011d8b0u), 1, (uint16_t)arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_101b6e27;
    }
    ecx = t2;
    edx = t3;
L_101b6d87: ;
    if (rd32(self + 0xf110u) != 4u)
    {
        eax = rd32(self + 0xf110u);
        goto L_101b6da1;
    }
    eax = rd32(self + 0xf110u);
    if (arg2 != 1u) goto L_101b6da1;
    if ((uint16_t)arg1 >= 0x20u) goto L_101b6e27;
L_101b6da1: ;
    if (eax != 3u) goto L_101b6dc0;
    if (arg2 != 1u) goto L_101b6dc0;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x10314841u), (uint16_t)arg1, 1, (uint16_t)arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        goto L_101b6e27;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
L_101b6dc0: ;
    if (rd32(self + 0xf110u) != 2u) goto L_101b6de3;
    if (arg2 != 1u) goto L_101b6de3;
    g->eax = eax;
    g->edx = (uint16_t)arg1;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x10314841u), ecx, 1, (uint16_t)arg1);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        eax = t7;
        goto L_101b6e27;
    }
    ecx = t8;
    edx = t9;
L_101b6de3: ;
    if (rd32(self + 0xf110u) != 0u)
    {
        eax = rd32(self + 0xf110u);
        goto L_101b6e06;
    }
    eax = rd32(self + 0xf110u);
    if (arg2 != 1u) goto L_101b6e06;
    g->eax = (uint16_t)arg1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x1031471eu), 1, (uint16_t)arg1);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        eax = t10;
        goto L_101b6e27;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
L_101b6e06: ;
    if (rd32(self + 0xf110u) != 1u) goto L_101b6e2f;
    if (arg2 != 1u) goto L_101b6e2f;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x1031479cu), ecx, 1, (uint16_t)arg1);
    if (t13 == 0u)
    {
        eax = t13;
        goto L_101b6e2f;
    }
    eax = t13;
L_101b6e27: ;
    return (eax & 0xffffff00u) | 1u;
L_101b6e2f: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b6d50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b6d50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
