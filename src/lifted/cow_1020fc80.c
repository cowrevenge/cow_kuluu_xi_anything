/* f_0x1020fc80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1020fc80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = rd32(self + 8u);
        goto L_1020fd4a;
    }
    edx = rd32(self + 8u);
    if ((int32_t)(uint8_t)arg1 >= (int16_t)rd16(self + 4u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        goto L_1020fd4a;
    }
    t1 = rd32(edx + (uint8_t)arg1 * 0x54u + 0x48u);
    wr32(sp0 - 0x20u, t1);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    g->eax = (uint8_t)arg1 * 8u - (uint8_t)arg1;
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x1cu;
    t2 = cow_cdecl(g, COW_IMG(0x100f8a80u), 2, sp0 - 0xcu, t1);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_1020fd4a;
    }
    edx = t3;
    ebx = t1;
    if (rd32(rd32(sp0 - 0xcu)) > arg2)
    {
        eax = arg2;
        goto L_1020fd4a;
    }
    ebp = rd32(sp0 - 0xcu);
    if (ebp + 0xcu == 0u)
    {
        eax = arg2;
        goto L_1020fd4a;
    }
    ebp = ebp + 0xcu;
    wr32(sp0 - 0x20u, rd16(ebp));
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t4 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, rd16(ebp));
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_1020fd4a;
    }
    eax = t4;
    edi = t4;
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, ebp);
    g->eax = eax;
    g->edx = rd32(self);
    t6 = rd32(self);
    g->esp = sp0 - 0x1cu;
    t7 = cow_thiscall(g, rd32(t6 + 0x20u), self, 2, ebp, edi);
    t8 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t8;
        goto L_1020fd4a;
    }
    eax = t7;
    edx = t8;
    if (eax == 0x80404040u) goto L_1020fd4a;
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, sp0 - 4u);
    t9 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x28u, t9);
    g->eax = sp0 - 8u;
    g->edx = t9;
    g->esp = sp0 - 0x1cu;
    t10 = cow_thiscall(g, COW_IMG(0x1020f860u), self, 3, t9, sp0 - 4u, sp0 - 8u);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0x80404040u)
    {
        eax = t10;
        edx = t12;
        goto L_1020fd4a;
    }
    ecx = t11;
    edx = t12;
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->ebx = ebx;
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t13 = cow_cdecl(g, COW_IMG(0x100eb800u), 1, sp0 + 4u);
    t14 = g->edx;
    if ((uint8_t)t13 != 0u) goto L_1020fd56;
    eax = t13;
    edx = t14;
    wr32(sp0 - 0x20u, 0x80u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t15 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x80u);
    t16 = g->edx;
    eax = t15;
    edx = t16;
L_1020fd4a: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1020fd56: ;
    t17 = rd32(sp0 - 0xcu);
    wr8(self + 0x10u, 1u);
    wr8(self + 0x11u, (uint8_t)ebx);
    if (rd32(t17) == 0u)
    {
        eax = t17;
        ecx = rd16(rd32(edi + 0x14c0u));
        edx = rd32(edi + 0x14c0u);
    }
    else
    {
        ecx = rd16(rd32(edi + 0x14c0u));
        esi = rd32(t17);
        t18 = cow_divu(g, arg2, esi);
        t19 = cow_modu(g, arg2, esi);
        if ((int32_t)ecx <= (int32_t)t18)
        {
            eax = t18;
            edx = t19;
        }
        else
        {
            eax = t18;
            edx = t19;
            ecx = eax;
        }
    }
    if (ecx == 0u) goto L_1020fd4a;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, COW_IMG(0x1020fdb0u));
    wr32(sp0 - 0x2cu, ecx);
    wr32(sp0 - 0x30u, 1u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t20 = cow_thiscall(g, COW_IMG(0x1013a870u), rd32(COW_IMG(0x10578200u)), 5, 1u, ecx, COW_IMG(0x1020fdb0u), 0u, 0u);
    t21 = g->edx;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    g->edx = t21;
    return (t20 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020fc80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020fc80(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
