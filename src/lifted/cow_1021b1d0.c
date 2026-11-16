/* f_0x1021b1d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1021b1d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(self + 0x36cu) >= 0) goto L_1021b254;
    if ((uint32_t)(int16_t)arg1 == 1u) goto L_1021b231;
    if ((uint32_t)(int16_t)arg1 == 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 2u;
        goto L_1021b26d;
    }
    if ((uint32_t)(int16_t)arg1 - 2u != 3u) goto L_1021b2fd;
    t1 = rd32(self + 0x378u);
    t2 = rd32(self + (uint32_t)(int16_t)rd16(self + 0x14u) * 4u + 0x34cu);
    t3 = rd16(self + 0x14u);
    wr32(self + 0x36cu, t2);
    wr32(self + 0x370u, 0u);
    wr32(self + 0x374u, 0u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t2, t1, 1, 1, t1);
    wr32(self + 0x378u, 0u);
    wr16(self + 0x14u, 0u);
    return;
L_1021b231: ;
    if ((int32_t)((uint32_t)(int16_t)rd16(self + 0x14u) + 1u) >= (int32_t)rd16(self + 0x34au)) goto L_1021b2fd;
    eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | rd16(self + 0x14u);
    wr16(self + 0x14u, (uint16_t)(eax + 1u));
    return;
L_1021b254: ;
    if ((uint32_t)(int16_t)arg1 - 1u > 0xeu) goto L_1021b2fd;
    t4 = rd32(COW_IMG(0x1021b304u) + rd8(COW_IMG(0x1021b314u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t4 - RD)
    {
    case 0x1021b26du: eax = (uint32_t)(int16_t)arg1 - 1u; goto L_1021b26d;
    case 0x1021b284u: goto L_1021b284;
    case 0x1021b2a0u: ecx = rd8(COW_IMG(0x1021b314u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1021b2a0;
    case 0x1021b2fdu: goto L_1021b2fd;
    default: rt_fatal(g, COW_IMG(0x1021b266u), "switch");
    }
    return;
L_1021b26d: ;
    if ((int16_t)rd16(self + 0x14u) <= 0) goto L_1021b2fd;
    eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
    wr16(self + 0x14u, (uint16_t)(eax - 1u));
    return;
L_1021b284: ;
    if ((int32_t)((uint32_t)(int16_t)rd16(self + 0x14u) + 1u) >= (int32_t)rd32(self + 0x370u)) goto L_1021b2fd;
    eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | rd16(self + 0x14u);
    wr16(self + 0x14u, (uint16_t)(eax + 1u));
    return;
L_1021b2a0: ;
    t5 = rd32(self + 0x378u);
    wr32(self + 0x370u, 0u);
    wr32(self + 0x374u, 0u);
    g->eax = t5;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, in_edx, 1, 1, t5);
    t7 = rd16(self + 0x34au);
    wr32(self + 0x378u, 0u);
    wr16(self + 0x14u, (uint16_t)(t7 - 1u));
    if ((int16_t)(t7 - 1u) > 0)
    {
        eax = (t6 & 0xffff0000u) | (uint16_t)(t7 - 1u);
        ecx = rd32(self + 0x36cu);
L_1021b2d9: ;
        if (ecx == rd32(self + (uint32_t)(int16_t)rd16(self + 0x14u) * 4u + 0x34cu)) goto L_1021b2f3;
        eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
        wr16(self + 0x14u, (uint16_t)(eax - 1u));
        if ((int16_t)(eax - 1u) > 0)
        {
            eax = eax - 1u;
            goto L_1021b2d9;
        }
    }
L_1021b2f3: ;
    wr32(self + 0x36cu, 0xffffffffu);
L_1021b2fd: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021b1d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021b1d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
