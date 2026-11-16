/* f_0x102101a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102101a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = rd32(self + 8u);
        goto L_10210255;
    }
    edx = rd32(self + 8u);
    if ((int32_t)(uint8_t)arg1 >= (int16_t)rd16(self + 4u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        goto L_10210255;
    }
    if (rd32(edx + (uint8_t)arg1 * 0x54u + 0x48u) == 0u)
    {
        eax = (uint8_t)arg1 * 8u - (uint8_t)arg1;
        goto L_10210255;
    }
    esi = rd32(edx + (uint8_t)arg1 * 0x54u + 0x48u);
    g->edx = rd16(esi);
    t1 = rd16(esi);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t1);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_10210255;
    }
    eax = t2;
    g->eax = eax;
    g->edx = rd32(self);
    t4 = rd32(self);
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, rd32(t4 + 0x20u), self, 2, esi, eax);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t6;
        goto L_10210255;
    }
    eax = t5;
    edx = t6;
    if (eax == 0x80404040u) goto L_10210255;
    if (rd32(self + 0x14u) == 0u) goto L_1021022b;
    ecx = rd32(self + 0x14u);
    t7 = (eax & 0xffff0000u) | rd16(esi);
    g->esp = sp0 - 8u;
    t8 = cow_fastcall(g, COW_IMG(0x1020fec0u), ecx, edx, 1, t7);
    t9 = g->ecx;
    t10 = g->edx;
    if ((int32_t)t8 >= 0)
    {
        edx = t10;
        goto L_1021022b;
    }
    ecx = t9;
    edx = t10;
    t11 = (ecx & 0xffffff00u) | rd8(esi + 2u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_cdecl(g, COW_IMG(0x100f89d0u), 2, t11, 1u);
    t13 = g->edx;
    g->edx = t13;
    return (t12 & 0xffffff00u) | 1u;
L_1021022b: ;
    wr8(self + 0x10u, 1u);
    t14 = rd8(esi + 2u);
    wr8(self + 0x11u, (uint8_t)t14);
    t15 = rd32(esi + 4u);
    g->eax = t15;
    g->edx = (edx & 0xffffff00u) | t14;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, COW_IMG(0x1013a870u), rd32(COW_IMG(0x10578200u)), 5, 1u, t15, COW_IMG(0x10210260u), esi, 0u);
    t17 = g->edx;
    g->edx = t17;
    return (t16 & 0xffffff00u) | 1u;
L_10210255: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102101a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102101a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
